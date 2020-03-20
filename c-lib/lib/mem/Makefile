##
## EPITECH PROJECT, 2020
## mem lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I ../../include/

RM			?=	rm -f

SRC			=	my_calloc.c			\
				my_memset.c			\
				my_realloc.c		\
				my_reallocarray.c	\
				my_swap.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libmem.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

debug:		CFLAGS	+=	-g3
debug:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re