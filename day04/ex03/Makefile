# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaryjan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/02 18:08:00 by mmaryjan          #+#    #+#              #
#    Updated: 2021/02/25 21:27:29 by mmaryjan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materias

DIR_OBJ = ./

SRCS	=   AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			main.cpp \

OBJS	= $(SRCS:.cpp=.o)

RM		= rm -rf

CPP		= c++

CFLAGS	= -Wall -Wextra -Werror -g -std=c++98

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
