/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:15:56 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:36 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	value;
	char	*str;

	value = (char)c;
	str = (char*)s;
	while (*str != '\0')
	{
		if (*str == value)
			return (str);
		str++;
	}
	if (*str == value)
		return (str);
	return (0);
}
