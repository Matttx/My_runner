/*
** EPITECH PROJECT, 2018
** enemies.c
** File description:
** No description
*/

#include "my.h"
#include "struct.h"
#include "game_object.h"

#include <SFML/Graphics.h>
#include <stdlib.h>

void enemies(my_struct_t *st)
{
    static int point_jump = 100;

    st->gift->vec.x -= 20 / 4;
    if (sfSprite_getPosition(st->gift->sprite).x < -100) {
        st->gift->vec.x = 1600 + rand() % 400;
        sfSprite_setPosition(st->gift->sprite, st->gift->vec);
        st->text->pop_up = 0;
        point_jump = 200;
    }
    sfSprite_setPosition(st->gift->sprite, st->gift->vec);
    if (sfSprite_getPosition(st->gift->sprite).x < 170) {
        st->text->point += point_jump;
        sfRenderWindow_drawText(st->window, st->text->score_pop, NULL);
        st->text->pop_up = 1;
        point_jump = 0;
    }
}

void enemies2(my_struct_t *st)
{
    static int point_jump = 100;

    st->gift2->vec.x -= 20 / 4;
    if (sfSprite_getPosition(st->gift2->sprite).x < -100) {
        st->gift2->vec.x = 1600 + rand() % 800;
        sfSprite_setPosition(st->gift2->sprite, st->gift2->vec);
        st->text->pop_up = 0;
        point_jump = 200;
    }
    sfSprite_setPosition(st->gift2->sprite, st->gift2->vec);
    if (sfSprite_getPosition(st->gift2->sprite).x < 170) {
        st->text->point += point_jump;
        st->text->pop_up = 1;
        point_jump = 0;
    }
}