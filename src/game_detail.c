/*
** EPITECH PROJECT, 2018
** game_detail.c
** File description:
** No description
*/

#include <my.h>

int game_detail(int ac, char **av)
{
    if (ac != 2)
        return (0);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        char *message =
                "USAGE" "\n"
                "\t./my_runner map.txt\n"
                "DESCRIPTION" "\n"
                "\tThis game is a runner game" "\n"
                "\tYou must jump over the blocs to continue the party" "\n"
                "\tThe goal of this game is to go as far as possible" "\n"
                "\tYou should pressed 'Space' if you want jump" "\n"
                "\tYou must have a score of 10 000 to win" "\n";
        my_putstr(message);
        return (1);
    }
    return (0);
}