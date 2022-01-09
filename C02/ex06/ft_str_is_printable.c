/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:54:04 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/27 19:04:09 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = '0';
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch < 32)
			return (0);
		index++;
	}
	return (1);
}
