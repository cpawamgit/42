#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schapuis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/08/26 13:48:27 by schapuis          #+#    #+#              #
#    Updated: 2013/08/26 15:35:11 by schapuis         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = /src/ft_memalloc.c /src/ft_strsub.c /src/ft_striter.c \
/src/ft_strmap.c /src/ft_putendl.c /src/ft_putstr.c \
/src/ft_strsplit.c /src/ft_putnbr_fd.c /src/ft_strncpy.c \
/src/ft_atoi.c /src/ft_strequ.c /src/ft_putnbr.c /src/ft_strtrim2.c \
/src/ft_putstr_fd.c /src/ft_putendl_fd.c /src/ft_strmapi.c \
/src/ft_strjoin.c /src/ft_striteri.c /src/ft_strtrim.c /src/ft_strclr.c \
/src/ft_strcpy.c /src/ft_strlen.c /src/ft_strdel.c /src/ft_strnequ.c \
/src/ft_itoa.c /src/ft_memset.c /src/ft_strnew.c /src/ft_bzero.c \
/src/ft_memdel.c /src/ft_putchar_fd.c /src/ft_putchar.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) ft_memalloc.o ft_strsub.o ft_striter.o \
ft_strmap.o ft_putendl.o ft_putstr.o \
ft_strsplit.o ft_putnbr_fd.o ft_strncpy.o \
ft_atoi.o ft_strequ.o ft_putnbr.o ft_strtrim2.o \
ft_putstr_fd.o ft_putendl_fd.o ft_strmapi.o \
ft_strjoin.o ft_striteri.o ft_strtrim.o ft_strclr.o \
ft_strcpy.o ft_strlen.o ft_strdel.o ft_strnequ.o \
ft_itoa.o ft_memset.o ft_strnew.o ft_bzero.o \
ft_memdel.o ft_putchar_fd.o ft_putchar.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_memalloc.o ft_strsub.o ft_striter.o \
ft_strmap.o ft_putendl.o ft_putstr.o \
ft_strsplit.o ft_putnbr_fd.o ft_strncpy.o \
ft_atoi.o ft_strequ.o ft_putnbr.o ft_strtrim2.o \
ft_putstr_fd.o ft_putendl_fd.o ft_strmapi.o \
ft_strjoin.o ft_striteri.o ft_strtrim.o ft_strclr.o \
ft_strcpy.o ft_strlen.o ft_strdel.o ft_strnequ.o \
ft_itoa.o ft_memset.o ft_strnew.o ft_bzero.o \
ft_memdel.o ft_putchar_fd.o ft_putchar.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
