/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** No description
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

#include "struct.h"
#include "my.h"

void manage_space(my_struct_t *st)
{
    while (sfRenderWindow_pollEvent(st->window, &st->event))
        manage_input(st);
}

void handle_santa(my_struct_t *st)
{
    int max_value = 1000;

    st->santa->offset += 100;
    if (st->santa->offset > max_value)
        st->santa->offset = 0;
    st->santa->rect.left = st->santa->offset;
}

void handle_function(my_struct_t *st)
{
    sfRenderWindow_clear(st->window, sfBlack);
    manage_space(st);
    if (st->plpa->pause % 2 == 0 && st->text->loose == 0 &&
        st->text->victory == 0 && st->menu->menu_play == 1) {
        random_position(st->obs);
        timer_sprite(st);
        inc_score(st);
    }
    if (st->text->loose == 1)
        sfMusic_pause(st->sound->background);
    draw_sprites2(st);
    draw_sprites(st);
    end_game(st);
    sfRenderWindow_display(st->window);
}

void rect(my_struct_t *st)
{
    init_variable(st);
    st->menu->menu_play = 0;
    st->text->point = 9900;
    st->text->victory = 0;
    st->clock = sfClock_create();
    st->clock_para = sfClock_create();
    st->santa->rect.top = 0;
    st->santa->rect.left = st->santa->offset;
    st->santa->rect.width = 100;
    st->santa->rect.height = 69;
    st->santa_jump->vec.y = 750;
    st->santa_jump->vec.x = 200;
    st->santa_jump->rect.top = 50;
    st->santa_jump->rect.left = st->santa_jump->offset;
    st->santa_jump->rect.width = 150;
    st->santa_jump->rect.height = 150;
}

int main(int ac, char **av)
{
    my_struct_t *st = malloc(sizeof(my_struct_t));
    sfVideoMode mode = {1431, 1080, 60};

    malloc_struct(st);
    init_sprites(st);
    rect(st);
    if (game_detail(ac, av) == 1)
        return (0);
    set_position(st);
    st->window = sfRenderWindow_create(mode, "Runner", sfDefaultStyle, NULL);
    sfRenderWindow_setVerticalSyncEnabled(st->window, sfTrue);
    sfRenderWindow_setFramerateLimit(st->window, 60);
    while (sfRenderWindow_isOpen(st->window))
        handle_function(st);
    destroy(st);
    return (0);
}