#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: wsallei <wsallei@student.21-school.ru>     +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2020/05/05 18:56:09 by wsallei           #+#    #+#             *#
#*   Updated: 2020/05/09 20:54:23 by wsallei          ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

.PHONY: all clean fclean re

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_strnstr.c ft_split.c

O = $(SRC:.c=.o)

FLAG = gcc -I. -c

all: $(NAME)

$(NAME):
		$(FLAG) $(SRC)
		ar rc $(NAME) $(O)
		ranlib $(NAME)

clean:
		rm -f $(O)

fclean: clean
		rm -f $(NAME) libft.so

re: fclean all

so:
	$(FLAG) $(SRC) -fPIC
	gcc -shared -o libft.so $(O) -fPIC
