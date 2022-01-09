/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:36:44 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/27 18:53:35 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	ch;

	index = 0;
	ch = '0';
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch < 'A' || ch > 'Z')
			return (0);
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d",ft_str_is_uppercase(""));
	return 0;
}*/
