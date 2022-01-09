/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mrab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:35:50 by yel-mrab          #+#    #+#             */
/*   Updated: 2021/09/29 16:20:47 by yel-mrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	lendest;
	unsigned int	index;
	unsigned int	index1;

	index1 = 0;
	len = ft_strlen(src);
	lendest = ft_strlen(dest);
	index = lendest;
	if (lendest >= size)
		return (len + size);
	while (src[index1] != '\0' && index < size - 1)
	{
		dest[index] = src[index1];
		index1++;
		index++;
	}
	dest[index] = '\0';
	return (len + lendest);
}
