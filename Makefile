##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./need4steek.c	\
		./detect_end.c	\
		./speed.c	\
		./direction.c	\
		./include/need4steek.h	\
		./lib/my.h	\
		./lib/my/my_printf.c	\
		./lib/my/my_putchar.c	\
		./lib/my/my_put_nbr.c	\
		./lib/my/my_putstr.c	\
		./lib/my/my_getnbr.c	\
		./lib/my/my_str_isnum.c	\
		./lib/my/my_strstr.c	\
		./lib/my/my_strcmp.c	\
		./lib/my/my_strlen.c	\
		./lib/my/my_getnbr_2.c	\
		./lib/my/my_show_wordtab.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	ai

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -Werror -o $(NAME)

clean:
	rm *.o
	rm lib/my/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
