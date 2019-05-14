/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:51:11 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/14 14:54:14 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_length(int n)
{
	size_t		len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			size;
	unsigned int	n_cpy;

	size = ft_number_length(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		size++;
	}
	if (!(str = ft_strnew(size)))
		return (NULL);
	str[size] = n_cpy % 10 + '0';
	size--;
	while (n_cpy /= 10)
	{
		str[size] = n_cpy % 10 + '0';
		size--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
