/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:07:30 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/26 17:21:32 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print_comb(int aa, int bb, int cc, int comma)
{
	write(1, &aa, 1);
	write(1, &bb, 1);
	write(1, &cc, 1);
	if (aa < 55)
	{
		write(1, &comma, 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				print_comb(a, b, c, 44);
				c++;
			}
			b++;
		}
		a++;
	}
}
