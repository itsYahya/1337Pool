/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:22:00 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/14 16:11:55 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(char **p1, char **p2)
{
	char	*p;

	p = *p1;
	*p1 = *p2;
	*p2 = p;
}

int	str_cmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

int	str_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int	index;
	int	i;
	int	j;

	index = 0;
	i = 0;
	j = 0;
	while (tab[index])
	{
		i = index;
		j = index + 1;
		while (j < str_len(tab))
		{
			if (str_cmp(tab[i], tab[j]) > 0)
				i = j;
			j++;
		}
		ft_swap(&tab[index], &tab[i]);
		index++;
	}
}
