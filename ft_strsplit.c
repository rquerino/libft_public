/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:49:54 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/12 12:40:46 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int i;
	int fl_final;

	i = 0;
	fl_final = 1;
	while (*s)
	{
		if (*s != c && fl_final)
		{
			i++;
			fl_final = 0;
		}
		else if (*s == c)
			fl_final = 1;
		s++;
	}
	return (c);
}

static int	position_next_word(char const *s, int pos, char c)
{
	while (s[pos] == c)
		pos++;
	return (pos);
}

static int	word_length(char const *s, int pos, char c)
{
	int len;

	len = 0;
	while (s[pos + len] != c || s[pos + len] != '\0')
		len++;
	return (len);
}

static int	word(char **dst, char const *s, char c, int pos)
{
	int len;

	len = word_length(s, pos, c);
	*dst = ft_strsub(s, pos, len);
	return (pos + len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		pos;
	int		i;
	int		count;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	count = word_count(s, c);
	res = (char **)malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	while (i < count)
	{
		pos = position_next_word(s, pos, c);
		pos = word(&res[i], s, c, pos);
		i++;
	}
	res[i] = 0;
	return (res);
}
