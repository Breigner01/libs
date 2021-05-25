##
## EPITECH PROJECT, 2020
## unit_test
## File description:
## make
##

CFLAGS		=	-Wall -Wextra --coverage

CPPFLAGS	=	-iquote ../include/ -iquote include/linked_list -iquote include/maths -iquote include/mem \
				-iquote include/print -iquote include/str -iquote include/tab

LDLIBS		=	-lcriterion

CC			?=	gcc

RM			?=	rm -f

SRC			=	redirect_all_stdout.c						\
				../lib/linked_list/my_list_size.c			\
				../lib/linked_list/my_params_to_list.c		\
				../lib/linked_list/my_rev_list.c			\
				../lib/maths/my_compute_power_rec.c			\
				../lib/maths/my_compute_square_root.c		\
				../lib/maths/my_getnbr.c					\
				../lib/maths/nb_to_bin.c					\
				../lib/mem/my_calloc.c						\
				../lib/mem/my_memset.c						\
				../lib/mem/my_realloc.c						\
				../lib/mem/my_reallocarray.c				\
				../lib/mem/my_swap.c						\
				../lib/print/my_printf.c					\
				../lib/print/my_put_binary.c				\
				../lib/print/my_put_hexa.c					\
				../lib/print/my_put_long_long.c				\
				../lib/print/my_put_long.c					\
				../lib/print/my_put_nbr.c					\
				../lib/print/my_put_octal.c					\
				../lib/print/my_put_short.c					\
				../lib/print/my_put_unprintable.c			\
				../lib/print/my_put_unsigned_int.c			\
				../lib/print/my_put_unsigned_long.c			\
				../lib/print/my_put_unsigned_short.c		\
				../lib/print/my_putchar.c					\
				../lib/print/my_puterr.c					\
				../lib/print/my_puts.c						\
				../lib/print/my_putstr.c					\
				../lib/str/char_counter.c					\
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
				../lib/tab/my_strtok.c						\
				../lib/tab/my_tablen.c						\
				../lib/tab/str_to_arr.c						\
				lib/linked_list/test_my_list_size.c			\
				lib/linked_list/test_my_params_to_list.c	\
				lib/linked_list/test_my_rev_list.c			\
				lib/maths/test_my_compute_power_rec.c		\
				lib/maths/test_my_compute_square_root.c		\
				lib/maths/test_my_getnbr.c					\
				lib/maths/test_nb_to_bin.c					\
				lib/mem/test_my_calloc.c					\
				lib/mem/test_my_memset.c					\
				lib/mem/test_my_realloc.c					\
				lib/mem/test_my_reallocarray.c				\
				lib/mem/test_my_swap.c						\
				lib/print/test_my_printf.c					\
				lib/print/test_my_put_binary.c				\
				lib/print/test_my_put_hexa.c				\
				lib/print/test_my_put_long_long.c			\
				lib/print/test_my_put_long.c				\
				lib/print/test_my_put_nbr.c					\
				lib/print/test_my_put_octal.c				\
				lib/print/test_my_put_short.c				\
				lib/print/test_my_put_unprintable.c			\
				lib/print/test_my_put_unsigned_int.c		\
				lib/print/test_my_put_unsigned_long.c		\
				lib/print/test_my_put_unsigned_short.c		\
				lib/print/test_my_putchar.c					\
				lib/print/test_my_puterr.c					\
				lib/print/test_my_puts.c					\
				lib/print/test_my_putstr.c					\
				lib/str/test_char_counter.c					\
				lib/str/test_get_next_line.c				\
				lib/str/test_my_revstr.c					\
				lib/str/test_my_strcat.c					\
				lib/str/test_my_strcmp.c					\
				lib/str/test_my_strcpy.c					\
				lib/str/test_my_strdup.c					\
				lib/str/test_my_strlen.c					\
				lib/str/test_my_strlowcase.c				\
				lib/str/test_my_strncat.c					\
				lib/str/test_my_strncmp.c					\
				lib/str/test_my_strncpy.c					\
				lib/str/test_my_strstr.c					\
				lib/str/test_my_strupcase.c					\
				lib/tab/test_count_line_len.c				\
				lib/tab/test_count_line_nb.c				\
				lib/tab/test_my_strtok.c					\
				lib/tab/test_my_tablen.c					\
				lib/tab/test_str_to_arr.c

OBJ		=	$(SRC:.c=.o)

GCDA	=	$(SRC:.c=.gcda)

GCNO	=	$(SRC:.c=.gcno)

NAME	=	unit_test

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDLIBS) --coverage

debug: CFLAGS += -ggdb3
debug: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(GCDA) $(GCNO) ../$(NAME)

.PHONY: all debug clean fclean