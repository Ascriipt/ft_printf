/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparigi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:04:54 by maparigi          #+#    #+#             */
/*   Updated: 2022/02/03 05:26:14 by maparigi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>

int			ft_parse(const char *str, va_list args);
int			ft_putstr(const char *str, int len);
int			ft_printf(const char *str, ...);
int			ft_strlen(const char *str);
int			ft_printxup(va_list args);
int			ft_printd(va_list args);
int			ft_printp(va_list args);
int			ft_printu(va_list args);
int			ft_printc(va_list args);
int			ft_prints(va_list args);
int			ft_printx(va_list args);
int			ft_printpercent(void);
int			ft_putchar(char c);

size_t		ft_getlen_unsigned(size_t nb, int base);
size_t		ft_getlen(long long int nb, int base);

void		ft_putnbr_base_unsigned(size_t nb, int len, char *str);
void		ft_putnbr_base(int nb, int len, char *str);
void		ft_putnbr(int nb);

#endif
