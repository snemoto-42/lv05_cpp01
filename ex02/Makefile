# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snemoto <snemoto@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 19:23:56 by snemoto           #+#    #+#              #
#    Updated: 2023/12/03 14:03:51 by snemoto          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# Variables																	   #
# **************************************************************************** #

NAME	= reference

SRCS	= $(shell echo *.cpp)
OBJDIR	= obj/
OBJS	= $(SRCS:%.c=$(OBJDIR)%.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
RM			= rm -f
RMD			= rm -rf

# **************************************************************************** #
# General Rules																   #
# **************************************************************************** #

all:	$(OBJDIR) $(NAME)

$(OBJDIR):
		mkdir -p obj

$(OBJDIR)%.o: %.c
		$(CXX) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		${RMD} $(OBJDIR)

fclean:	clean
		${RM} ${NAME}

re:		fclean all

bonus:	all

.PHONY: all clean fclean re bonus
