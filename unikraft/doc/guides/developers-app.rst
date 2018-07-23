****************************
Application Development and Porting
****************************
Porting an application to Unikraft should be for the most part
relatively painless given that the available Unikraft libraries
provide all of the application's dependencies. In most cases, the
porting effort requires no changes (or in the worst case small
patches) to the actual application code. At a high level, most of the
work consists of creating a Unikraft makefile called **Makefile.uk**
that Unikraft uses to compile the application's source code (i.e.,
generally we avoid using an application's native Makefile(s), if any,
and rely on Unikraft's build system to build the necessary objects with
correct and compatible compiler and linker flags).

In greater detail, in order for an application to work with Unikraft
you need to provide at least the following three files:

 * **Makefile**: Used to specify where the main Unikraft repo is with
   respect to the application's repo, as well as repos for any external
   libraries the application needs to use.

 * **Makefile.uk**: The main Makefile used to specify which sources to
   build (and optionally where to fetch them from), include paths, flags
   and any application-specific targets.

 * **Config.uk**: A Kconfig-like snippet used to populate Unikraft's
   menu with application-specific options.

The Makefile is generally short and simple and might remind you to
Linux kernel modules that are built off-tree. For most applications
the Makefile should contain no more than the following: ::

  UK_ROOT ?= $(PWD)/../../unikraft
  UK_LIBS ?= $(PWD)/../../unikraft-libs
  LIBS := $(UK_LIBS)/lib1:$(UK_LIBS)/lib2:$(UK_LIBS)/libN

  all:
          @make -C $(UK_ROOT) A=$(PWD) L=$(LIBS)

  $(MAKECMDGOALS):
	  @make -C $(UK_ROOT) A=$(PWD) L=$(LIBS) $(MAKECMDGOALS)

We cover the format of the other two files in turn next, followed by
an explanation of the build process.

============================
Config.uk
============================
Unikraft's configuration system is based on Linux's KConfig system. With
Config.uk you define possible configurations for your application and define
dependencies to other libraries. This file is included by Unikraft to render the
menu-based configuration, and to load and store configurations (aka ``.config``).
Each setting that is defined in this file will be globally populated as set
variable for all ``Makefile.uk`` file, as defined macro in your source code when
you use ``"#include <uk/config.h>"``. Please ensure that all settings are
properly name spaced. They should begin with ``[APPNAME]_`` (e.g.,
``APPHELLOWORLD_``). Please also not that some variable names are predefined for
each application or library name space (see Makefile.uk).

We recommend as current best practice to begin the file with defining
dependencies with an invisible boolean option that is set to ``y``: ::

  ### Invisible option for dependencies
  config APPHELLOWORLD_DEPENDENCIES
  	bool
  	default y
  	# dependencies with `select`:
  	select LIBNOLIBC if !HAVE_LIBC
  	select LIB1
  	select LIB2

In this example, ``LIB1`` and ``LIB2`` would been enabled (the user can't
unselect them). Additionally, if the user did not provide and select any libc
the Unikraft internal replacement ``libnolibc`` would be selected. Of course
you could also directly define a dependency on a particular libc
(e.g., ``libnewlib``), instead.
You can also depend on feature flags (like ``HAVE_LIBC``) to provide or hide
options. The feature flag ``HAVE_LIBC`` in this example is set as soon as a
proper and full-fledged libc was selected by the user. You can get an overview
of available feature flags in ``libs/Config.uk``.

Any other setting of your application can be a type of boolean, int, or string.
You are even able to define dropdown-selections. You can find a documentation of
the syntax at the Linux kernel tree:
https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/plain/Documentation/kbuild/kconfig-language.txt
Please note that Unikraft does not have tristates (the ``m`` option is not
available). ::

  ### App configuration
  config APPHELLOWORLD_OPTION
  	bool "Boolean Option 1"
  	default y
  	help
  	  Help text of Option 1

============================
Makefile.uk
============================
The Unikraft build system provides a number of functions and macros to
make it easier to write the Makefile.uk file. Also, please ensure that
all variables that you define begin with ``APP[NAME]_`` (e.g.,
``APPHELLOWORLD_``) so that they are properly namespaced.

The first thing to do is to call the Unikraft ``addlib`` function to
register the application with the system (note the letters "lib":
everything in Unikraft is ultimately a library). This function call
will also populate ``APPNAME_BASE`` (containing the directory path to
the application sources) and ``APPNAME_BUILD`` (containing the directory path to
the application's build directory): ::

  $(eval $(call addlib,appname))

where ``name`` would be replaced by your application's name. In case your
main application code should be downloaded as archive from a remote server, the
next step is to set up a variable to point to a URL with the
application sources (or objects, or pre-linked libraries, see further
below) - if required. and to call Unikraft's ``fetch`` command to download and
uncompress those sources (``APPNAME_ORIGIN`` is populated containing the
directory path to the extracted files) ::

  APPNAME_ZIPNAME=myapp-v0.0.1
  APPNAME_URL=http://app.org/$(APPNAME_ZIPNAME).zip
  $(eval $(call fetch,appname,$(APPNAME_URL)))

Next we set up a call to use Unikraft's patch functionality. Even if
you don't have any patches yet, it's good to have this set up in case
you need it later::

  APPNAME_PATCHDIR=$(APPNAME_BASE)/patches
  $(eval $(call patch,appname,$(APPNAME_PATCHDIR),$(APPNAME_ZIPNAME)))

With all of this in place, you can already start testing things out: ::

  make menuconfig
  [choose appropriate options and save configuration, see user's guide]
  make

You should see Unikraft downloading your sources, uncompressing them
and doing the same plus building for any libraries you might have
specified in the ``Makefile`` or through the menu (there'll be nothing
to build for your application yet as we haven't yet specified any
sources to build). When building, Unikraft creates a ``build``
directory and places all temporary and object files under it; the
application's sources are placed under
``build/origin/[tarballname]/``.

To tell Unikraft which source files to build we add files to the
``APPNAME_SRCS-y`` variable: ::

  APPNAME_SRCS-y += $(APPNAME_BASE)/path_to_src/myfile.c

For source files, Unikraft so far supports C (``.c``), C++ (``.cc``) and
assembly files (``.S``).

In case you have pre-compiled object files, you could add them with
(but due to possible incompatible compilation flags of your pre-compiled object
files, you should handle this with care): ::

  APPNAME_OBJS-y += $(APPNAME_BASE)/path_to_src/myobj.o

You can also use ``APPNAME_OBJS-y`` to add pre-built libraries (as .o or .a): ::

  APPNAME_OBJS-y += $(APPNAME_BASE)/path_to_lib/mylib.a

Once you have specified all of your source files (and optionally binary files)
it is generally also necessary to specify include paths and compile flags: ::

  # Include paths
  APPNAME_ASINCLUDES  += -I$(APPNAME_BASE)/path_to_include/include [for assembly files]
  APPNAME_CINCLUDES   += -I$(APPNAME_BASE)/path_to_include/include [for C files]
  APPNAME_CXXINCLUDES += -I$(APPNAME_BASE)/path_to_include/include [for C++ files]

  # Flags for application sources
  APPNAME_ASFLAGS-y   += -DFLAG_NAME1 ... -DFLAG_NAMEN [for assembly files]
  APPNAME_CFLAGS-y    += -DFLAG_NAME1 ... -DFLAG_NAMEN [for C files]
  APPNAME_CXXFLAGS-y  += -DFLAG_NAME1 ... -DFLAG_NAMEN [for C++ files]

With all of this in place, you can save ``Makefile.uk``, and type
``make``. Assuming that the chosen Unikraft libraries provide all of
the support that your application needs, Unikraft should compile and
link everything together, and output one image per target platform
specified in the menu.

In addition to all the functionality mentioned, applications might need to
perform a number of additional tasks after the sources are downloaded and
decompressed but *before* the compilation takes place (e.g., run a configure
script or a custom script that generates source code from source files).
To support this, Unikraft provides a "prepare" variable which you can set to a
temporary marker file and from there to a target in your Makefile.uk file.
For example: ::

  $(APPNAME_BUILD)/.prepared: [dependencies to further targets]
         cmd && $(TOUCH) $@

  UK_PREPARE += $(APPNAME_BUILD)/.prepared

In this way, you ensure that ``cmd`` is run before any compilation
takes place. If you use ``fetch``, add ``$(APPNAME_BUILD)/.origin``
as dependency. If you used ``patch`` then add ``$(APPNAME_BUILD)/.patched``
instead.

Further, you may find it necessary to specify compile flags or includes only
for a *specific* source file. Unikraft supports this through the following
syntax: ::

  APPNAME_SRCS-y += $(APPNAME_BASE)/filename.c
  APPNAME_FILENAME_FLAGS-y += -DFLAG
  APPNAME_FILENAME_INCLUDES-y += -Iextra/include

It is also be possible compile a single source files multiple times with
different flags. For this case, Unikore supports variants:

  APPNAME_SRCS-y += $(APPNAME_BASE)/filename.c|variantname
  APPNAME_FILENAME_VARIANTNAME_FLAGS-y += -DFLAG2
  APPNAME_FILENAME_VARIANTNAME_INCLUDES-y += -Iextra/include

Finally, you may also need to provide "glue" code, for instance to
implement the ``main()`` function that Unikraft expects you to
implement by calling your application's main or init routines. As a
rule of thumb, we suggest to place any such files in the application's
main directory (``APPNAME_BASE``), and any includes they may depend
on under ``APPNAME_BASE/include``. And of course don't forget to
add the source files and include path to Makefile.uk.

To see full examples of Makefile.uk files you can browse the available
external applications or library repos.

Reserved variable names in the name scope are so far: ::

  APPNAME_BASE                              - Path to source base
  APPNAME_BUILD                             - Path to target build dir
  APPNAME_ORIGIN                            - Path to extracted archive
                                              (when fetch or unarchive was used)
  APPNAME_CLEAN APPNAME_CLEAN-y             - List of files to clean additional
                                              on make clean
  APPNAME_SRCS APPNAME_SRCS-y               - List of source files to be
                                              compiled
  APPNAME_OBJS APPNAME_OBJS-y               - List of object files to be linked
                                              for the library
  APPNAME_OBJCFLAGS APPNAME_OBJCFLAGS-y     - link flags (e.g., define symbols
                                              as internal)
  APPNAME_CFLAGS APPNAME_CFLAGS-y           - Flags for C files of the library
  APPNAME_CXXFLAGS APPNAME_CXXFLAGS-y       - Flags for C++ files of the library
  APPNAME_ASFLAGS APPNAME_ASFLAGS-y         - Flags for assembly files of the
                                              library
  APPNAME_CINCLUDES APPNAME_CINCLUDES-y     - Includes for C files of the
                                              library
  APPNAME_CXXINCLUDES APPNAME_CXXINCLUDES-y - Includes for C++ files of the
                                              library
  APPNAME_ASINCLUDES APPNAME_ASINCLUDES-y   - Includes for assembly files of
                                              the library
  APPNAME_FILENAME_FLAGS                    - Flags for a *specific* source file
  APPNAME_FILENAME_FLAGS-y                    of the library (not exposed to its
                                              variants)
  APPNAME_FILENAME_INCLUDES                 - Includes for a *specific* source
  APPNAME_FILENAME_INCLUDES-y                 file of the library (not exposed
                                              to its variants)
  APPNAME_FILENAME_VARIANT_FLAGS            - Flags for a *specific* source file
  APPNAME_FILENAME_VARIANT_FLAGS-y            and variant of the library
  APPNAME_FILENAME_VARIANT_INCLUDES         - Includes for a *specific* source
  APPNAME_FILENAME_VARIANT_INCLUDES-y         file and variant of the library

============================
Make Targets
============================
Unikraft provides a number of make targets to help you in porting and
developing applications and libraries. You can see a listing of them
by typing ``make help``; for convenience they're also listed here
below: ::

  Cleaning:
  clean-[LIBNAME]        - delete all files created by build for a single library
                           (e.g., clean-libfdt)
  clean                  - delete all files created by build for all libraries
                           but keep fetched files
  properclean            - delete build directory
  distclean              - delete build directory and configurations (including .config)

  Building:
  * all                  - build everything (default target)
  images                 - build kernel images for selected platforms
  libs                   - build libraries and objects
  [LIBNAME]              - build a single library
  objs                   - build objects only
  prepare                - run preparation steps
  fetch                  - fetch, extract, and patch remote code

  Configuration:
  * menuconfig           - interactive curses-based configurator
                           (default target when no config exists)
  nconfig                - interactive ncurses-based configurator
  xconfig                - interactive Qt-based configurator
  gconfig                - interactive GTK-based configurator
  oldconfig              - resolve any unresolved symbols in .config
  silentoldconfig        - Same as oldconfig, but quietly, additionally update deps
  olddefconfig           - Same as silentoldconfig but sets new symbols to their default value
  randconfig             - New config with random answer to all options
  defconfig              - New config with default answer to all options
                             UK_DEFCONFIG, if set, is used as input
  savedefconfig          - Save current config to UK_DEFCONFIG (minimal config)
  allyesconfig           - New config where all options are accepted with yes
  allnoconfig            - New config where all options are answered with no

  Miscellaneous:
  print-version          - print Unikraft version
  print-libs             - print library names enabled for build
  print-objs             - print object file names enabled for build
  print-srcs             - print source file names enabled for build
  print-vars             - prints all the variables currently defined in Makefile
  make V=0|1             - 0 => quiet build (default), 1 => verbose build


============================
Patch Creation
============================

Go to the directory containing sources of the application you are
porting (e.g. ``build/libnewlibc/origin``). Copy over the folder with
unmodified sources::

  cp -r newlib-2.5.0.20170922 newlib.orig

Do necessary modifications, test it and run ``diff`` tool::

  diff -urNp newlib.orig newlib-2.5.0.20170922 >
          LIBLIBNAME_BASE/patches/[nnnn]-[description].patch

Open the generated patch in your favorite editor and add a short
header to the patch. Start it with a ``From:`` field, and put your
name in it. On the next line add a one-liner description of the patch
in the ``Subject:`` filed. Optionally, write a little longer
description after an empty line. And, finally, add ``---`` line at the
end of the header.

This should help people to get an idea why does this patch
exist, and whom they should address questions. Header example::

  From: Zaphod Beeblebrox <z.beeblebrox@gmail.com>
  Subject: subject of an example patch

  This is an example patch description
  ---
  diff -urNp newlib.orig/ChangeLog newlib-2.5.0.20170922/ChangeLog

Or just use git to generate patches for you.
