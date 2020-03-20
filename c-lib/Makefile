##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

CPPFLAGS=	-I include/

CFLAGS	=	-Wall -Wextra

LDFLAGS =	-L./lib -lll -lmath -lmem -lprintf -lstr -ltab

CC		?=	gcc

RM		?=	rm -f

SRC		=

OBJ		=	$(SRC:.c=.o)

NAME	=

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run:
	make -C tests/
	cp tests/unit_test .
	./unit_test
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

debug: CFLAGS += -g3
debug: clean $(NAME)

clean:
	$(RM) $(OBJ)
	make clean -C lib/
	make clean -C tests/

fclean: clean
	$(RM) $(NAME)
	make fclean -C lib/
	make fclean -C tests/

re: fclean all

.PHONY: tests_run clean fclean re