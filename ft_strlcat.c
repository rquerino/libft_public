/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:54:38 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/12 13:09:18 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;
	int		j;

	i = ft_strlen(dst);
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	j = 0;
	if (dst_size + 1 > n)
		return (n + src_size);
	if (dst_size < n)
	{
		while (i < n - 1)
		{
			*(dst + i) = *(src + j);
			i++;
			j++;
		}
		*(dst + i) = '\0';
	}
	return (dst_size + src_size);
}
