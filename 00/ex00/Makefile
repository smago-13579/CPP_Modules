# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smago <smago@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 16:44:00 by smago             #+#    #+#              #
#    Updated: 2021/02/04 12:04:02 by smago            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

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

test: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone
	./megaphone "hello WoRld !!!" " ;;great;;"