##
## EPITECH PROJECT, 2020
## linked list lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-iquote ../../include/

RM			?=	rm -f

SRC			=	my_list_size.c		\
				my_params_to_list.c	\
				my_rev_list.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libll.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

debug:		CFLAGS	+=	-ggdb3
debug:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re