# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 19:27:38 by mlalouli          #+#    #+#              #
#    Updated: 2022/12/26 01:51:02 by mlalouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

CXX = c++
NAME = FragTrap

CXXFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re