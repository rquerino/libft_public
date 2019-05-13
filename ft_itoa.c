/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:51:11 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/10 09:42:08 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(int n)
{
	int		i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		copy;

	size = number_size(n);
	copy = n;
	if (n < 0)
	{
		copy = -n;
		size++;
	}
	if (!(str = ft_strnew(size)))
		return (NULL);
	str[--size] = copy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
