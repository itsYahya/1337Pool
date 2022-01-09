/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:42:10 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/26 13:57:45 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *i, int *j)
{
	int	swap;

	swap = *i;
	*i = *j;
	*j = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	mod;
	int	i;
	int	j;

	mod = size % 2;
	i = 0;
	j = size - 1;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[j]);
		if (mod == 0 && j == i + 1)
			i = size;
		else if (mod == 1 && i == j)
			i = size;
		else
		{
			i++;
			j--;
		}
	}
}
