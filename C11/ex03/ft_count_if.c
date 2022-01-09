/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:44:13 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/14 15:17:15 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (index < length)
	{
		if ((*f)(tab[index]) != 0)
			count++;
		index++;
	}
	return (count);
}
