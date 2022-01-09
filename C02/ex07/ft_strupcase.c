/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:05:47 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/29 07:43:46 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = '0';
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch <= 'z' && ch >= 'a')
			str[index] = ch - 32;
		index++;
	}
	return (str);
}
