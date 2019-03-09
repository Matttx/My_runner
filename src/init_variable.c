/*
** EPITECH PROJECT, 2018
** init_variable.c
** File description:
** No description
*/

#include "my.h"
#include "struct.h"
#include "game_object.h"

#include <SFML/Graphics.h>
#include <stdlib.h>

void init_variable(my_struct_t *st)
{
    st->santa_jump->offset = 50;
    st->santa->vec.y = 777;
    st->santa->vec.x = 200;
    st->ground2->vec.x = 1431;
    st->trees_bushes2->vec.x = 1431;
    st->d_trees2->vec.x = 1431;
    st->clouds22->vec.x = 1431;
    st->clouds32->vec.x = 1431;
    st->fly->vec.x = 1900;
    st->fly->vec.y = 200;
    init_enemies(st->obs);
}