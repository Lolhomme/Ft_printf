# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 13:06:15 by alaulom           #+#    #+#              #
#    Updated: 2016/03/14 12:49:19 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_libftprintf.a
SRC = ft_printf.c ft_percent.c istype_c.c ft_whichflags.c ft_init_flags.c /
	ft_conv_unicode.c ft_print_c.c ft_print_char_c.c
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	@$(CC) -I includes/ -I ./Libft/includes/ -o $@ -c $? $(FLAGS)

$(NAME): $(OBJ)
	@make -C ./Libft/ fclean && make -C ./Libft/
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "SUCCESS"

clean:
	@make -C ./Libft/ clean
	@rm -rf $(OBJ)

fclean: clean
	@make -C ./Libft/ fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
