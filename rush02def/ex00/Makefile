NAME = rush-02

SRCS = main.c ft_rush02.c ft_tool.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	gcc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
