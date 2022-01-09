/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:21:07 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/11 16:56:49 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_nbr(int number)
{
	int	mod;

	mod = number % 10 + 48;
	if (number >= 10)
	{
		put_nbr(number / 10);
		write(1, &mod, 1);
	}
	else
	{
		number += 48;
		write(1, &number, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;
	int	i;

	index = 0;
	while (par[index].str != 0)
	{
		i = -1;
		while (par[index].str[++i] != '\0')
			write(1, &par[index].str[i], 1);
		write(1, "\n", 1);
		put_nbr(par[index].size);
		write(1, "\n", 1);
		i = -1;
		while (par[index].copy[++i] != '\0')
			write(1, &par[index].copy[i], 1);
		write(1, "\n", 1);
		index++;
	}
}
