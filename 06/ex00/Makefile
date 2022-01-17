# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smago <smago@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/11 23:25:52 by smago             #+#    #+#              #
#    Updated: 2021/03/13 16:26:39 by smago            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Convert.cpp

NAME = convert

all: 
	clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Convert.cpp -o $(NAME)

clean: 
	rm -f $(NAME)

test:
	./convert 0
	./convert nan
	./convert 42.0f
	./convert 42.0
	./convert nanf
	./convert +
	./convert - 
	./convert "*"
	./convert +inff
	./convert -inf
	./convert 123
	./convert -3545
