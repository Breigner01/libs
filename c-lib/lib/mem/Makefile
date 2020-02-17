##
## EPITECH PROJECT, 2020
## mem lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-I ../../include/

SRC			=	my_calloc.c			\
				my_memset.c			\
				my_realloc_array.c	\
				my_swap.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libmem.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

debug:		CFLAGS	+=	-g3
debug:		$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all debug clean fclean re