# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 18:50:05 by yel-mrab          #+#    #+#              #
#    Updated: 2021/10/15 06:48:35 by yel-mrab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GWC= -Wall -Wextra -Werror

all: do-op

do-op: do_op.o functions.o ft_putnbr.o 
	gcc ${GWC} do_op.o functions.o ft_putnbr.o -o do-op

do_op.o: do_op.c
	gcc -c do_op.c -o do_op.o

functions.o: functions.c
	gcc -c functions.c -o functions.o

ft_putnbr.o: ft_putnbr.c
	gcc -c ft_putnbr.c -o ft_putnbr.o

clean:
	rm -rf *.o do-op

fclean: clean

.PHONY: clean

