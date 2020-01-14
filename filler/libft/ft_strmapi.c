/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:17:07 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:58 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s,
	char (*f)(unsigned int, char))
{
	char			*str;
	char			*str_after;
	unsigned int	i;

	if (!s || !f)
		return ((char*)ft_memalloc(1));
	str = (char*)s;
	if (!(str_after = ft_strnew(ft_strlen(str))))
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		str_after[i] = f(i, str[i]);
		i++;
	}
	str_after[i] = '\0';
	return (str_after);
}
