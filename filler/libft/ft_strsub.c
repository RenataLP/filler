/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:17:50 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:20:08 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start,
size_t len)
{
	char			*str;
	char			*str_after;
	size_t			i;

	if (!s)
		return (0);
	str = (char*)s;
	if (!(str_after = ft_strnew(len)))
		return (0);
	i = 0;
	while (i < len)
	{
		str_after[i] = str[start];
		i++;
		start++;
	}
	str_after[i] = '\0';
	return (str_after);
}
