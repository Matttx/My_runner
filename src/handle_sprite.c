/*
** EPITECH PROJECT, 2018
** handle_sprite.c
** File description:
** No description
*/

#include <stdlib.h>

#include "struct.h"
#include "my.h"

sprite_t *create_sprite(char const *path)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfIntRect rect = {0, 0, 0, 0};
    sfVector2f vec = {0, 0};

    sprite->sprite = sfSprite_create();
    sprite->text = texture;
    sprite->rect = rect;
    sprite->vec = vec;
    sfSprite_setTexture(sprite->sprite, sprite->text, sfTrue);
    return (sprite);
}

void parallax(my_struct_t *st)
{
    parallax_ground(st);
    parallax_trees(st);
    parallax_distant_trees(st);
    parallax_cloud1(st);
    parallax_cloud2(st);
    airplane(st);
}

void timer_sprite(my_struct_t *st)
{
    double seconds = 0;

    st->time = sfClock_getElapsedTime(st->clock);
    seconds = st->time.microseconds / 1000000.0;
    if (seconds > 0.05) {
        if (st->jump->var != 1)
            handle_santa(st);
        sfClock_restart(st->clock);
    }
    st->time = sfClock_getElapsedTime(st->clock_para);
    seconds = st->time.microseconds / 1000000.0;
    if (seconds > 0.01) {
        move_enemies(st->obs, st);
        parallax(st);
        sfClock_restart(st->clock_para);
    }
}

void set_position(my_struct_t *st)
{
    sfSprite_setPosition(st->ground2->sprite, st->ground2->vec);
    sfSprite_setPosition(st->santa->sprite, st->santa->vec);
    sfSprite_setPosition(st->santa_jump->sprite, st->santa_jump->vec);
    sfSprite_setPosition(st->trees_bushes2->sprite, st->trees_bushes2->vec);
    sfSprite_setPosition(st->d_trees2->sprite, st->d_trees2->vec);
    sfSprite_setPosition(st->clouds22->sprite, st->clouds22->vec);
    sfSprite_setPosition(st->winner->sprite, st->winner->vec);
    sfSprite_setPosition(st->loose->sprite, st->loose->vec);
    sfSprite_setPosition(st->fly->sprite, st->fly->vec);
    sfSprite_setPosition(st->fly->sprite, st->fly->vec);
}