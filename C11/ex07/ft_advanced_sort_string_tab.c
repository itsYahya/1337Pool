/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:03:16 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/14 19:19:17 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **p1, char **p2)
{
	char	*p;

	p = *p1;
	*p1 = *p2;
	*p2 = p;
}

int	str_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[j]) > 0)
				i = j;
			j++;
		}
		ft_swap(&tab[index], &tab[i]);
		index++;
	}
}
