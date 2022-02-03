/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:22:12 by maparigi          #+#    #+#             */
/*   Updated: 2022/02/03 03:51:46 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printp(va_list args)
{
	size_t	nb;

	nb = va_arg(args, size_t);
	if (nb == 0)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	ft_putnbr_base_unsigned(nb, 16, "0123456789abcdef");
	return (ft_getlen_unsigned(nb, 16) + 2);
}
