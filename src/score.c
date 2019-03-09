/*
** EPITECH PROJECT, 2018
** score.c
** File description:
** No description
*/

#include <stdlib.h>
#include <stdio.h>
#include <my.h>
#include "struct.h"

void score_text(my_struct_t *st)
{
    st->text->score_f = sfFont_createFromFile("ressources/ka1.ttf");
    st->text->score_vec.x = 1431 / 2 - 87;
    st->text->score_vec.y = 30;
    st->text->score = sfText_create();
    sfText_setString(st->text->score, "score");
    sfText_setFont(st->text->score, st->text->score_f);
    sfText_setCharacterSize(st->text->score, 40);
    sfText_setColor(st->text->score, sfBlack);
    sfText_setPosition(st->text->score, st->text->score_vec);
}

char *get_nbr(int i)
{
    static char buff[8];

    for (int j = 5; j >= 0; j--) {
        buff[j] = i % 10 + 48;
        i = i / 10;
    }
    buff[8] = '\0';
    return (buff);
}

void inc_score(my_struct_t *st)
{
    char *buff = get_nbr(st->text->point);
    st->text->point += 1;
    sfText_setString(st->text->score_int, buff);
    if (st->text->point > 10000)
        st->text->victory = 1;
}

void score_int(my_struct_t *st)
{
    char *buff = NULL;

    st->text->point += 1;
    if (st->text->point > 10000)
        st->text->victory = 1;
    st->text->score_int_f = sfFont_createFromFile("ressources/ka1.ttf");
    st->text->score_int_vec.x = 1431 / 2 - 125;
    st->text->score_int_vec.y = 90;
    st->text->score_int = sfText_create();
    sfText_setString(st->text->score_int, buff);
    sfText_setFont(st->text->score_int, st->text->score_int_f);
    sfText_setCharacterSize(st->text->score_int, 50);
    sfText_setColor(st->text->score_int, sfBlack);
    sfText_setPosition(st->text->score_int, st->text->score_int_vec);
}

void score_pop(my_struct_t *st)
{
    st->text->score_pop_f = sfFont_createFromFile("ressources/ka1.ttf");
    st->text->score_pop_vec.x = 130;
    st->text->score_pop_vec.y = 630;
    st->text->score_pop = sfText_create();
    sfText_setString(st->text->score_pop, "Nice !");
    sfText_setFont(st->text->score_pop, st->text->score_pop_f);
    sfText_setCharacterSize(st->text->score_pop, 20);
    sfText_setColor(st->text->score_pop, sfBlack);
    sfText_setPosition(st->text->score_pop, st->text->score_pop_vec);
}