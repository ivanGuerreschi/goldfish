/* fish.h
   Copyright (C) 2021-2023 Ivan Guerreschi

Author: Ivan Guerreschi <ivanguerreschi86@gmail.com>
Maintainer: Ivan Guerreschi <ivanguerreschi86@gmail.com>

This file is part of goldfish.

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

#ifndef FISH_H
#define FISH_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define COUNT_FISH 10

typedef struct
{
  const char *name;
  int life;
  int hunger;
  const char *love_temp;
  bool love_food;
  bool love_clean_water;
} fish_t;

typedef struct
{
  const char *name;
  int life;
  int hunger;
  const char *love_temp;
  bool love_food;
  bool love_clean_water;
} game_fish_t;

fish_t *create_fish (void);
void print_fish (const fish_t *fish);
void print_game_fish (const game_fish_t game_fish);
int random_fish_number (void);

#endif /* FISH_H */
