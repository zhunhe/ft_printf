/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:05:58 by juhur             #+#    #+#             */
/*   Updated: 2021/12/08 17:57:04 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_string(char *s)
{
	int	ret;

	if (s == NULL)
		s = "(null)";
	ret = 0;
	while (s[ret])
	{
		write(1, &s[ret], 1);
		ret++;
	}
	return (ret);
}

int	ft_printf_main(va_list ap, const char *format)
{
	int		ret;
	char	f;

	f = *format;
	ret = 0;
	if (f == 'c')
		ret = print_char(va_arg(ap, int));
	else if (f == '%')
		ret = print_char('%');
	else if (f == 's')
		ret = print_string(va_arg(ap, char *));
	else if (f == 'd' || f == 'i')
		ret = print_nbr(va_arg(ap, int), f);
	else if (f == 'x' || f == 'X')
		ret = print_nbr(va_arg(ap, long), f);
	else if (f == 'u')
		ret = print_nbr(va_arg(ap, unsigned int), f);
	else if (f == 'p')
		ret = print_nbr(va_arg(ap, unsigned long), f);
	return (ret);
}

/*
** printf -- formatted output conversion <stdio.h>
*/

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;

	ret = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			ret += ft_printf_main(ap, ++format);
		else
			ret += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (ret);
}
