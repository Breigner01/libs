##
## EPITECH PROJECT, 2020
## printf lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-I ../../include/
RM			?=	rm -f

SRC			=	my_printf.c				\
				my_put_binary.c			\
				my_put_hexa.c			\
				my_put_long_long.c		\
				my_put_long.c			\
				my_put_nbr.c			\
				my_put_octal.c			\
				my_put_short.c			\
				my_put_unprintable.c	\
				my_put_unsigned_int.c	\
				my_put_unsigned_long.c	\
				my_put_unsigned_short.c	\
				my_putchar.c			\
				my_puterr.c				\
				my_puts.c				\
				my_putstr.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libprintf.a

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