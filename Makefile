# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchocho <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:43:27 by mchocho           #+#    #+#              #
#    Updated: 2019/06/03 14:43:54 by mchocho          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

HEADERS	:= includes/libft.h

FLAGS	:= -Wall -Werror -Wextra -c

SRC = ./src/ft_memset.c\
	./src/ft_bzero.c\
	./src/ft_memcpy.c\
	./src/ft_memccpy.c\
	./src/ft_memmove.c\
	./src/ft_memchr.c\
	./src/ft_memcmp.c\
	./src/ft_strlen.c\
	./src/ft_strdup.c\
	./src/ft_strcpy.c\
	./src/ft_strncpy.c\
	./src/ft_strcat.c\
	./src/ft_strncat.c\
	./src/ft_strlcat.c\
	./src/ft_strchr.c\
	./src/ft_strrchr.c\
	./src/ft_strstr.c\
	./src/ft_strnstr.c\
	./src/ft_strcmp.c\
	./src/ft_strncmp.c\
	./src/ft_atoi.c\
	./src/ft_isalpha.c\
	./src/ft_isdigit.c\
	./src/ft_isalnum.c\
	./src/ft_isascii.c\
	./src/ft_isprint.c\
	./src/ft_toupper.c\
	./src/ft_tolower.c\
	./src/ft_memalloc.c\
	./src/ft_memdel.c\
	./src/ft_strnew.c\
	./src/ft_strdel.c\
	./src/ft_strclr.c\
	./src/ft_striter.c\
	./src/ft_striteri.c\
	./src/ft_strmap.c\
	./src/ft_strmapi.c\
	./src/ft_strequ.c\
	./src/ft_strnequ.c\
	./src/ft_strsub.c\
	./src/ft_strjoin.c\
	./src/ft_strtrim.c\
	./src/ft_strsplit.c\
	./src/ft_itoa.c\
	./src/ft_putchar.c\
	./src/ft_putstr.c\
	./src/ft_putendl.c\
	./src/ft_putnbr.c\
	./src/ft_putchar_fd.c\
	./src/ft_putstr_fd.c\
	./src/ft_putendl_fd.c\
	./src/ft_putnbr_fd.c\
	./src/ft_lstnew.c\
	./src/ft_lstadd.c\
	./src/ft_lstdel.c\
	./src/ft_lstdelone.c\
	./src/ft_lstiter.c\
	./src/ft_isuppercase.c\
	./src/ft_islowercase.c\
	./src/ft_charindex.c\
	./src/ft_strichr.c\
	./src/ft_strichrfromindex.c\
	./src/ft_stristr.c\
	./src/ft_stristrfromindex.c\
	./src/ft_strndup.c\
	./src/ft_boolstr.c\
	./src/ft_chrcmp.c\
	./src/ft_strndup.c\
	./src/ft_putpaddedstr.c\
	./src/ft_strclean.c\
	./src/ft_strcleandel.c\
	./src/ft_strcmpi.c

TEMP = $(subst /src/,/includes/,$(SRC))
OBJECTS = $(TEMP:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) $(HEADERS)
	ar rv $(NAME) $(subst /includes/,/,$(OBJECTS))
	ranlib $(NAME)
	mv -f ./*o ./output
	rm -rf ./includes/*.gch

clean:
	rm -f ./output/*o ./includes/libft.h.gch

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
