/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:24:39 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/14 15:07:06 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (*(ptr + i) == c2)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
