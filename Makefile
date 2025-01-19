NAME = libft.a
SRCS = $(wildcard *.c)			# Automatically includes all .c files
OBJS = $(SRCS:.c=.o)			# Converts .c files to .o object files
CC = cc							# Use cc as the compiler
CFLAGS = -Wall -Wextra -Werror	# Required flags

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)		# Create the library

clean:
	rm -f $(OBJS)				# Remove object files

fclean: clean
	rm -f $(NAME)				# Remove the library

re: fclean all					# Rebuild everything
