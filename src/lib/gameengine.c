/* gameengine.c
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

#include "gameengine.h"
#include "input.h"

void
new_game (fish_t *fish, aquarium_t *aquarium,
          game_fish_t *game_fish, game_aquarium_t *game_aquarium)
{
  int random_fish = random_fish_number ();
  int random_aquarium = random_aquarium_number ();

  game_fish->name = fish[random_fish].name;
  game_fish->hunger = fish[random_fish].hunger;
  game_fish->life = fish[random_fish].life;
  game_fish->love_food = fish[random_fish].love_food;
  game_fish->love_temp = fish[random_fish].love_temp;
  game_fish->love_clean_water = fish[random_fish].love_clean_water;

  game_aquarium->type = aquarium[random_aquarium].type;
  game_aquarium->temperature = aquarium[random_aquarium].temperature;
  game_aquarium->clean_water = aquarium[random_aquarium].clean_water;

  int points_temp =  loved_temp (game_aquarium, game_fish);
  int points_hunger = loved_food (game_fish);
  int points_clean_water = loved_clean_water (game_aquarium, game_fish);
  game_fish->life = points_temp + game_fish->life;
  game_fish->hunger = points_hunger + game_fish->hunger;
  game_fish->life = points_clean_water + game_fish->life;
}

int
loved_temp (game_aquarium_t *aquarium, game_fish_t *fish)
{
  /*
    Artic 10, Normal 20, Tropical 30
  */

  int fish_love_temp = 0;

  if (strcmp ("Cold", fish->love_temp))
    fish_love_temp = 10;
  else if (strcmp ("Normal", fish->love_temp))
    fish_love_temp = 20;
  else
    fish_love_temp = 30;

  int points = fish_love_temp == aquarium->temperature ? 10 : -10;

  return points;
}

int
loved_food (game_fish_t *fish)
{
  bool love_food = fish->love_food == true ? true : false;

  int points = love_food == true ? 10 : -10;

  return points;
}

int
loved_clean_water (game_aquarium_t *aquarium, game_fish_t *fish)
{
  bool love_clean_water = aquarium->clean_water == fish->love_clean_water ? true : false;

  int points = love_clean_water == true ? 10 : -10;

  return points;
}

void
loop_game (game_fish_t *fish, game_aquarium_t *aquarium)
{
  time_t t;
  srand ((unsigned) time (&t));

  for (;;)
    {
      double interval = 30; /* seconds */
      time_t start = time (NULL);
      int random_duration = rand() % 13;

      sleep (random_duration);

      add_life_hunger_to_fish (random_duration, fish, aquarium);

      time_t end = time (NULL);

      double elapsed = difftime (end, start);
      int seconds_to_sleep = (int) (interval - elapsed);
      if (seconds_to_sleep > 0)
        sleep (seconds_to_sleep);
    }

}
