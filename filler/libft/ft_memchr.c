/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:14:02 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:18 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	mem;
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*)s;
	mem = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == mem)
			return ((void*)(str + i));
		i++;
	}
	return (0);
}
