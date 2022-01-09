/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 06:54:24 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/03 14:22:29 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_puchar(int number)
{
	write(1, &number, 1);
}

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		ft_puchar('-');
		number = -number;
	}
	if (number < 10)
		ft_puchar(number + '0');
	else
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
