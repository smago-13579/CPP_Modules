# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smago <smago@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 16:44:00 by smago             #+#    #+#              #
#    Updated: 2021/02/06 13:00:46 by smago            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = phonebook.cpp book.cpp prompt.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $@

%.o : %.cpp
	clang++ -c $(FLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all 
