/*
** EPITECH PROJECT, 2018
** game_object.h
** File description:
** No description
*/

#ifndef MUL_MY_RUNNER_2018_GAME_OBJECT_H
#define MUL_MY_RUNNER_2018_GAME_OBJECT_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

typedef struct sprite_s {
    sfTexture *text;
    sfSprite *sprite;
    sfVector2f vec;
    sfIntRect rect;
    int offset;
} sprite_t;

typedef struct jump_s {
    int var;
    sfVector2f vec_santa;
} jump_t;

typedef struct text_s {
    sfText *score;
    sfFont *score_f;
    sfVector2f score_vec;
    sfText *score_int;
    sfFont *score_int_f;
    sfVector2f score_int_vec;
    sfText *score_pop;
    sfFont *score_pop_f;
    sfVector2f score_pop_vec;
    int point;
    int victory;
    int loose;
    int pop_up;
} text_t;

typedef struct menu_s {
    int menu_play;
    int menu_help;
} menu_t ;

typedef struct obstacle_s {
    sprite_t *gift[3];
    sprite_t *gift2[3];
    sfClock *clock;
    sfTime time;
} obstacle_t;

typedef struct sound_s {
    sfMusic *background;
    sfMusic *victory;
    sfMusic *mouse;
} sound_t;

typedef struct play_pause_s {
    int pause;
} play_pause_t;
sprite_t *create_sprite(char const *path);
#endif //MUL_MY_RUNNER_2018_GAME_OBJECT_H
