/*
** EPITECH PROJECT, 2018
** jump.c
** File description:
** No description
*/

#include "struct.h"
#include "game_object.h"

#include <SFML/Graphics.h>
#include "my.h"
#include <math.h>

void jump_santa(my_struct_t *st)
{
    static float t = 0;
    float tmp = 0;
    double v_y = sin(3.14 / 3) * 2;

    st->santa->rect.top = 69;
    st->santa->rect.left = 300;
    tmp = (float)((v_y * t) - ((9.81 * t * t) / 2000));
    tmp = tmp * -1;
    st->jump->vec_santa.y = st->santa->vec.y + tmp;
    st->jump->vec_santa.x = 200;
    t += 4.5;
    if (tmp > 0) {
        st->jump->var = 0;
        st->santa->rect.top = 0;
        st->santa->rect.left = 0;
        t = 0;
    }
    sfSprite_setPosition(st->santa->sprite, st->jump->vec_santa);
}