/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:24:26 by maparigi          #+#    #+#             */
/*   Updated: 2022/02/03 03:54:27 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base(int nbr, int len, char *str)
{
	long int	nb;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, len, str);
		write(1, &str[nb % len], 1);
	}
	else
		write(1, &str[nb], 1);
}

void	ft_putnbr_base_unsigned(size_t nbr, int len, char *str)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)nbr;
	if (nb >= (unsigned long long int)len)
		ft_putnbr_base_unsigned(nb / len, len, str);
	write(1, &str[nb % len], 1);
}
