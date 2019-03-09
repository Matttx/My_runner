/*
** EPITECH PROJECT, 2018
** collision.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#include "struct.h"
#include "my.h"

void collision_gift(sprite_t *s1, sprite_t *s2, my_struct_t *st)
{
    if (st->jump->var != 1) {
        if (s1->vec.x < s2->vec.x + s2->rect.width &&
            s1->vec.x + s1->rect.width - 30 > s2->vec.x &&
            s1->vec.y < s2->vec.y + s2->rect.height &&
            s1->vec.y + s1->rect.height > s2->vec.y)
            st->text->loose = 1;
    }
    else {
        if (st->jump->vec_santa.x < s2->vec.x + s2->rect.width &&
            st->jump->vec_santa.x + s1->rect.width - 30 > s2->vec.x &&
            st->jump->vec_santa.y < s2->vec.y + s2->rect.height &&
            st->jump->vec_santa.y + s1->rect.height > s2->vec.y)
            st->text->loose = 1;
    }
}

void collision_gift2(sprite_t *s1, sprite_t *s2, my_struct_t *st)
{
    if (st->jump->var != 1) {
        if (s1->vec.x < s2->vec.x + s2->rect.width &&
            s1->vec.x + s1->rect.width - 30 > s2->vec.x &&
            s1->vec.y < s2->vec.y + s2->rect.height &&
            s1->vec.y + s1->rect.height > s2->vec.y)
            st->text->loose = 1;
    }
    else {
        if (st->jump->vec_santa.x < s2->vec.x + s2->rect.width &&
            st->jump->vec_santa.x + s1->rect.width - 30 > s2->vec.x &&
            st->jump->vec_santa.y < s2->vec.y + s2->rect.height &&
            st->jump->vec_santa.y + s1->rect.height - 30 > s2->vec.y)
            st->text->loose = 1;
    }
}