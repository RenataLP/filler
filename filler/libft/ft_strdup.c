/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:16:22 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:47 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	int		i;

	if (!(s = ft_strnew(ft_strlen(src))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
