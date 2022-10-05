# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javier <javier@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 12:35:53 by jcervill          #+#    #+#              #
#    Updated: 2022/10/05 11:54:21 by javier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRCS = main.cpp AnimalClass.cpp DogClass.cpp CatClass.cpp WrongAnimal.cpp WrongCat.cpp

CXX = clang++

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra --std=c++98 -Wshadow  -Wno-shadow

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
.PHONY:	all clean fclean re test