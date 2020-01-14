/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:14:32 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:23 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	mem;
	size_t			i;

	s = (unsigned char*)destination;
	mem = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*s = mem;
		s++;
		i++;
	}
	return (destination);
}
