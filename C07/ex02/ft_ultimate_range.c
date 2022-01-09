/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:46:34 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/09 11:57:06 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				*table;
	int				index;
	unsigned int	size;

	index = 0;
	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
	{
		table = (int *)malloc(sizeof(int) * size);
		while (min < max)
		{
			table[index] = min;
			min++;
			index++;
		}
		*range = table;
	}
	return (size);
}
