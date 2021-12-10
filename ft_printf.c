/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:27:21 by juhur             #+#    #+#             */
/*   Updated: 2021/12/09 16:27:28 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdbool.h>
#include "ft_printf.h"

static int	process_format_specifier(va_list ap, const char *format)
{
	int		len;

	len = 0;
	if (*format == CHAR_CHAR)
		len = print_char(va_arg(ap, int));
	else if (*format == CHAR_PERCENT)
		len = print_char(CHAR_PERCENT);
	else if (*format == CHAR_STRING)
		len = print_string(va_arg(ap, char *));
	else if (*format == CHAR_DECIMAL || *format == CHAR_INTEGER)
		len = print_int(va_arg(ap, int));
	else if (*format == CHAR_HEXA_LOWER || *format == CHAR_HEXA_UPPER)
		len = print_hexa(va_arg(ap, unsigned int), *format);
	else if (*format == CHAR_UNSIGNED)
		len = print_uint(va_arg(ap, unsigned int));
	else if (*format == CHAR_PTR_ADDR)
		len = print_address(va_arg(ap, t_ull));
	return (len);
}

static bool	is_format_specifier(const char format)
{
	char	*format_specifier;

	format_specifier = FORMAT_SPECIFIER;
	while (*format_specifier)
	{
		if (*format_specifier == format)
			return (true);
		format_specifier++;
	}
	return (false);
}

/*
** printf -- formatted output conversion <stdio.h>
*/

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == CHAR_PERCENT)
		{
			if (is_format_specifier(*(format + 1)))
				len += process_format_specifier(ap, ++format);
		}
		else
			len += print_char(*format);
		format++;
	}
	va_end(ap);
	return (len);
}
