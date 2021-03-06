/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <bkristle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:15:01 by bkristle          #+#    #+#             */
/*   Updated: 2020/01/13 17:19:28 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int i;
	unsigned int n2;

	i = 1;
	n2 = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = n * -1;
	}
	else
		n2 = n;
	while (n2 / i / 10 > 0)
		i *= 10;
	while (i > 0)
	{
		ft_putchar_fd(n2 / i + '0', fd);
		n2 = n2 % i;
		i = i / 10;
	}
}
