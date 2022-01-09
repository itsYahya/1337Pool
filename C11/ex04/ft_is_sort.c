/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:55:08 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/15 07:27:12 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	g_index;
int	g_index2;
int	g_test1;
int	g_test2;

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	g_index = 0;
	g_index2 = 1;
	g_test1 = 1;
	g_test2 = 1;
	while (g_index2 < length)
	{
		if ((*f)(tab[g_index], tab[g_index2]) > 0)
			g_test1 = 0;
		g_index++;
		g_index2++;
	}
	g_index = 0;
	g_index2 = 1;
	while (g_index2 < length)
	{
		if ((*f)(tab[g_index], tab[g_index2]) < 0)
			g_test2 = 0;
		g_index++;
		g_index2++;
	}
	return (g_test1 || g_test2);
}
