/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maneddam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:53:49 by maneddam          #+#    #+#             */
/*   Updated: 2023/03/11 16:15:52 by maneddam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, char *base)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= (long)ft_strlen(base))
	{
		i += ft_putnbr(n / ft_strlen(base), base);
		i += ft_putnbr(n % ft_strlen(base), base);
	}
	else
	{
		i += ft_putchar((base[n]));
	}
	return (i);
}
