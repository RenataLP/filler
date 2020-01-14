/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:17:37 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:20:04 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	value;
	char	*str;
	char	*return_ptr;

	value = (char)c;
	str = (char*)s;
	return_ptr = 0;
	while (*str != '\0')
	{
		if (*str == value)
			return_ptr = str;
		str++;
	}
	if (*str == value)
		return_ptr = str;
	return (return_ptr);
}
