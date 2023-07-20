/* asciifish.c
   Copyright (C) 2021-2023 Ivan Guerreschi

This file is part of goldfish.

Author: Ivan Guerreschi <ivanguerreschi86@gmail.com>
Maintainer: Ivan Guerreschi <ivanguerreschi86@gmail.com>

goldfish is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

goldfish is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with goldfish. If not, see <http://www.gnu.org/licenses/>. */

#include "include/asciifish.h"

void
ascii_fish_head (void)
{
  puts ("-----------\n"
        "| ><(((°> |\n"
        "-----------\n");
}

void
ascii_fish_tail (void)
{
  puts ("-----------\n"
        "| <°)))>< |\n"
        "-----------\n");
}

void
ascii_fish_dead (void)
{
  puts ("-----------\n"
        "| ======= |\n"
        "-----------\n");
}
