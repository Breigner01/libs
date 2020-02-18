##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

CPPFLAGS=	-I include/
CFLAGS	=	-Wall -Wextra
LDFLAGS =	-L./lib -lll -lmath -lmem -lprintf -lstr -ltab

SRC		=

OBJ		=	$(SRC:.c=.o)

NAME	=

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run:
	make -C tests/
	cp tests/unit_test .
	./unit_test
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

debug: CFLAGS += -g3
debug: $(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	make clean -C lib/
	make clean -C tests/

fclean: clean
	rm -f $(NAME) unit_test
	make fclean -C lib/
	make fclean -C tests/

re: fclean all

.PHONY: all tests_run debug clean fclean re
