# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnari <cnari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 17:00:10 by cnari             #+#    #+#              #
#    Updated: 2021/09/08 17:03:33 by cnari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomeprog

SRC = source.c

all : $(NAME)

$(NAME) :
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

