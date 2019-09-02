# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchocho <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:43:27 by mchocho           #+#    #+#              #
#    Updated: 2019/09/02 15:07:42 by mchocho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h

FLAGS = -Wall -Werror -Wextra -c

SRC = ./ft_memset.c\
	./ft_bzero.c\
	./ft_memcpy.c\
	./ft_memccpy.c\
	./ft_memmove.c\
	./ft_memchr.c\
	./ft_memcmp.c\
	./ft_strlen.c\
	./ft_strdup.c\
	./ft_strcpy.c\
	./ft_strncpy.c\
	./ft_strcat.c\
	./ft_strncat.c\
	./ft_strlcat.c\
	./ft_strchr.c\
	./ft_strrchr.c\
	./ft_strstr.c\
	./ft_strnstr.c\
	./ft_strcmp.c\
	./ft_strncmp.c\
	./ft_atoi.c\
	./ft_isalpha.c\
	./ft_isdigit.c\
	./ft_isalnum.c\
	./ft_isascii.c\
	./ft_isprint.c\
	./ft_toupper.c\
	./ft_tolower.c\
	./ft_memalloc.c\
	./ft_memdel.c\
	./ft_strnew.c\
	./ft_strdel.c\
	./ft_strclr.c\
	./ft_striter.c\
	./ft_striteri.c\
	./ft_strmap.c\
	./ft_strmapi.c\
	./ft_strequ.c\
	./ft_strnequ.c\
	./ft_strsub.c\
	./ft_strjoin.c\
	./ft_strtrim.c\
	./ft_strsplit.c\
	./ft_itoa.c\
	./ft_putchar.c\
	./ft_putstr.c\
	./ft_putendl.c\
	./ft_putnbr.c\
	./ft_putchar_fd.c\
	./ft_putstr_fd.c\
	./ft_putendl_fd.c\
	./ft_putnbr_fd.c\
	./ft_lstnew.c\
	./ft_lstadd.c\
	./ft_lstdel.c\
	./ft_lstdelone.c\
	./ft_lstiter.c\
	./ft_isuppercase.c\
	./ft_islowercase.c\
	./ft_charindex.c\
	./ft_strichr.c\
	./ft_strichrfromindex.c\
	./ft_stristr.c\
	./ft_stristrfromindex.c\
	./ft_strnewstr.c\
	./ft_strndup.c\
	./ft_boolstr.c\
	./ft_boolstrS.c\
	./ft_boolstrU.c\
	./ft_chrcmp.c\
	./ft_splicesubstr.c\
	./ft_strndup.c\

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(HEADERS)
	ar rv $(NAME) $(OBJECTS)
	ranlib $(NAME)
	rm libft.h.gch

clean:
	rm -f $(OBJECTS)
	rm libft.h.gch

fclean: clean
	rm -f $(NAME)

re:	fclean all

norm:
	norminette $(FN)

compile:
	gcc $(FLAGS) $(FN)

out:
	./a.out

outw:
	./a.exe

.PHONY: re, clean, fclean, all
