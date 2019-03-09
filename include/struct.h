/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** struct
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <SFML/Graphics.h>
#include <time.h>

#include "game_object.h"

typedef struct my_struct_s {
    sprite_t *menu_p;
    sprite_t *menu_h;
    sprite_t *ground1;
    sprite_t *ground2;
    sprite_t *santa;
    sprite_t *santa_jump;
    sprite_t *trees_bushes1;
    sprite_t *trees_bushes2;
    sprite_t *d_trees1;
    sprite_t *d_trees2;
    sprite_t *bushes;
    sprite_t *hill1;
    sprite_t *hill2;
    sprite_t *clouds1;
    sprite_t *clouds22;
    sprite_t *clouds2;
    sprite_t *clouds3;
    sprite_t *clouds32;
    sprite_t *clouds4;
    sprite_t *background;
    sprite_t *winner;
    sprite_t *play;
    sprite_t *pause;
    sprite_t *fly;
    sprite_t *loose;
    menu_t *menu;
    obstacle_t *obs;
    text_t *text;
    jump_t *jump;
    play_pause_t *plpa;
    sound_t *sound;
    sfRenderWindow *window;
    sfEvent event;
    sfTime time;
    sfClock *clock;
    sfClock *clock_para;
} my_struct_t;

#endif /* !STRUCT_H_ */
