/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:35:15 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/10/08 15:22:40 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print_memory(void *adress, unsigned int size)
{
	int	index;
	unsigned char p;
	unsigned char table;


	table = (unsigned char)adress;
	index = 0;
	if (size != 0)
	{
		while (index < size)
		{
			//write(1, &adress[index], 1);
			p = (table + index) & 0xf;
			printf("%p\n",&table[0]);
			//write(1, &p, 1);
			//table++;
			index++;
		}
	}
}

int	main(void)
{
	char *table = "hello thereajksajhsdkajsdakjsdhak";

	ft_print_memory(&table, 36);
}

