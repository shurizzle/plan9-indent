/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* */
/* #undef ENABLE_NLS 0 */

/* */
/* #undef HAVE_CATGETS */

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <dirent.h> header file, and it defines 'DIR'.
   */
#define HAVE_DIRENT_H 1

/* */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* */
/* #undef HAVE_LC_MESSAGES */

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the 'memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the 'memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the <ndir.h> header file, and it defines 'DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* */
#define HAVE_STPCPY 1

/* Define to 1 if you have the 'strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines 'DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines 'DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utime.h> header file. */
/* #undef HAVE_SYS_UTIME_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the 'utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <wchar.h> header file. */
/* #undef HAVE_WCHAR_H */

/* Name of package */
#define PACKAGE "indent"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-indent@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU Indent"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU Indent 2.2.13"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "indent"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://www.gnu.org/software/indent/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.2.13"

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Enable extensions on AIX, Interix, z/OS.  */
/* #undef _ALL_SOURCE */
/* Enable general extensions on macOS.  */
/* #undef _DARWIN_C_SOURCE */
/* Enable general extensions on Solaris.  */
/* #undef __EXTENSIONS__ */
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
/* #undef _HPUX_ALT_XOPEN_SOCKET_API */
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
/* #undef _NETBSD_SOURCE */
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
/* #undef _OPENBSD_SOURCE */
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
# define _POSIX_SOURCE 1
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
# define _POSIX_1_SOURCE 1
#endif
/* Enable POSIX-compatible threading on Solaris.  */
/* #undef _POSIX_PTHREAD_SEMANTICS */
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
/* #undef __STDC_WANT_IEC_60559_ATTRIBS_EXT__ */
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
/* #undef __STDC_WANT_IEC_60559_BFP_EXT__ */
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
/* #undef __STDC_WANT_IEC_60559_DFP_EXT__ */
/* Enable extensions specified by C23 Annex F.  */
/* #undef __STDC_WANT_IEC_60559_EXT__ */
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
/* #undef __STDC_WANT_IEC_60559_FUNCS_EXT__ */
/* Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.  */
/* #undef __STDC_WANT_IEC_60559_TYPES_EXT__ */
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
/* #undef __STDC_WANT_LIB_EXT2__ */
/* Enable extensions specified by ISO/IEC 24747:2009.  */
/* #undef __STDC_WANT_MATH_SPEC_FUNCS__ */
/* Enable extensions on HP NonStop.  */
/* #undef _TANDEM_SOURCE */
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
/* # undef _XOPEN_SOURCE */
#ifndef _PLAN9_SOURCE
# define _PLAN9_SOURCE 1
#endif
#ifndef _BSD_EXTENSION
# define _BSD_EXTENSION 1
#endif
#ifndef _REENTRANT_SOURCE
# define _REENTRANT_SOURCE 1
#endif

/* Version number of package */
#define VERSION "2.2.13"

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 on platforms where this makes off_t a 64-bit type. */
/* #undef _LARGE_FILES */

/* Number of bits in time_t, on hosts where this is settable. */
/* #undef _TIME_BITS */

/* Define to 1 on platforms where this makes time_t a 64-bit type. */
/* #undef __MINGW_USE_VC2005_COMPAT */

/* Define to empty if 'const' does not conform to ANSI C. */
/* #undef const */

#define LOCALEDIR "/lib/locale"

#include <stdlib.h>
#define getenv(n)                                                              \
	((n) && (n)[0] == 'H' && (n)[1] == 'O' && (n)[2] == 'M' &&                   \
			(n)[3] == 'E' && (n)[4] == 0                                             \
		? (getenv)("home")                                                         \
		: (getenv)(n))
