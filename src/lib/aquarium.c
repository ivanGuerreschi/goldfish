/* aquarium.c
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

#include "aquarium.h"

aquarium_t
*create_aquarium (void)
{
  static aquarium_t aquarium[] =
  {
    {"Tropical", 30, true},
    {"Artic", 10, true},
    {"Normal", 20, true}
  };

  return aquarium;
}

void
print_aquarium (const aquarium_t *aquarium)
{
  printf ("Type: %s - Temperature: %d - Clean Water: %s\n",
          aquarium->type,
          aquarium->temperature,
          aquarium->clean_water ? "True" : "False");
}

void
print_game_aquarium (const game_aquarium_t game_aquarium)
{
  printf ("Game Type: %s - Game Temperature: %d - Game Clean Water: %s\n",
          game_aquarium.type,
          game_aquarium.temperature,
          game_aquarium.clean_water ? "True" : "False");
}

int
random_aquarium_number (void)
{
  time_t t;
  int random_number = 0;

  srand ((unsigned) time (&t));

  random_number = rand () % COUNT_AQUARIUM;

  return random_number;
}

