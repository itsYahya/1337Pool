/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:02:12 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/26 17:30:20 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printcomb(int i, int j, int k, int l)
{
	int	comma;

	comma = 44;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (i != 57 || j != 56)
	{
		write(1, &comma, 1);
		write(1, " ", 1);
	}
}

void	looper(int x, int y, int xx, int yy)
{
	while (xx < 58)
	{
		while (yy < 58)
		{
			printcomb(x, y, xx, yy);
			yy++;
		}
		yy = 48;
		xx++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	aa;
	int	bb;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			aa = a;
			bb = b + 1;
			looper(a, b, aa, bb);
			b++;
		}
		a++;
	}
}
