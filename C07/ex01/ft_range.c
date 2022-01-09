/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:15:43 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/09 11:38:12 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int				index;
	int				*table;
	unsigned int	count;

	if (min >= max)
		return (NULL);
	count = max - min;
	table = malloc(sizeof(int) * count);
	index = 0;
	while (min < max)
	{
		table[index] = min;
		index++;
		min++;
	}
	return (table);
}
