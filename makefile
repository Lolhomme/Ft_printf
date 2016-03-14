# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 13:06:15 by alaulom           #+#    #+#              #
#    Updated: 2016/03/14 16:18:20 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC  = ft_printf.c \
	   ./sources/ft_percent.c ./sources/istype_c.c ./sources/ft_whichflags.c \
	  ./sources/ft_init_flags.c ./sources/ft_conv_unicode.c \
	  ./sources/ft_print_c.c ./sources/ft_print_char_c.c \
OBJ  = $(SRC:.c=.o)
CC   = gcc
FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./Libft/ fclean && make -C ./Libft/
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "SUCCESS"

%.o: %.c
	@$(CC) -I includes/ -I ./Libft/includes/ -o $@ -c $? $(FLAGS)

clean:
	@make -C ./Libft/ clean
	@rm -rf $(OBJ)

fclean: clean
	@make -C ./Libft/ fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
