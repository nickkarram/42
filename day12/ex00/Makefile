# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkarram <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 22:23:21 by nkarram           #+#    #+#              #
#    Updated: 2016/11/10 22:53:35 by nkarram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_display_file

CC := gcc

FLAGS := -Wall -Wextra -Werror

COMPILE := $(CC) $(FLAGS)

SOURCES := ft_display_file.c

OBJECTS := ${SOURCES: .c=.o}

all: $(NAME)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

$(NAME):
		$(COMPILE) $(SOURCES) -o $(NAME)
