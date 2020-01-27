##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

CPPFLAGS=	-I include/
CFLAGS	=	-Wall -Wextra
LDFLAGS =	-L lib/my/ -lmy
UTFLAGS =	-lcriterion --coverage

SRC		=

OBJ		=	$(SRC:.c=.o)

NAME	=

SRCUT	=	lib/my/my_compute_power_rec.c			\
			lib/my/my_compute_square_root.c 	\
			lib/my/my_find_prime_sup.c		\
			lib/my/my_getnbr.c			\
			lib/my/my_isneg.c			\
			lib/my/my_is_prime.c			\
			lib/my/my_putchar.c			\
			lib/my/my_put_nbr.c			\
			lib/my/my_putstr.c 			\
			lib/my/my_revstr.c 			\
			lib/my/my_strcat.c 			\
			lib/my/my_strcmp.c 			\
			lib/my/my_strcpy.c 			\
			lib/my/my_strlen.c 			\
			lib/my/my_strlowcase.c 			\
			lib/my/my_strncat.c 			\
			lib/my/my_strncmp.c 			\
			lib/my/my_strncpy.c 			\
			lib/my/my_strstr.c 			\
			lib/my/my_strupcase.c 			\
			lib/my/my_swap.c 			\
			lib/my/my_strdup.c 			\
			lib/my/my_memset.c 			\
			lib/my/sum_stdarg.c 			\
			lib/my/disp_stdarg.c			\
			lib/my/my_printf.c			\
			lib/my/my_put_binary.c			\
			lib/my/my_put_hexa.c			\
			lib/my/my_put_long.c			\
			lib/my/my_put_long_long.c		\
			lib/my/my_put_octal.c			\
			lib/my/my_put_unsigned_int.c		\
			lib/my/my_put_unsigned_long.c		\
			lib/my/my_put_unprintable.c		\
			lib/my/my_put_short.c			\
			lib/my/my_put_unsigned_short.c

OBJUT	=	$(SRCUT:.c=.o)

NAMEUT	=	unit_tests

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run: CFLAGS += --coverage
tests_run: $(OBJUT)
	gcc -o $(NAMEUT) $(OBJUT) $(UTFLAGS)
	./$(NAMEUT)
	gcovr --exclude tests/
	gcovr --branches --exclude tests/

debug: CFLAGS += -g3
debug: $(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ) $(OBJUT) vgcore.* *.gcda *.gcno
	make clean -C lib/my/

fclean: clean
	rm -f $(NAME) $(NAMEUT)
	make fclean -C lib/my/

re: fclean all

.PHONY: all tests_run debug clean fclean re
