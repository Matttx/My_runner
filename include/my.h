/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** No description
*/

#ifndef MUL_MY_RUNNER_2018_MY_H
#define MUL_MY_RUNNER_2018_MY_H

#include <stdio.h>
#include <stdarg.h>
#include "struct.h"

void rect(my_struct_t *st);
void handle_santa(my_struct_t *st);
void manage_space(my_struct_t *st);
void draw_sprites(my_struct_t *st);
void draw_sprites2(my_struct_t *st);
void timer_sprite(my_struct_t *st);
void handle_function(my_struct_t *st);
void init_sprites(my_struct_t *st);
void parallax_ground(my_struct_t *st);
void parallax_trees(my_struct_t *st);
void parallax_distant_trees(my_struct_t *st);
void parallax_cloud1(my_struct_t *st);
void parallax_cloud2(my_struct_t *st);
void jump_santa(my_struct_t *st);
void set_position(my_struct_t *st);
void score_text(my_struct_t *st);
void score_int(my_struct_t *st);
void destroy_sprite(my_struct_t *st);
void destroy_texture(my_struct_t *st);
void destroy(my_struct_t *st);
void init_sprites1(my_struct_t *st);
void init_sprites2(my_struct_t *st);
void manage_input(my_struct_t *st);
int game_detail(int ac, char **av);
int my_putstr(char const *str);
void end_game(my_struct_t *st);
void inc_score(my_struct_t *st);
void init_variable(my_struct_t *st);
void airplane(my_struct_t *st);
void init_sound(my_struct_t *st);
void draw_enemies(obstacle_t *obs, my_struct_t *st);
void score_pop(my_struct_t *st);
void init_enemies(obstacle_t *obs);
void random_position(obstacle_t *obs);
void set_enemies(obstacle_t *obs);
void collision_gift(sprite_t *s1, sprite_t *s2, my_struct_t *st);
void collision_gift2(sprite_t *s1, sprite_t *s2, my_struct_t *st);
void move_enemies(obstacle_t *obs, my_struct_t *st);
void malloc_struct(my_struct_t *st);

#endif //MUL_MY_RUNNER_2018_MY_H
