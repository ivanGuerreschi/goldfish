/* main.c
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

#include <config.h>
#include <stdio.h>
#include <stdlib.h>
#include "fish.h"
#include "aquarium.h"
#include "gameengine.h"
#include "include/asciifish.h"
#include "include/menu.h"

int
main (void)
{
  puts ("Goldfish");
  puts ("This is " PACKAGE_STRING ".\n");
  ascii_fish_head ();

  fish_t *fish;
  fish = create_fish ();

  aquarium_t *aquarium;
  aquarium = create_aquarium ();

  game_fish_t game_fish;
  game_aquarium_t game_aquarium;

  int menu = 0;

  while (true)
    {
      menu = print_menu ();

      switch (menu)
        {
        case 1:
          exit (1);
          break;

        case 2:
          for (int i = 0; i < COUNT_FISH; i++)
            print_fish (&fish[i]);
          break;

        case 3:
          for (int i = 0; i < COUNT_AQUARIUM; i++)
            print_aquarium (&aquarium[i]);
          break;

        case 4:
          new_game (fish, aquarium, &game_fish, &game_aquarium);
          print_game_fish (game_fish);
          loop_game (&game_fish, &game_aquarium);
          print_game_fish (game_fish);
          break;
        }
    }

  return EXIT_SUCCESS;
}


