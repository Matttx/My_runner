/*
** EPITECH PROJECT, 2018
** init_enemies.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>

#include "struct.h"
#include "my.h"

void move_enemies(obstacle_t *obs, my_struct_t *st)
{
    for (int i = 0; i < 3; i++) {
        if (sfSprite_getPosition(obs->gift[i]->sprite).x > -200) {
            obs->gift[i]->vec.x -= 20 / 4;
            collision_gift(st->santa, obs->gift[i], st);
            if (sfSprite_getPosition(obs->gift[i]->sprite).x < 150)
                st->text->pop_up = 1;
        }
        if (sfSprite_getPosition(obs->gift2[i]->sprite).x > -200) {
            obs->gift2[i]->vec.x -= 20 / 4;
            collision_gift2(st->santa, obs->gift2[i], st);
            if (sfSprite_getPosition(obs->gift2[i]->sprite).x < 150)
                st->text->pop_up = 1;
        }
    }
}

void init_enemies(obstacle_t *obs)
{
    for (int i = 0; i < 3; i++) {
        obs->gift[i] = create_sprite("ressources/gift.png");
        obs->gift2[i] = create_sprite("ressources/2ble_gift.png");
        obs->gift[i]->vec.x = -200;
        obs->gift[i]->vec.y = 790;
        obs->gift2[i]->vec.x = -200;
        obs->gift2[i]->vec.y = 750;
        obs->gift2[i]->rect.top = 0;
        obs->gift2[i]->rect.left = 0;
        obs->gift2[i]->rect.width = 84;
        obs->gift2[i]->rect.height = 91;
        sfSprite_setPosition(obs->gift[i]->sprite, obs->gift[i]->vec);
        sfSprite_setPosition(obs->gift2[i]->sprite, obs->gift2[i]->vec);
        obs->clock = sfClock_create();
    }
}

void set_enemies(obstacle_t *obs)
{
    int randome_var =  rand() % 2;
    int i = rand() % 3;

    if (randome_var == 1) {
        if (sfSprite_getPosition(obs->gift[i]->sprite).x <= -200) {
            obs->gift[i]->vec.x = 1700;
            sfSprite_setPosition(obs->gift[i]->sprite, obs->gift[i]->vec);
        }
        else
            set_enemies(obs);
    }
    if (randome_var == 0) {
        if (sfSprite_getPosition(obs->gift2[i]->sprite).x <= -200) {
            obs->gift2[i]->vec.x = 1700;
            sfSprite_setPosition(obs->gift2[i]->sprite, obs->gift2[i]->vec);
        }else
            set_enemies(obs);
    }
}

void random_position(obstacle_t *obs)
{
    double seconds = 0;
    static int tmp = 2;

    obs->time = sfClock_getElapsedTime(obs->clock);
    seconds = obs->time.microseconds / 1000000.0;
    if (seconds > tmp) {
        set_enemies(obs);
        tmp = rand() % 4 + 1;
        sfClock_restart(obs->clock);
    }
}