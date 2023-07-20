/* input.h
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

#ifndef INPUT_H
#define INPUT_H

#include <string.h>
#include <unistd.h>
#include "fish.h"
#include "aquarium.h"
#include "../include/asciifish.h"

int random_life_points (void);
int input_game (void);
void add_life_hunger_to_fish (int, game_fish_t *fish, game_aquarium_t *aquarium);
void clear_screen (void);

#endif /* INPUT_H */
