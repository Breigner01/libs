##
## EPITECH PROJECT, 2020
## unit_test
## File description:
## make
##

CFLAGS		=	-Wall -Wextra --coverage
CPPFLAGS	=	-I ../include/
LDFLAGS		=	-lcriterion
UTFLAGS		=	--coverage
CC			?=	gcc
RM			?=	rm -f

SRC		=	redirect_all_stdout.c						\
			../lib/linked_list/my_list_size.c			\
			../lib/linked_list/my_params_to_list.c		\
			../lib/linked_list/my_rev_list.c			\
			../lib/math/my_compute_power_rec.c			\
			../lib/math/my_compute_square_root.c		\
			../lib/math/my_find_prime_sup.c				\
			../lib/math/my_getnbr.c						\
			../lib/math/my_is_prime.c					\
			../lib/math/my_isneg.c						\
			../lib/mem/my_calloc.c						\
			../lib/mem/my_memset.c						\
			../lib/mem/my_realloc.c						\
			../lib/mem/my_reallocarray.c				\
			../lib/mem/my_swap.c						\
			../lib/printf/my_printf.c					\
			../lib/printf/my_put_binary.c				\
			../lib/printf/my_put_hexa.c					\
			../lib/printf/my_put_long_long.c			\
			../lib/printf/my_put_long.c					\
			../lib/printf/my_put_nbr.c					\
			../lib/printf/my_put_octal.c				\
			../lib/printf/my_put_short.c				\
			../lib/printf/my_put_unprintable.c			\
			../lib/printf/my_put_unsigned_int.c			\
			../lib/printf/my_put_unsigned_long.c		\
			../lib/printf/my_put_unsigned_short.c		\
			../lib/printf/my_putchar.c					\
			../lib/printf/my_puterr.c					\
			../lib/printf/my_puts.c						\
			../lib/printf/my_putstr.c					\
			../lib/str/get_next_line.c					\
			../lib/str/my_revstr.c						\
			../lib/str/my_strcat.c						\
			../lib/str/my_strcmp.c						\
			../lib/str/my_strcpy.c						\
			../lib/str/my_strdup.c						\
			../lib/str/my_strlen.c						\
			../lib/str/my_strlowcase.c					\
			../lib/str/my_strncat.c						\
			../lib/str/my_strncmp.c						\
			../lib/str/my_strncpy.c						\
			../lib/str/my_strstr.c						\
			../lib/str/my_strupcase.c					\
			../lib/tab/count_line_len.c					\
			../lib/tab/count_line_nb.c					\
			../lib/tab/fill_tab.c						\
			../lib/tab/my_str_to_word_array.c			\
			../lib/tab/my_strtok.c						\
			../lib/tab/my_tablen.c						\
			lib/linked_list/test_my_list_size.c			\
			lib/linked_list/test_my_params_to_list.c	\
			lib/linked_list/test_my_rev_list.c			\
			lib/math/test_my_compute_power_rec.c		\
			lib/math/test_my_compute_square_root.c		\
			lib/math/test_my_find_prime_sup.c			\
			lib/math/test_my_getnbr.c					\
			lib/math/test_my_is_prime.c					\
			lib/math/test_my_isneg.c					\
			lib/mem/test_my_calloc.c					\
			lib/mem/test_my_memset.c					\
			lib/mem/test_my_realloc.c					\
			lib/mem/test_my_swap.c						\
			lib/printf/test_my_printf.c					\
			lib/printf/test_my_put_binary.c				\
			lib/printf/test_my_put_hexa.c				\
			lib/printf/test_my_put_long_long.c			\
			lib/printf/test_my_put_long.c				\
			lib/printf/test_my_put_nbr.c				\
			lib/printf/test_my_put_octal.c				\
			lib/printf/test_my_put_short.c				\
			lib/printf/test_my_put_unprintable.c		\
			lib/printf/test_my_put_unsigned_int.c		\
			lib/printf/test_my_put_unsigned_long.c		\
			lib/printf/test_my_put_unsigned_short.c		\
			lib/printf/test_my_putchar.c				\
			lib/printf/test_my_puterr.c					\
			lib/printf/test_my_puts.c					\
			lib/printf/test_my_putstr.c

OBJ		=	$(SRC:.c=.o)

GCDA	=	$(SRC:.c=.gcda)

GCNO	=	$(SRC:.c=.gcno)

NAME	=	unit_test

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(UTFLAGS)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(GCDA) $(GCNO)