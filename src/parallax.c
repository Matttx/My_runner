/*
** EPITECH PROJECT, 2018
** parallax.c
** File description:
** No description
*/

#include "game_object.h"
#include "struct.h"
#include "my.h"

void parallax_ground(my_struct_t *st)
{
    st->ground1->vec.x = -20 / 4;
    st->ground2->vec.x = -20 / 4;
    sfSprite_move(st->ground1->sprite, st->ground1->vec);
    sfSprite_move(st->ground2->sprite, st->ground2->vec);
    if (sfSprite_getPosition(st->ground1->sprite).x < -1431) {
        st->ground1->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->ground1->sprite).x;
        sfSprite_setPosition(st->ground1->sprite, st->ground1->vec);
    }
    if (sfSprite_getPosition(st->ground2->sprite).x < -1431) {
        st->ground2->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->ground2->sprite).x;
        sfSprite_setPosition(st->ground2->sprite, st->ground2->vec);
    }
}

void parallax_trees(my_struct_t *st)
{
    st->trees_bushes1->vec.x = -20 / 4 / 2;
    st->trees_bushes2->vec.x = -20 / 4 / 2;
    sfSprite_move(st->trees_bushes1->sprite, st->trees_bushes1->vec);
    sfSprite_move(st->trees_bushes2->sprite, st->trees_bushes2->vec);
    if (sfSprite_getPosition(st->trees_bushes1->sprite).x < -1431) {
        st->trees_bushes1->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->trees_bushes1->sprite).x;
        sfSprite_setPosition(st->trees_bushes1->sprite, st->trees_bushes1->vec);
    }
    if (sfSprite_getPosition(st->trees_bushes2->sprite).x < -1431) {
        st->trees_bushes2->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->trees_bushes2->sprite).x;
        sfSprite_setPosition(st->trees_bushes2->sprite, st->trees_bushes2->vec);
    }
}

void parallax_distant_trees(my_struct_t *st)
{
    st->d_trees1->vec.x = -20 / 4 / 3;
    st->d_trees2->vec.x = -20 / 4 / 3;
    sfSprite_move(st->d_trees1->sprite, st->d_trees1->vec);
    sfSprite_move(st->d_trees2->sprite, st->d_trees2->vec);
    if (sfSprite_getPosition(st->d_trees1->sprite).x < -1431) {
        st->d_trees1->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->d_trees1->sprite).x;
        sfSprite_setPosition(st->d_trees1->sprite, st->d_trees1->vec);
    }
    if (sfSprite_getPosition(st->d_trees2->sprite).x < -1431) {
        st->d_trees2->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->d_trees2->sprite).x;
        sfSprite_setPosition(st->d_trees2->sprite, st->d_trees2->vec);
    }
}

void parallax_cloud1(my_struct_t *st)
{
    st->clouds2->vec.x = -20 / 4 / 4;
    st->clouds22->vec.x = -20 / 4 / 4;
    sfSprite_move(st->clouds2->sprite, st->clouds2->vec);
    sfSprite_move(st->clouds22->sprite, st->clouds22->vec);
    if (sfSprite_getPosition(st->clouds2->sprite).x < -1431) {
        st->clouds2->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->clouds2->sprite).x;
        sfSprite_setPosition(st->clouds2->sprite, st->clouds2->vec);
    }
    if (sfSprite_getPosition(st->clouds22->sprite).x < -1431) {
        st->clouds22->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->clouds22->sprite).x;
        sfSprite_setPosition(st->clouds22->sprite, st->clouds22->vec);
    }
}

void parallax_cloud2(my_struct_t *st)
{
    st->clouds3->vec.x = -20 / 4 / 5;
    st->clouds32->vec.x = -20 / 4 / 5;
    sfSprite_move(st->clouds3->sprite, st->clouds3->vec);
    sfSprite_move(st->clouds32->sprite, st->clouds32->vec);
    if (sfSprite_getPosition(st->clouds3->sprite).x < -1431) {
        st->clouds3->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->clouds3->sprite).x;
        sfSprite_setPosition(st->clouds3->sprite, st->clouds3->vec);
    }
    if (sfSprite_getPosition(st->clouds32->sprite).x < -1431) {
        st->clouds32->vec.x = 1431 * 2 +
                sfSprite_getPosition(st->clouds32->sprite).x;
        sfSprite_setPosition(st->clouds32->sprite, st->clouds32->vec);
    }
}