/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:17:33 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:20:03 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_equal_n(char *s1, char *s2, size_t i_now, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && s1[i] && i + i_now < n)
		i++;
	if (s2[i] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == *needle && ft_is_equal_n((char*)haystack + i,
				(char*)needle, i, len))
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
