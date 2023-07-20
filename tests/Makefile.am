# Makefile.am
# Copyright (C) 2021-2023 Ivan Guerreschi

# Author: Ivan Guerreschi <ivanguerreschi86@gmail.com>
# Maintainer: Ivan Guerreschi <ivanguerreschi86@gmail.com>e

# This file is part of goldfish.                                               

# goldfish is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# goldfish is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with goldfish. If not, see <http://www.gnu.org/licenses/>.

TESTS = goldfish_test goldfish_xfail_test
XFAIL_TESTS = goldfish_xfail_test
check_PROGRAMS = $(TESTS)
goldfish_test_SOURCES = goldfish_test.c $(top_builddir)/src/lib/*.h
goldfish_test_CFLAGS = -I $(top_builddir)/src/lib
goldfish_test_LDADD = $(top_builddir)/src/lib/libgoldfish.a
goldfish_xfail_test_SOURCES = goldfish_xfail_test.c $(top_builddir)/src/lib/*.h
goldfish_xfail_test_CFLAGS = -I $(top_builddir)/src/lib
goldfish_xfail_test_LDADD = $(top_builddir)/src/lib/libgoldfish.a
