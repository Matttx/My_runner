/*
** EPITECH PROJECT, 2018
** destroy.c
** File description:
** No description
*/

#include <stdlib.h>
#include "struct.h"

void destroy_sprite(my_struct_t *st)
{
    sfSprite_destroy(st->santa->sprite);
    sfSprite_destroy(st->ground1->sprite);
    sfSprite_destroy(st->ground2->sprite);
    sfSprite_destroy(st->hill1->sprite);
    sfSprite_destroy(st->hill2->sprite);
    sfSprite_destroy(st->trees_bushes2->sprite);
    sfSprite_destroy(st->trees_bushes1->sprite);
    sfSprite_destroy(st->d_trees1->sprite);
    sfSprite_destroy(st->d_trees2->sprite);
    sfSprite_destroy(st->bushes->sprite);
    sfSprite_destroy(st->clouds1->sprite);
    sfSprite_destroy(st->clouds22->sprite);
    sfSprite_destroy(st->clouds2->sprite);
    sfSprite_destroy(st->clouds3->sprite);
    sfSprite_destroy(st->clouds4->sprite);
    sfSprite_destroy(st->pause->sprite);
    sfSprite_destroy(st->play->sprite);
    sfSprite_destroy(st->background->sprite);
    for (int i = 0; i < 3; i++)
        sfSprite_destroy(st->obs->gift[i]->sprite);
}

void destroy_texture(my_struct_t *st)
{
    sfTexture_destroy(st->santa->text);
    sfTexture_destroy(st->ground1->text);
    sfTexture_destroy(st->ground2->text);
    sfTexture_destroy(st->hill1->text);
    sfTexture_destroy(st->hill2->text);
    sfTexture_destroy(st->trees_bushes2->text);
    sfTexture_destroy(st->trees_bushes1->text);
    sfTexture_destroy(st->d_trees1->text);
    sfTexture_destroy(st->clouds1->text);
    sfTexture_destroy(st->clouds2->text);
    sfTexture_destroy(st->clouds3->text);
    sfTexture_destroy(st->clouds4->text);
    sfTexture_destroy(st->bushes->text);
    sfTexture_destroy(st->background->text);
    sfTexture_destroy(st->play->text);
    sfTexture_destroy(st->pause->text);
    sfMusic_destroy(st->sound->background);
    sfMusic_destroy(st->sound->mouse);
    for (int i = 0; i < 3; i++)
        sfTexture_destroy(st->obs->gift[i]->text);
}

void free_struct(my_struct_t *st)
{
    free(st->jump);
    free(st->santa_jump);
    free(st->santa);
    free(st->text);
    free(st->clouds2);
    free(st->clouds1);
    free(st->trees_bushes2);
    free(st->background);
    free(st->bushes);
    free(st->clouds3);
    free(st->hill2);
    free(st->hill1);
    free(st->ground2);
    free(st->trees_bushes1);
    free(st->clouds4);
    free(st->clouds22);
    free(st->sound);
    free(st->obs);
}

void destroy(my_struct_t *st)
{
    destroy_sprite(st);
    destroy_texture(st);
    free_struct(st);
    sfRenderWindow_destroy(st->window);
}