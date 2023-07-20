/* aquarium.h
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

#ifndef AQUARIUM_H
#define AQUARIUM_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define COUNT_AQUARIUM 3

typedef struct
{
  const char *type;
  int temperature;
  bool clean_water;
} aquarium_t;

typedef struct
{
  const char *type;
  int temperature;
  bool clean_water;
} game_aquarium_t;

aquarium_t *create_aquarium (void);
void print_aquarium (const aquarium_t *aquarium);
void print_game_aquarium (const game_aquarium_t game_aquarium);
int random_aquarium_number (void);

#endif /* AQUARIUM_H */
