# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcervill <jcervill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 12:35:53 by jcervill          #+#    #+#              #
#    Updated: 2022/04/12 12:42:32 by jcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
SRCS = main.cpp FixedClass.cpp

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

test: all
	./$(NAME)
	make fclean
.PHONY:	all clean fclean re test