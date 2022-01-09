/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:14:53 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/27 18:02:16 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = 'z';
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch < 'A' || ch > 'z' || (ch > 'Z' && ch < 'a'))
			return (0);
		index++;
	}
	return (1);
}