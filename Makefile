SRCS	=   ft_strtrim.c ft_strnstr.c ft_strlcat.c ft_substr.c \
			ft_calloc.c ft_strmapi.c ft_strjoin.c ft_split.c \
			ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_strdup.c ft_isalpha.c ft_isspace.c \
			ft_memcpy.c ft_strlcpy.c ft_tolower.c ft_atoi.c \
			ft_isascii.c ft_memccpy.c ft_memmove.c ft_strlen.c \
			ft_toupper.c ft_bzero.c ft_isdigit.c ft_memchr.c \
			ft_memset.c ft_strncmp.c ft_isalnum.c ft_isprint.c \
			ft_memcmp.c ft_strchr.c ft_strrchr.c

OBJS	=	$(addprefix srcs/, ${SRCS:.c=.o})

BONUS			=	ft_lstlast.c ft_lstsize.c ft_lstnew.c \
					ft_lstadd_front.c #ft_lstadd_back.c \
					ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstmap.c 

BONUS_OBJS		= $(BONUS:.c=.o)

NAME    =	libft.a
CC	=	gcc
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c -I includes $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
		ar -rc ${NAME} ${OBJS}
		ranlib ${NAME}

bonus:			$(OBJS) $(BONUS_OBJS)
				ar -rc $(NAME) $(OBJS) $(BONUS_OBJS)
				ranlib $(name)

so:
		$(CC) -fPIC $(CFLAGS) -c $(addprefix srcs/, $(SRCS)) $(addprefix srcs/, $(BONUS))
		gcc -shared -o libft.so $(OBJS) $(BONUS_OBJS)

clean:
	        	rm -f ${OBJS}

fclean:         clean
	        	rm -f ${NAME}

re:             fclean all

.PHONY:         all clean fclean re
