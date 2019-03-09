##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make
##

SRC = 	src/main.c					\
		src/handle_sprite.c			\
		src/parallax.c				\
		src/destroy.c				\
		src/jump.c					\
		src/game_detail.c			\
		src/my_putstr.c				\
		src/display_draw_sprites.c	\
		src/score.c					\
		src/init_variable.c			\
		src/end_game.c				\
		src/airplane.c				\
		src/malloc_sound.c			\
		src/collision.c				\
		src/init_enemies.c			\
		src/draw_enemies.c			\

OBJ = $(SRC:.c=.o)

NAME = my_runner

RM = rm -f

CC = gcc

CFLAGS	=	-I "./include"
CFLAGS	+=	 -Wall -Wextra -g3

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) *.o

re:	fclean all

sweet: all clean
