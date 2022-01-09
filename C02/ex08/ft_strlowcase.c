/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:24:21 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/29 07:44:08 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = 0;
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch >= 'A' && ch <= 'Z')
			str[index] = ch + 32;
		index++;
	}
	return (str);
}
