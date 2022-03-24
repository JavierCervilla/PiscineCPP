# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 12:35:53 by jcervill          #+#    #+#              #
#    Updated: 2022/03/24 14:56:25 by jcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phook

SRCS = ClassContact.cpp main.cpp

CXX = clang++

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra --std=c++98

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)
	$(CXX) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

checker: all