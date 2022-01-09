/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 06:45:32 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/26 17:36:33 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_dig(int dig)
{
	write(1, &dig, 1);
}

void	ft_putnbr(int nb)
{
	
	long	nom;

	if (nb < 0)
	{
		print_dig('-');
		nom = -nb;
	}
	else
		nom = nb;
	if (nom >= 10)
	{
		ft_putnbr(nom / 10);
		ft_putnbr(nom % 10 + '0');
	}
	else
		ft_putnbr(nom + '0');
}
