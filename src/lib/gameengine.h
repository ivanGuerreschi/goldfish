/* gameengine.h
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

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "aquarium.h"
#include "fish.h"

void new_game (fish_t *fish, aquarium_t *aquarium,
               game_fish_t *game_fish, game_aquarium_t *game_aquarium);
int loved_temp (game_aquarium_t *aquarium, game_fish_t *fish);
int loved_food (game_fish_t *fish);
int loved_clean_water (game_aquarium_t *aquarium, game_fish_t *fish);
void loop_game (game_fish_t *fish, game_aquarium_t *aquarium);

#endif /* GAMEENGINE_H  */
