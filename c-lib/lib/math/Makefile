##
## EPITECH PROJECT, 2020
## math lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I ../../include/

RM			?=	rm -f

SRC			=	my_compute_power_rec.c		\
				my_compute_square_root.c	\
				my_getnbr.c					\
				nb_to_bin.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libmath.a

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