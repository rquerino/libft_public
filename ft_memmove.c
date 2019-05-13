/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:13:25 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/12 12:12:44 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	ptr = (char *)dst;
	ptr2 = (char *)src;
	i = 0;
	if (ptr > ptr2)
	{
		while (len--)
			*(ptr + len) = *(ptr2 + len);
	}
	else
	{
		while (i < len)
		{
			*(ptr + i) = *(ptr2 + i);
			i++;
		}
	}
	return (dst);
}