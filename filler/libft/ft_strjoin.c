/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:16:44 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:53 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_after;
	size_t	i;
	size_t	j;

	if (!s1 || !s2 || !(s_after = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		s_after[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s_after[i] = s2[j];
		i++;
		j++;
	}
	s_after[i] = '\0';
	return (s_after);
}
