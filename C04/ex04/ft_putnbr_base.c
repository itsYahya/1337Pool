/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:19:52 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/06 09:53:59 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	is_base(char *base, int len)
{
	int	index;
	int	ch;
	int	i;

	index = 0;
	if (len <= 1)
		return (0);
	while (base[index] != '\0')
	{
		ch = base[index];
		if (ch == 43 || ch == 45)
			return (0);
		i = 0;
		while (i < index)
		{
			if (base[i] == ch)
				return (0);
			i++;
		}
		index++;
	}
	return (1);
}

void	print_it(long nbr, int len, char *base)
{
	if (nbr >= len)
	{
		print_it(nbr / len, len, base);
		write(1, &base[nbr % len], 1);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		t;
	long	number;

	t = 45;
	len = str_len(base);
	if (is_base(base, len))
	{
		if (nbr < 0)
		{
			number = nbr;
			write(1, &t, 1);
			print_it(-number, len, base);
		}
		else
			print_it(nbr, len, base);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-255, "01");
	return (0);
}*/
