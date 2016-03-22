# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agauci-d <agauci-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 14:50:32 by agauci-d          #+#    #+#              #
#    Updated: 2015/03/05 09:58:18 by agauci-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCE =	./ft_strcat.c \
		./ft_strncat.c \
		./ft_strcpy.c \
		./ft_strncpy.c \
		./ft_strlen.c \
		./ft_strstr.c \
		./ft_strnstr.c \
		./ft_strcmp.c \
		./ft_strncmp.c \
		./ft_strdup.c \
		./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isalnum.c \
		./ft_isascii.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_bzero.c \
		./ft_memset.c \
		./ft_memcpy.c \
		./ft_memccpy.c \
		./ft_memmove.c \
		./ft_memcmp.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strlcat.c \
		./ft_atoi.c \
		./ft_isprint.c \
		./ft_memchr.c \
		./ft_putchar.c \
		./ft_putnbr.c \
		./ft_putstr.c \
		./ft_putendl.c \
		./ft_putchar_fd.c \
		./ft_putnbr_fd.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_memalloc.c \
		./ft_memdel.c \
		./ft_strnew.c \
		./ft_strclr.c \
		./ft_striter.c \
		./ft_striteri.c \
		./ft_strequ.c \
		./ft_strnequ.c \
		./ft_strjoin.c \
		./ft_strmap.c \
		./ft_strmapi.c \
		./ft_strsub.c \
		./ft_strdel.c \
		./ft_itoa.c \
		./ft_intlength.c \
		./ft_strtrim.c \
		./ft_strsplit.c \
		./ft_lstnew.c \
		./ft_lstmap.c ft_lstiter.c ft_lstdel.c ft_lstaddend.c ft_lstadd.c \
		./ft_lstdelone.c \
		./lstdbl/ft_lstdbladd.c \
		./lstdbl/ft_lstdbladdend.c \
		./lstdbl/ft_lstdbldel.c \
		./lstdbl/ft_lstdblnew.c \
		./get_next_line.c \

NOM = $(basename $(SOURCE))

OBJET = $(addsuffix .o, $(NOM))

FLAGS = -I ./includes/ -Werror -Wextra -Wall -g

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJET)
	@ar -rsc $(NAME) $^
	@echo "make libft OK"

%.o: %.c
	@$(CC) -o $@ -c $< $(FLAGS) -I ./includes

clean:
	@/bin/rm -f $(OBJET)
	@echo "clean libft OK"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "fclean libft OK"

re: fclean all
	@echo "re libft OK"

.PHONY: all clean fclean re
