/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:50:07 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/05 14:47:42 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

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
	int	i;
	int	j;

	index = 1;
	i = 0;
	j = 0;
	while (index < argc)
	{
		i = index;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				i = j;
			j++;
		}
		swap(&argv[index], &argv[i]);
		index++;
	}
	index = 0;
	while (++index < argc)
		ft_print_args(argv[index], 10);
	return (0);
}
