# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/17 09:44:19 by alaulom           #+#    #+#              #
#    Updated: 2015/01/31 13:14:35 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strcpy.c ft_strncpy.c \
		  ft_strcmp.c ft_strncmp.c ft_atoi.c ft_strcat.c ft_strdup.c \
		  ft_strchr.c ft_strrchr.c ft_strncat.c ft_strlcat.c ft_strstr.c \
		  ft_strnstr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_islower.c ft_toupper.c ft_isupper.c ft_tolower.c \
		  ft_memalloc.c ft_memdel.c ft_memdel.c ft_strnew.c ft_strdel.c \
		  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
		  ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
		  ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c \
		  ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c \
		  ft_putnbr_fd.c ft_isspace.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c \
		  ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstadd_back.c ft_putlist.c \
		  get_next_line.c ft_lstlen.c

OBJ		= $(SRC:.c=.o)
CC		= gcc
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Libft compilee avec succes !"

%.o: %.c
	@$(CC) -I includes/ -o $@ -c $? $(FLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

testall: test1 test2

test1: $(NAME) main1.c
	@gcc -I . main1.c libft.a
	@rm main1.c
	@./a.out

test2: $(NAME) main2.c
	@gcc -I . main2.c libft.a
	@rm main2.c
	@./a.out

main1.c:
	curl -s http://pastebin.com/raw.php?i=p3BBP70K > main1.c

main2.c:
	curl -s http://pastebin.com/raw.php\?i\=KQRs4L2H > main2.c

.PHONY: all clean fclean re
