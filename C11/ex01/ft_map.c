/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:32:08 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/14 14:36:24 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*result;

	index = 0;
	result = (int *)malloc(sizeof(int) * (length + 1));
	while (index < length)
	{
		result[index] = (*f)(tab[index]);
		index++;
	}
	return (result);
}
