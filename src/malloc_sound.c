/*
** EPITECH PROJECT, 2018
** sound.c
** File description:
** No description
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>

#include "my.h"
#include "struct.h"
#include "game_object.h"

void malloc_struct(my_struct_t *st)
{
    st->jump = malloc(sizeof(jump_t));
    st->text = malloc(sizeof(text_t));
    st->sound = malloc(sizeof(sound_t));
    st->plpa = malloc(sizeof(play_pause_t));
    st->obs = malloc(sizeof(obstacle_t));
    st->menu = malloc(sizeof(menu_t));
}

void init_sound(my_struct_t *st)
{
    st->sound->mouse = sfMusic_createFromFile("ressources/mouse_click.wav");
    st->sound->background = sfMusic_createFromFile("ressources/Guile.wav");
    sfMusic_setLoop(st->sound->background, sfTrue);
    sfMusic_setVolume(st->sound->background, 20);
}

void manage_menu(my_struct_t *st)
{
    if (st->event.mouseButton.x >= 522 &&
        st->event.mouseButton.x <= 922 &&
        st->event.mouseButton.y >= 366 &&
        st->event.mouseButton.y <= 466)
        st->menu->menu_play = 1;
    if (st->event.mouseButton.x >= 518 &&
        st->event.mouseButton.x <= 918 &&
        st->event.mouseButton.y >= 569 &&
        st->event.mouseButton.y <= 669)
        st->menu->menu_help = 1;
    if (st->menu->menu_help == 1 &&
        st->event.mouseButton.x >= 614 &&
        st->event.mouseButton.x <= 814 &&
        st->event.mouseButton.y >= 898 &&
        st->event.mouseButton.y <= 949) {
        st->menu->menu_play = 1;
        st->menu->menu_help = 0;
    }
}

void manage_plpa(my_struct_t *st)
{
    if (st->event.mouseButton.x >= 1231 &&
        st->event.mouseButton.x <= 1431 &&
        st->event.mouseButton.y >= 0 &&
        st->event.mouseButton.y <= 200)
        st->plpa->pause += 1;
    if (st->plpa->pause % 2 != 0 && st->menu->menu_play == 1)
        sfMusic_pause(st->sound->background);
    else if (st->menu->menu_play == 1)
        sfMusic_play(st->sound->background);
}

void manage_input(my_struct_t *st)
{
    if (st->event.type == sfEvtClosed)
        sfRenderWindow_close(st->window);
    if (st->event.type == sfEvtKeyPressed) {
        if (st->event.key.code == sfKeySpace && st->plpa->pause % 2 == 0 &&
            st->text->loose == 0 && st->text->victory == 0) {
            st->jump->var = 1;
        }
    }
    if (st->event.type == sfEvtMouseButtonPressed) {
        sfMusic_play(st->sound->mouse);
        manage_menu(st);
        manage_plpa(st);
    }
}
