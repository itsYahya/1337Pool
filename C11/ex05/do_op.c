/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:26:10 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/14 19:18:02 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "functions.h"

int	is_operator(char *op)
{
	int		index;
	char	c;

	index = 0;
	while (op[index])
		index++;
	if (index != 1)
		return (0);
	c = op[0];
	if (c == '/' || c == '+'
		|| c == '-' || c == '*' || c == '%')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	index;
	int	number;
	int	sign;

	index = 0;
	number = 0;
	sign = 1;
	while (str[index] <= 32)
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -sign;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	return (number);
}

int	(*getoperator(char op))(int a, int b)
{
	if (op == '+')
		return (&ft_plus);
	else if (op == '-')
		return (&ft_min);
	else if (op == '*')
		return (&ft_mult);
	else if (op == '/')
		return (&ft_div);
	else if (op == '%')
		return (&ft_mod);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	(*operator)(int, int);

	if (argc == 4)
	{
		if (is_operator(argv[2]))
		{
			operator = getoperator(argv[2][0]);
			if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
				put_str("Stop : division by zero\n");
			else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
				put_str("Stop : modulo by zero\n");
			else
				printf("%d", operator(ft_atoi(argv[1]), ft_atoi(argv[3])));
		}
	}
	return (0);
}
