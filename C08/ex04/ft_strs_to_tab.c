/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:31:52 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/11 12:14:21 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*str_dup(char *src)
{
	int		index;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (str_len(src) + 1));
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

t_stock_str	ft_fill_in(char *str)
{
	struct s_stock_str	struc;

	struc.str = str_dup(str);
	struc.copy = str_dup(str);
	struc.size = str_len(str);
	return (struc);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*table;
	int					i;

	table = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (table == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
		table[i] = ft_fill_in(av[i]);
	table[i].str = 0;
	return (table);
}
