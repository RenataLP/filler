/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:14:27 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:22 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dst == src)
		return (dst);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (s < d && d < s + len)
	{
		i = len - 1;
		while (i != 0)
		{
			d[i] = s[i];
			i--;
		}
		d[i] = s[i];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
