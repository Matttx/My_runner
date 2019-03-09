/*
** EPITECH PROJECT, 2018
** end_game.c
** File description:
** No description
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

void victory(my_struct_t *st)
{
    sfMusic_pause(st->sound->background);
    sfRenderWindow_drawSprite(st->window, st->winner->sprite, NULL);
}

void end_game(my_struct_t *st)
{
    if (st->text->victory == 1)
        victory(st);
    if (st->text->loose == 1) {
        sfRenderWindow_drawSprite(st->window, st->loose->sprite, NULL);
        sfRenderWindow_drawText(st->window, st->text->score, NULL);
        sfRenderWindow_drawText(st->window, st->text->score_int, NULL);
    }
}