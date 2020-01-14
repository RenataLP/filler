/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:13:56 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:18 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
	int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	delim;
	size_t			i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	delim = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == delim)
			return ((void*)dst + i + 1);
		i++;
	}
	return (0);
}
