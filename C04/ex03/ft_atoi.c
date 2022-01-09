/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:30:40 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/06 11:28:29 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(int ch)
{
	if (ch == ' ' || ch == '\t'
		|| ch == '\n' || ch == '\v'
		|| ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	is_number(unsigned char ch)
{
	if (ch >= 48 && ch <= 57)
		return (1);
	return (0);
}

int	looper(char *table, int index, int number, int sign)
{
	while (table[index] != '\0')
	{
		while (is_space(table[index]))
			index++;
		while (table[index] == 43 || table[index] == 45)
		{
			if (table[index] == 45)
				sign = -sign;
			index++;
		}
		while (is_number(table[index]))
		{
			number = number * 10 + (table[index] - 48);
			index++;
		}
		return (number * sign);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	number;

	number = looper(str, 0, 0, 1);
	return (number);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("     \n--++---+56482279h788744411p54"));
}*/
