/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:38:41 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/13 19:21:27 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		g_step;
int		g_index;
int		g_i;
char	*g_table;
char	**g_result;

int	ft_is_sep(char *sep, char c)
{
	int	index;

	index = 0;
	while (sep[index] != '\0')
	{
		if (sep[index] == c)
			return (1);
		index++;
	}
	return (0);
}

int	count_strs(char *str, char *sep, int index, int *max)
{
	int	count;
	int	len;

	count = 0;
	len = 0;
	while (str[index] != '\0')
	{
		if (ft_is_sep(sep, str[index]))
		{
			if (*max < len)
				*max = len;
			count++;
			len = 0;
		}
		index++;
		len++;
	}
	if (*max < len)
		*max = len;
	return (++count);
}

char	*str_cpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	**looper(char *str, char *sep)
{
	while (str[g_index] != '\0')
	{
		if (ft_is_sep(sep, str[g_index]) && g_i)
		{
			g_table[g_i] = '\0';
			g_result[g_step] = (char *)malloc(sizeof(char) * (g_i + 1));
			str_cpy(g_result[g_step++], g_table);
			g_i = 0;
			g_index++;
		}
		else if (!ft_is_sep(sep, str[g_index]))
			g_table[g_i++] = str[g_index++];
		else
			g_index++;
	}
	if (g_i)
	{
		g_table[g_i] = '\0';
		g_result[g_step] = (char *)malloc(sizeof(char) * (g_i + 1));
		str_cpy(g_result[g_step++], g_table);
	}
	g_result[g_step] = 0;
	return (g_result);
}

char	**ft_split(char *str, char *charset)
{
	int		max;
	int		count;
	char	**table;

	if (str == 0)
		return (0);
	max = 0;
	count = count_strs(str, charset, 0, &max);
	g_step = 0;
	g_index = 0;
	g_i = 0;
	g_table = (char *)malloc(sizeof(char) * (max + 1));
	g_result = (char **)malloc(sizeof(char *) * (count + 1));
	table = looper(str, charset);
	return (table);
}
