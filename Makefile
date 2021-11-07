SRCFILES=   ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlen.c  \
			ft_memset.c  \
			ft_bzero.c   \
			ft_memcpy.c  \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c  \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c  \
			ft_memcmp.c



HEADFILES=	libft.h

OBJFILES=	${SRCFILES:.c=.o}

NAME=		libft.a

CC=			gcc

.c.o:		${OBJFILES}
			${CC} -Wall -Wextra -Werror -I includes -c  $< -o ${<:.c=.o}

${NAME}:	${OBJFILES}
			ar rcs ${NAME} ${OBJFILES}

all:		${NAME}

clean: 
			rm -f ${OBJFILES}

fclean:		clean
			rm -f ${NAME}

re: 		fclean all

rebonus:	fclean bonus

bonus:		${SRCFILES+=BONUSFILES} ${NAME}
        
.PHONY: all clean fclean re