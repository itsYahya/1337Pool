/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 08:22:41 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/02 18:39:22 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[index] != '\0')
	{
		i = 0;
		while (str[index + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (&str[index]);
		}
		index++;
	}
	return (0);
}
