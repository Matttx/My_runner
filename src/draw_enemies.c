/*
** EPITECH PROJECT, 2018
** draw_enemies.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#include "struct.h"
#include "my.h"

void draw_enemies(obstacle_t *obs, my_struct_t *st)
{
    for (int i = 0; i < 3; i++) {
        sfSprite_setPosition(obs->gift[i]->sprite, obs->gift[i]->vec);
        sfSprite_setPosition(obs->gift2[i]->sprite, obs->gift2[i]->vec);
        sfRenderWindow_drawSprite(st->window, obs->gift[i]->sprite, NULL);
        sfRenderWindow_drawSprite(st->window, obs->gift2[i]->sprite, NULL);
    }
}