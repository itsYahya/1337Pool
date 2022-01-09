/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:11:09 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/05 08:46:20 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;
	int	sqrt;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	index = 1;
	sqrt = 0;
	while (index < 46341)
	{
		sqrt = index * index;
		if (sqrt == nb)
			return (index);
		index++;
	}
	return (0);
}
