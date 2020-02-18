##
## EPITECH PROJECT, 2020
## str lib
## File description:
## make
##

CFLAGS		=	-Wall -Wextra
CPPFLAGS	=	-I ../../include/

SRC			=	get_next_line.c		\
				my_revstr.c			\
				my_strcat.c			\
				my_strcmp.c			\
				my_strcpy.c			\
				my_strdup.c			\
				my_strlen.c			\
				my_strlowcase.c		\
				my_strncat.c		\
				my_strncmp.c		\
				my_strncpy.c		\
				my_strstr.c			\
				my_strupcase.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libstr.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

debug:		CFLAGS	+=	-g3
debug:		$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all debug clean fclean re