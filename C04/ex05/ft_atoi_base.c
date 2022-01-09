/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:49:54 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/06 14:34:55 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	is_base(char *base, int len)
{
	int	index;
	int	i;
	int	c;

	index = 0;
	i = 0;
	if (len <= 1)
		return (0);
	while (base[index] != '\0')
	{
		c = base[index];
		if (c < 33 || c == 43 || c == 45)
			return (0);
		i = 0;
		while (i < index)
		{
			if (base[i] == base[index])
				return (0);
			i++;
		}
		index++;
	}
	return (1);
}

int	is_it_there(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	looper(char *str, char *base, int len, int index)
{
	int	pose;
	int	number;

	pose = 0;
	number = 0;
	while (str[index] != '\0')
	{
		pose = is_it_there(str[index], base);
		if (pose > -1)
			number = number * len + pose;
		else
			return (number);
		index++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	index;
	int	sign;
	int	number;

	len = str_len(base);
	index = 0;
	number = 0;
	sign = 1;
	if (is_base(base, len))
	{
		while (str[index] <= 32)
			index++;
		while (str[index] == 45 || str[index] == 43)
		{
			if (str[index] == 45)
				sign = -sign;
			index++;
		}
		number = looper(str, base, len, index);
	}
	return (number * sign);
}
