/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:17:33 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/11 16:09:22 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	initial_spaces(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static int	final_spaces(char const *s)
{
	int j;

	j = ft_strlen(s);
	if (j == 0)
		return (0);
	while (j > 0 && (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t'))
		j--;
	return (j);
}

char		*ft_strtrim(char const *s)
{
	int i;
	int j;

	if (!s)
		return (NULL);
	i = initial_spaces(s);
	j = final_spaces(s) - i;
	if (j <= 0)
		return (ft_strnew(0));
	return (ft_strsub(s, i, j));
}
