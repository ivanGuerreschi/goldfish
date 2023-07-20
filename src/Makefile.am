# Makefile.am
# Copyright (C) 2021-2023 Ivan Guerreschi
#
# This file is part of goldfish.
#
# Author: Ivan Guerreschi <ivanguerreschi86@gmail.com>
# Maintainer: Ivan Guerreschi <ivanguerreschi86@gmail.com>e
#
# goldfish is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# goldfish is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with goldfish. If not, see <http://www.gnu.org/licenses/>.

AM_CFLAGS = -I $(top_srcdir)/src -I $(top_srcdir)/src/lib \
            -Wall -Werror -Wextra -Wpedantic \
            -Wformat=2 -Wno-unused-parameter -Wshadow \
            -Wwrite-strings -Wstrict-prototypes -Wold-style-definition \
            -Wredundant-decls -Wnested-externs -Wmissing-include-dirs \
            -Wjump-misses-init -Wlogical-op 

nobase_include_HEADERS = include/asciifish.h include/menu.h
bin_PROGRAMS = goldfish
goldfish_SOURCES = main.c asciifish.c menu.c
goldfish_LDADD = $(top_builddir)/src/lib/libgoldfish.a $(AM_LDFLAGS)

CHK_SOURCES = main.c asciifish.c menu.c

check-syntax:
	$(CC) -fsyntax-only $(CHK_SOURCES)

.PHONY: check-syntax
