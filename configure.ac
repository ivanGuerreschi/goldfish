dnl  configure.ac
dnl  Copyright (C) 2021-2023 Ivan Guerreschi
dnl
dnl  Author: Ivan Guerreschi <ivanguerreschi86@gmail.com>
dnl  Maintainer: Ivan Guerreschi <ivanguerreschi86@gmail.com>e
dnl
dnl  This file is part of goldfish.
dnl
dnl  goldfish is free software: you can redistribute it and/or modify
dnl  it under the terms of the GNU General Public License as published by
dnl  the Free Software Foundation, either version 3 of the License, or
dnl  (at your option) any later version.
dnl
dnl  goldfish is distributed in the hope that it will be useful,
dnl  but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl  GNU General Public License for more details.
dnl
dnl  You should have received a copy of the GNU General Public License
dnl  along with goldfish.  If not, see <https://www.gnu.org/licenses/>.

AC_PREREQ([2.69])
AC_INIT([goldfish], [0.3.1], [ivanguerreschi86@gmail.com])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])

dnl Checks for programs.
AC_PROG_CC
AC_PROG_CC_STDC
AC_PROG_RANLIB
AM_PROG_AR

dnl Checks for libraries.

dnl Checks for header files.
AC_CHECK_HEADERS([stdlib.h time.h string.h unistd.h])

dnl Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AX_CHECK_COMPILE_FLAG([-fanalyzer],
    [CFLAGS+=" -fanalyzer"],
    [echo "C compiler doesn't support Static Analyzer Options (-fanalyzer)"])

dnl Checks for library functions.
AC_CHECK_FUNCS([strcspn])

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 src/lib/Makefile
		 tests/Makefile])

AC_OUTPUT
