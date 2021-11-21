SRCFILES=	ft_putnbr_fd.c  \
			ft_putendl_fd.c \
			ft_putstr_fd.c  \
			ft_putchar_fd.c \
			ft_striteri.c   \
			ft_strmapi.c    \
			ft_itoa.c       \
			ft_substr.c     \
			ft_split.c      \
			ft_strjoin.c    \
			ft_atoi.c       \
			ft_bzero.c      \
			ft_calloc.c     \
			ft_isalnum.c    \
			ft_isalpha.c    \
			ft_isascii.c    \
			ft_isdigit.c    \
			ft_isprint.c    \
			ft_memchr.c     \
			ft_memcmp.c     \
			ft_memcpy.c     \
			ft_memmove.c    \
			ft_memset.c     \
			ft_strchr.c     \
			ft_strdup.c     \
			ft_strlcat.c    \
			ft_strlcpy.c    \
			ft_strlen.c     \
			ft_strncmp.c    \
			ft_strtrim.c    \
			ft_strnstr.c    \
			ft_strrchr.c    \
			ft_tolower.c    \
			ft_toupper.c    \
			ft_lstsize.c

BONUSFILES= ft_lstnew.c       \
			ft_lstadd_front.c 

HEADFILES= libft.h

F= ${SRCFILES} ${BONUSFILES}

O= ${F:.c=.o}

OBJFILES= ${SRCFILES:.c=.o}

NAME= libft.a

CC= gcc

%.o:%.c ${HEADFILES}
	${CC} -Wall -Wextra -Werror -I includes -c  $< -o $@

${NAME}:   ${OBJFILES}
	ar rcs ${NAME} ${OBJFILES}

all: ${NAME}

clean: 
	rm -f ${OBJFILES} ${O}

fclean: clean
	rm -f ${NAME}

re: fclean all

rebonus: fclean bonus

bonus:   ${O}
	ar rcs ${NAME} ${O}
        
.PHONY: all clean fclean re