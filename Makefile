SRCS			= ${wildcard *.c}
OBJS			= $(SRCS:.c=.o)

SRC			=	ft_strdup.c ft_atoi.c ft_strlcat.c \
				ft_striteri.c ft_bzero.c \
 				ft_strjoin.c ft_calloc.c \
				ft_isalnum.c ft_memchr.c ft_strlcpy.c \
				ft_isalpha.c ft_memcmp.c ft_strlen.c \
				ft_isascii.c ft_memcpy.c ft_strmapi.c \
				ft_isdigit.c ft_memmove.c ft_strncmp.c \
				ft_isprint.c ft_memset.c ft_strnstr.c \
				ft_itoa.c ft_putchar_fd.c ft_strrchr.c \
				ft_putendl_fd.c ft_strtrim.c \
				ft_putnbr_fd.c ft_substr.c \
				ft_putstr_fd.c ft_tolower.c ft_split.c \
				ft_toupper.c ft_strchr.c

SRC_OBJS		= $(SRC:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a


$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

all:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


source:			$(SRC_OBJS)
				ar rcs $(NAME) $(SRC_OBJS)

.PHONY:			all clean fclean re bonus
