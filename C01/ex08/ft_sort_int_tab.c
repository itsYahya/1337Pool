/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:25:30 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/26 16:12:19 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[index] > tab[j])
			{
				index = j;
			}
			j++;
		}
		ft_swap(&tab[i], &tab[index]);
		i++;
	}
}
