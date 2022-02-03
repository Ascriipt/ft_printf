/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:36:34 by maparigi          #+#    #+#             */
/*   Updated: 2022/02/03 05:28:47 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_getlen(long long int nb, int len)
{
	if (nb < 0)
		return (ft_getlen(nb * -1, len) + 1);
	if (nb > (len - 1))
		return (ft_getlen(nb / len, len) + 1);
	return (1);
}

size_t	ft_getlen_unsigned(size_t nb, int len)
{
	if (nb > (size_t)(len - 1))
		return (ft_getlen_unsigned((nb / len), len) + 1);
	return (1);
}
