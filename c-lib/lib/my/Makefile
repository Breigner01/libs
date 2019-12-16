##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

CPPFLAGS=	-I ../../include/

SRC	=	my_compute_power_rec.c   	\
		my_compute_square_root.c 	\
		my_find_prime_sup.c      	\
		my_getnbr.c              	\
		my_isneg.c               	\
		my_is_prime.c            	\
		my_putchar.c             	\
		my_put_nbr.c 				\
		my_putstr.c 				\
		my_revstr.c 				\
		my_strcat.c 				\
		my_strcmp.c 				\
		my_strcpy.c 				\
		my_strlen.c 				\
		my_strlowcase.c 			\
		my_strncat.c 				\
		my_strncmp.c 				\
		my_strncpy.c 				\
		my_strstr.c 				\
		my_strupcase.c 				\
		my_swap.c 					\
		my_strdup.c 				\
		my_memset.c 				\
		sum_stdarg.c 				\
		disp_stdarg.c				\
		my_printf.c					\
		my_put_binary.c				\
		my_put_hexa.c				\
		my_put_long.c				\
		my_put_long_long.c			\
		my_put_octal.c				\
		my_put_unsigned_int.c		\
		my_put_unsigned_long.c		\
		my_put_unprintable.c		\
		my_put_short.c				\
		my_put_unsigned_short.c		\
		count_line_len.c			\
		count_line_nb.c				\
		fill_tab.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) *~ *# *.gcda *.gcno

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re