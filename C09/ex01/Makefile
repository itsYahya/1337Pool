# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 14:11:43 by yel-mrab          #+#    #+#              #
#    Updated: 2021/10/13 19:23:32 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ = $(SRC:.c=.o)
NAME = libft.a
FLAG = -Wall -Wextra -Werror
INC = -I includes

all: libft.a

libft.a: $(OBJ) 
	ar cr $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAG) -c $<  -o $@ $(INC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHOMY: re clean fclean all libft.a
