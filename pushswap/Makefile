SRCS		= make_stack.c ft_pswaptools.c short_sort.c 

OBJS		= ${SRCS:.c=.o}

NAME		= pushswap.a

INCLUDES	= -I includes

MAKE		= make

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}
libft:
			make bonus -C libft
			cp libft/libft.a ./${NAME}

$(NAME):	libft ${OBJS}
			cp libft/libft.a ${NAME}
			${CC} -c ${CFLAGS} ${INCLUDES} ${SRCS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

test:		${NAME}
			@${CC} ${CFLAGS} push_swap.c ${NAME} -o result

all:		${NAME}

clean:
			${RM} ${OBJS}
fclean:		clean
			${MAKE} fclean -C libft
			${RM} ${NAME}

re:			fclean all

.PHONY:		libft all clean fclean re
