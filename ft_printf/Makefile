NAME = libftprintf.a

SRC =	ft_printf.c\
		ft_parses.c\
		char_write.c\
		hex_write.c\
		int_write.c\
		perc_write.c\
		pointer_write.c\
		str_write.c\
		uns_int_write.c

OBJ = $(SRC:.c=.o)

OBJO = 	ft_flags.o\
		ft_parses.o\
		char_write.o\
		hex_write.o\
		int_write.o\
		perc_write.o\
		pointer_write.o\
		str_write.o\
		uns_int_write.o

CFLAGS = -Wall -Wextra -Werror -c

CC = gcc

RM = rm -rf

INCLUDES = -I ft_printf.h

$(NAME): $(OBJ)
		$(MAKE) bonus -C ./libft
		cp libft/libft.a $(NAME)
		$(CC) $(CFLAGS) $(INCLUDES) $(SRC)
		ar rcs $(NAME) $(OBJ)

all : $(NAME)

clean:
		$(MAKE) clean -C ./libft
		$(RM) $(OBJO)
		$(RM) $(OBJ)

fclean: clean
		$(MAKE) fclean -C ./libft
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
