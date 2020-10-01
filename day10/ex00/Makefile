# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkarram <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 17:57:09 by nkarram           #+#    #+#              #
#    Updated: 2016/11/08 18:59:34 by nkarram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

INCLUDES = -Iincludes

SOURCES = srcs/ft_putchar srcs/ft_putstr srcs/ft_strcmp srcs/ft_strlen srcs/ft_swap

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

AR = ar rc

INDEX = ranlib $(LIBRARY)

$(LIBRARY) = $(CC) $(CFLAGS) $(INCLUDES) $(SOURCES) $(OBJECTS) $(AR) $(INDEX)

all: $(LIBRARY)
	@echo	All compiled

clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin.rm -f $(LIBRARY)

re: fclean all
