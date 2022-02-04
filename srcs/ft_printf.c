/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:36:44 by maparigi          #+#    #+#             */
/*   Updated: 2022/02/03 04:05:21 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		total;
	int		i;

	va_start(args, str);
	total = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			total = total + ft_parse(str + i, args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			total++;
		}
	}
	va_end(args);
	return (total);
}

int	ft_parse(const char *str, va_list args)
{
	if (str[1] == 'c')
		return (ft_printc(args));
	else if (str[1] == 's')
		return (ft_prints(args));
	else if (str[1] == 'p')
		return (ft_printp(args));
	else if (str[1] == 'd')
		return (ft_printd(args));
	else if (str[1] == 'i')
		return (ft_printd(args));
	else if (str[1] == 'u')
		return (ft_printu(args));
	else if (str[1] == 'x')
		return (ft_printx(args));
	else if (str[1] == 'X')
		return (ft_printxup(args));
	else if (str[1] == '%')
		return (ft_printpercent());
	return (0);
}
