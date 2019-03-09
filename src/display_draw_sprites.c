/*
** EPITECH PROJECT, 2018
** display_draw_sprites.c
** File description:
** No description
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

void draw_sprites(my_struct_t *st)
{
    sfSprite_setTextureRect(st->santa->sprite, st->santa->rect);
    sfSprite_setTextureRect(st->santa_jump->sprite, st->santa_jump->rect);
    sfRenderWindow_drawSprite(st->window, st->ground2->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->ground1->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->santa->sprite, NULL);
    draw_enemies(st->obs, st);
    if (st->plpa->pause % 2 == 0 && st->text->loose == 0) {
        if (st->jump->var == 1)
            jump_santa(st);
        sfRenderWindow_drawSprite(st->window, st->pause->sprite, NULL);
        if (st->text->pop_up == 1) {
            sfRenderWindow_drawText(st->window, st->text->score_pop, NULL);
            st->text->pop_up = 0;
        }
    } else if (st->text->loose == 0)
        sfRenderWindow_drawSprite(st->window, st->play->sprite, NULL);
    if (st->menu->menu_play == 0)
        sfRenderWindow_drawSprite(st->window, st->menu_p->sprite, NULL);
    if (st->menu->menu_help == 1)
        sfRenderWindow_drawSprite(st->window, st->menu_h->sprite, NULL);
}

void draw_sprites2(my_struct_t *st)
{
    sfRenderWindow_drawSprite(st->window, st->background->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->clouds4->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->clouds32->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->clouds3->sprite, NULL);
    sfRenderWindow_drawText(st->window, st->text->score, NULL);
    sfRenderWindow_drawText(st->window, st->text->score_int, NULL);
    sfRenderWindow_drawSprite(st->window, st->fly->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->clouds2->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->clouds22->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->clouds1->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->hill2->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->hill1->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->bushes->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->d_trees2->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->d_trees1->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->trees_bushes2->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->trees_bushes1->sprite, NULL);
}

void init_sprites1(my_struct_t *st)
{
    st->santa = create_sprite("ressources/santa_run.png");
    st->santa_jump = create_sprite("ressources/santa_jump.png");
    st->ground1 = create_sprite("ressources/background/01ground.png");
    st->ground2 = create_sprite("ressources/background/01ground.png");
    st->trees_bushes1 = create_sprite("ressources/background/"
                                        "02trees and bushes.png");
    st->trees_bushes2 = create_sprite("ressources/background/"
                                        "02trees and bushes.png");
    st->d_trees1 = create_sprite("ressources/background/"
                                    "03distant_trees.png");
    st->d_trees2 = create_sprite("ressources/background/"
                                    "03distant_trees.png");
}

void init_sprites2(my_struct_t *st)
{
    st->menu_p = create_sprite("ressources/menu.png");
    st->menu_h = create_sprite("ressources/help.png");
    st->bushes = create_sprite("ressources/background/04bushes.png");
    st->hill1 = create_sprite("ressources/background/05hill1.png");
    st->hill2 = create_sprite("ressources/background/06hill2.png");
    st->clouds1 = create_sprite("ressources/background/07huge_clouds.png");
    st->clouds2 = create_sprite("ressources/background/08clouds.png");
    st->clouds22 = create_sprite("ressources/background/08clouds.png");
    st->clouds3 = create_sprite("ressources/background/09distant_clouds1.png");
    st->clouds32 = create_sprite("ressources/background/09distant_clouds1.png");
    st->clouds4 = create_sprite("ressources/background/10distant_clouds.png");
    st->background = create_sprite("ressources/background/11background.png");
    st->winner = create_sprite("ressources/win_condition.png");
    st->fly = create_sprite("ressources/avion.png");
    st->play = create_sprite("ressources/play.png");
    st->pause = create_sprite("ressources/pause.png");
    st->loose = create_sprite("ressources/loose.png");
}

void init_sprites(my_struct_t *st)
{
    init_sprites1(st);
    init_sprites2(st);
    init_sound(st);
    score_text(st);
    score_int(st);
    score_pop(st);
}
