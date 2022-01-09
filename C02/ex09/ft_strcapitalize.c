/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 06:31:06 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/29 11:00:47 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ntlpha_nd_num(char c)
{
	if (c < 'A' || c > 'z' || (c < 'a' && c > 'Z'))
		if (c > '9' || c < '0')
			return (1);
	return (0);
}

int	ft_is_lower(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = '0';
	while (str[index] != '\0')
	{
		ch = str[index];
		if (index == 0 && ft_is_lower(ch))
			str[index] = ch - 32;
		else if (ntlpha_nd_num(ch) && str[index + 1] != '\0')
		{
			if (ft_is_lower(str[index + 1]))
				str[index + 1] = str[index + 1] - 32;
			if (ft_is_upper(str[index + 1]) || ft_is_lower(str[index + 1]))
				index++;
		}
		else if (ch >= 'A' && ch <= 'Z' && index != 0)
			str[index] = ch + 32;
		index++;
	}
	return (str);
}
