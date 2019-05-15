/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rquerino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 11:23:48 by rquerino          #+#    #+#             */
/*   Updated: 2019/05/10 11:25:57 by rquerino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** Adds the element new at the begining of the list.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *a;

	if (!alst)
		return ;
	a = *alst;
	*alst = new;
	(*alst)->next = a;
}
