/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:51:11 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/14 14:44:58 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_number_length(int n)
{
	int len;

	len = 1;
	if (n < 0)
		len++;
	while ((n /= 10))
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		neg;

	neg = (n < 0) ? 1 : 0;
	size = ft_number_length(n);
	str = (char*)malloc(sizeof(char) * size);
	if (str)
	{
		str[size] = '\0';
		size--;
		while (size >= neg)
		{
			str[size] = n % 10 + '0';
			n /= 10;
			size--;
		}
		if (neg)
			str[0] = '-';
	}
	return (str);
}
