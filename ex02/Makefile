# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aobshatk <aobshatk@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/24 14:26:44 by aobshatk          #+#    #+#              #
#    Updated: 2025/06/24 14:34:42 by aobshatk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = fixed

$(NAME):
	$(CC) $(CFLAGS) Fixed.cpp main.cpp -o $(NAME)

all: $(NAME)
clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re
