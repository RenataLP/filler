/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:12:04 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:10 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_if_0(void)
{
	char	*str;

	if (!(str = (char *)malloc(2)))
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static char	*ft_itoa_part_2(int size, unsigned int i, int is_neg)
{
	char *s;

	if (!(s = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	s[size--] = '\0';
	while (i > 0)
	{
		s[size--] = i % 10 + '0';
		i /= 10;
	}
	if (is_neg)
		s[size] = '-';
	return (s);
}

char		*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	i_copy;
	int				size;
	int				is_neg;

	if (!n)
		return (ft_itoa_if_0());
	size = 0;
	is_neg = 0;
	if (n < 0)
	{
		size++;
		i = n * (-1);
		is_neg = 1;
	}
	else
		i = n;
	i_copy = i;
	while (i_copy > 0)
	{
		i_copy /= 10;
		size++;
	}
	return (ft_itoa_part_2(size, i, is_neg));
}
