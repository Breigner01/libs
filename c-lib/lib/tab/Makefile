##
## EPITECH PROJECT, 2020
## tab lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-I ../../include/

SRC			=	count_line_len.c		\
				count_line_nb.c			\
				fill_tab.c				\
				my_str_to_word_array.c	\
				my_strtok.c				\
				my_tablen.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libtab.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

debug:		CFLAGS	+=	-g3
debug:		$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all debug clean fclean re