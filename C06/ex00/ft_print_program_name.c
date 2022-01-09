/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:25:38 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/05 12:01:00 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	print_name(char *name, int nl)
{
	int	index;

	index = 0;
	while (name[index] != '\0')
	{
		write(1, &name[index], 1);
		index++;
	}
	write(1, &nl, 1);
}

int	main(int argc, char **argv)
{
	if (argc >= 1)
	{
		print_name(argv[0], 10);
	}
	return (0);
}
