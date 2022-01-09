/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:54:25 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/04 18:06:59 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print_args(char *arg, int nl)
{
	int	index;

	index = 0;
	while (arg[index] != '\0')
	{
		write(1, &arg[index], 1);
		index++;
	}
	write(1, &nl, 1);
}

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_print_args(argv[index], 10);
		index++;
	}
	return (0);
}
