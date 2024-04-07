NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_display_file.c

SRC = $(addprefix srcs/, $(SRCS))

OBJ = $(SRC:.c=.o)

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			${CC} -o ${NAME} ${OBJ}

all: 		${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all