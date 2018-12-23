# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkuvalis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 18:10:33 by kkuvalis          #+#    #+#              #
#    Updated: 2018/12/22 18:16:41 by kkuvalis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	  ft_memset.c ft_bzero.c ft_strlen.c ft_strcat.c ft_strchr.c ft_strcpy.c \
	  ft_strdup.c ft_strlcat.c ft_strncat.c ft_strncpy.c ft_strrchr.c \
	  ft_strstr.c ft_strnstr.c ft_isalpha.c ft_isalnum.c ft_isdigit.c \
	  ft_tolower.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isascii.c \
	  ft_isprint.c ft_toupper.c ft_memdel.c ft_memalloc.c ft_strnew.c \
	  ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strtrim.c \
	  ft_strjoin.c ft_putstr.c ft_putchar.c ft_putnbr.c ft_putchar_fd.c \
	  ft_putendl.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_strsplit.c ft_itoa.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	  ft_lstadd.c ft_lstiter.c ft_lstmap.c

FLAGS = -Wall -Werror -Wextra

HEAD = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(HEAD)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
