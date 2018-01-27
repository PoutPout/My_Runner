##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC     =       runner.c                    \

NAME    =       my_runner

$(NAME):
		gcc -o $(NAME) $(SRC) -L. lib/my/libmy.a -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:		$(NAME)

clean:
		rm -f $(NAME)
fclean:		clean
		rm -f $(NAME)
re:	fclean all
