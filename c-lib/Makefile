##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

CPPFLAGS	=	-I include/

CFLAGS		=	-Wall -Wextra

LDFLAGS 	=	-L./lib -lll -lmaths -ltab -lmem -lprint -lstr

CC			?=	gcc

RM			=	rm -rf

SRC			=	src/main.c

OBJ			=	$(SRC:.c=.o)

NAME		=	bin

COVERAGE	=	coverage/

HTMLCOVER	=	coverage/coverage.html

all:	$(NAME)

$(NAME): $(OBJ)
	@echo "\e[38;5;46mBUILDING LIB\e[0m"
	@make -s -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

debug: CFLAGS += -g3
debug: $(OBJ)
	@echo "\e[38;5;46mBUILDING LIB IN DEGBUG MODE\e[0m"
	@make debug -s -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	@echo "\e[38;5;196mBUILT IN DEBUG MODE\e[0m"

tests_run:
	@echo "\e[38;5;208mBUILDING UNIT TESTS\e[0m"
	@make -s -C tests/
	@cp tests/unit_test .
	-./unit_test
	@-mkdir $(COVERAGE)
	gcovr --exclude tests/ --html --html-details -o $(HTMLCOVER)

tests_run_debug:
	@echo "\e[38;5;208mBUILDING UNIT TESTS IN DEBUG MODE\e[0m"
	@make debug -s -C tests/
	@cp tests/unit_test .
	-./unit_test -j1
	@-mkdir $(COVERAGE)
	gcovr --exclude tests/ --html --html-details -o $(HTMLCOVER)

clean:
	@echo "\e[38;5;196mREMOVING OBJECT FILES\e[0m"
	@$(RM) $(OBJ)
	@make clean -s -C lib/
	@make clean -s -C tests/

fclean: clean
	@echo "\e[38;5;196mREMOVING BINARIES\e[0m"
	@$(RM) $(NAME) $(COVERAGE)
	@make fclean -s -C lib/
	@make fclean -s -C tests/

re: fclean all

.PHONY: all debug tests_run tests_run_debug clean fclean re
