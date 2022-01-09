/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:59:20 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/14 10:56:30 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	g_lent;

int	str_len(char *str, int count)
{
	while (str[count] != '\0')
		count++;
	return (count);
}

int	words_count(char **strs, int index, int *total_lent)
{
	int	i;

	*total_lent = 0;
	while (strs[index])
	{
		i = 0;
		while (strs[index][i] != '\0')
			i++;
		*total_lent += i;
		index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	i;

	index = str_len(dest, 0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*table;
	int		index;
	int		lent;

	if (size == 0 || strs == 0 || sep == 0)
	{
		table = (char *)malloc(sizeof(char));
		table = 0;
		return (table);
	}
	if (size > words_count(strs, 0, &lent))
		size = words_count(strs, 0, &lent);
	g_lent = (lent + (str_len(sep, 0) * (size - 1)) + 1);
	table = (char *)malloc(sizeof(char) * g_lent);
	table[0] = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(table, strs[index]);
		if (index < (size - 1))
			ft_strcat(table, sep);
		index++;
	}
	return (table);
}
