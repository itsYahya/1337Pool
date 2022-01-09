/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:46:53 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/02 08:19:39 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	putchar(int c)
{
	write(1, &c, 1);
}

void	print_it(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	putchar('\\');
	putchar(hex[c / 16]);
	putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;
	int	ch;

	index = 0;
	while (str[index] != '\0')
	{
		ch = str[index];
		if (ch < 32 || ch > 126)
			print_it(ch);
		else
			write(1, &ch, 1);
		index++;
	}
}
