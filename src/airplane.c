/*
** EPITECH PROJECT, 2018
** airplane.c
** File description:
** No description
*/

#include <stdlib.h>

#include "struct.h"
#include "my.h"

void airplane(my_struct_t *st)
{
    st->fly->vec.x -= 3;
    if (sfSprite_getPosition(st->fly->sprite).x < -1020) {
        st->fly->vec.x = 1900;
        sfSprite_setPosition(st->fly->sprite, st->fly->vec);
    }
    sfSprite_setPosition(st->fly->sprite, st->fly->vec);
}