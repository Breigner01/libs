##
## EPITECH PROJECT, 2020
## linked list lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-I ../../include/

SRC			=	my_list_size.c		\
				my_params_to_list.c	\
				my_rev_list.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libll.a

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