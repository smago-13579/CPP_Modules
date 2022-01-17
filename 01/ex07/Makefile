# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smago <smago@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 12:27:38 by smago             #+#    #+#              #
#    Updated: 2021/02/12 16:12:49 by smago            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

OBJDIR = obj/

OBJ = $(SRCS:%.cpp=$(OBJDIR)%.o)

FLAGS = -Wall -Wextra -Werror

NAME = replace 

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ) 
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o : %.cpp
	clang++ -c $(FLAGS) $< -o $@

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	rm -rf $(OBJDIR)
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all 

test: $(NAME)
	./replace word train bus
	./replace 123 Can Should

