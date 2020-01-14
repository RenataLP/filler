/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:13:49 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:17 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*s;
	unsigned char	*ps;
	size_t			i;

	s = (void*)malloc(size);
	if (!s)
		return (0);
	ps = (unsigned char*)s;
	i = 0;
	while (i < size)
	{
		ps[i] = 0;
		i++;
	}
	return (s);
}
