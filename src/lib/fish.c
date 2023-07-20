/* fish.c
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

#include "fish.h"

fish_t
*create_fish (void)
{
  static fish_t fish[] =
  {
    {"Bubbles", 40, 82, "Normal", true, true},
    {"Finny", 53, 55, "Hot", false, true},
    {"Goldie", 24, 65, "Cold", true, false},
    {"Jaws", 85, 75, "Hot", false, true},
    {"Nemo", 46, 99, "Normal", true, true},
    {"Spalash", 28, 32, "Cold", false, false},
    {"Sushi", 25, 54, "Cold", true, true},
    {"Flash", 52, 41, "Hot", false, true},
    {"Fin Fin", 88, 43, "Cold", true, true},
    {"Comet", 94, 69, "Normal", true, false}
  };

  return fish;
}

void
print_fish (const fish_t *fish)
{
  printf ("Name: %s - Life: %d - Hunger: %d - Temperature: %s"
          "- Love Food: %s - Love Clean Water: %s\n",
          fish->name,
          fish->life,
          fish->hunger,
          fish->love_temp,
          fish->love_food ? "True" : "False",
          fish->love_clean_water ? "True" : "False");
}

void
print_game_fish (const game_fish_t game_fish)
{
  printf ("Game Name: %s - Game Life: %d - Game Hunger: %d"
          "- Game Temperature: %s - Game Love Food: %s"
          "- Game Love Clean Water: %s\n",
          game_fish.name,
          game_fish.life,
          game_fish.hunger,
          game_fish.love_temp,
          game_fish.love_food ? "True" : "False",
          game_fish.love_clean_water ? "True" : "False");
}

int
random_fish_number (void)
{
  time_t t;
  int random_number = 0;

  srand ((unsigned) time (&t));

  random_number = rand () % COUNT_FISH;

  return random_number;
}

