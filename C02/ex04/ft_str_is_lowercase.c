/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:21:42 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/27 18:36:07 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = '0';
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch < 'a' || ch > 'z')
			return (0);
		index++;
	}
	return (1);
}
