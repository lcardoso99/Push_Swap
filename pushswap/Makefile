SRCS		= sources/ft_isflag.c sources/ft_precision.c sources/ft_specialprint.c sources/ft_isflag.c sources/ft_typeprint.c sources/ft_width.c sources/ft_printtype.c sources/ft_itoa_base.c sources/ft_itoa_uint.c sources/ft_ptoa.c sources/ft_isaccept.c sources/ft_flags.c sources/ft_minus.c sources/ft_ptrwidth.c ft_printf.c

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

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
			@${CC} ${CFLAGS} main3.c ${NAME} -o result
			@./result\

all:		${NAME}

clean:
			${RM} ${OBJS}
fclean:		clean
			${MAKE} fclean -C libft
			${RM} ${NAME}

re:			fclean all

.PHONY:		libft all clean fclean re
