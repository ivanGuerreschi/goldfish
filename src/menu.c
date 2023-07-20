/* menu.c
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
print_menu (void)
{
  int number_input = 0;
  char buffer[BUFSIZ];

  puts ("----------------------------------------------");
  puts ("(1, 2, 3, 4) Input number");
  puts ("(1) Quit ");
  puts ("(2) Print all fish");
  puts ("(3) Print all aquarium");
  puts ("(4) New game");
  puts ("----------------------------------------------");

  if (fgets (buffer, sizeof (buffer), stdin) == NULL)
    perror ("Error reads input");

  if ((strlen (buffer) - 1) > 1)
    return 0;

  buffer[strcspn (buffer, "\r\n")] = 0;

  number_input = atoi (buffer);

  return number_input;
}
