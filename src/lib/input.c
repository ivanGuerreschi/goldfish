/* input.c
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

#include "input.h"

int
random_life_points (void)
{
  time_t t;
  int random_number = 0;

  srand ((unsigned) time (&t));

  random_number = rand () % 10;

  return random_number;
}

int
input_game (void)
{
  int number_input = 0;
  char buffer[BUFSIZ];

  puts ("Add life, food or clean water");
  puts ("(1) for life (2) for food (3) for clean water (4) for exit");

  if (fgets (buffer, sizeof (buffer), stdin) == NULL)
    perror ("Error reads input");

  if ((strlen (buffer) - 1) > 1)
    return 0;

  buffer[strcspn (buffer, "\r\n")] = 0;

  number_input = atoi (buffer);

  return number_input;
}

void
add_life_hunger_to_fish (int random_duration, game_fish_t *fish,
                         game_aquarium_t *aquarium)
{
  if (random_duration > 7)
    {
      fish->life = fish->life - random_life_points ();
      fish->hunger = fish->hunger - random_life_points ();

      printf ("Game Name: %s - Game Life: %d - Game Hunger: %d"
              "- Game Clean Water: %s\n",
              fish->name,
              fish->life,
              fish->hunger,
              aquarium->clean_water ? "True" : "False");

      if (fish->life <= 0 || fish->hunger <= 0)
        {
          puts ("Game Over");
          ascii_fish_dead ();
          exit (0);
        }
      else
        {
          int input = 0;
          input = input_game ();
          if (input == 1)
            {
              fish->life = fish->life + random_life_points ();
              ascii_fish_head ();
            }
          else if (input == 2)
            {
              fish->hunger = fish->hunger + random_life_points ();
              ascii_fish_head ();
            }
          else if (input == 3)
            {
              aquarium->clean_water = true;
              ascii_fish_head ();
            }
          else
            exit (1);
        }
    }
  else
    {
      fish->life = fish->life - random_life_points ();
      fish->hunger = fish->hunger - random_life_points ();

      printf ("Game Name: %s - Game Life: %d - Game Hunger: %d"
              "- Game Clean Water: %s\n",
              fish->name,
              fish->life,
              fish->hunger,
              aquarium->clean_water ? "True" : "False");

      if (fish->life <= 0 || fish->hunger <= 0)
        {
          puts ("Game Over");
          ascii_fish_dead ();
          exit (0);
        }
      else
        {
          int input = 0;
          input = input_game ();
          if (input == 1)
            {
              fish->life = fish->life + random_life_points ();
              ascii_fish_tail ();
            }
          else if (input == 2)
            {
              fish->hunger = fish->hunger + random_life_points ();
              ascii_fish_tail ();
            }
          else if (input == 3)
            {
              aquarium->clean_water = true;
              ascii_fish_tail ();
            }
          else
            exit (1);
        }
    }
}

void
clear_screen (void)
{
  sleep (5);
  if (system ("clear") == -1)
    exit (0);
  ascii_fish_tail ();
}
