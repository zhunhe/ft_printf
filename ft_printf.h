/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:27:40 by juhur             #+#    #+#             */
/*   Updated: 2021/12/09 16:27:42 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define PREFIX_HEXA		"0x"
# define CHARSET_DECIMAL	"0123456789"
# define CHARSET_HEXA_UPPER	"0123456789ABCDEF"
# define CHARSET_HEXA_LOWER	"0123456789abcdef"

# define BASE_LEN_DECIMAL	10
# define BASE_LEN_HEXA		16

# define NULL_STRING		"(null)"

# define FORMAT_SPECIFIER	"cspdiuxX%"
# define CHAR_CHAR			'c'
# define CHAR_PERCENT		'%'
# define CHAR_STRING		's'
# define CHAR_DECIMAL		'd'
# define CHAR_INTEGER		'i'
# define CHAR_HEXA_LOWER	'x'
# define CHAR_HEXA_UPPER	'X'
# define CHAR_UNSIGNED		'u'
# define CHAR_PTR_ADDR		'p'
# define CHAR_MINUS			'-'

typedef unsigned long long	t_ull;

/*
** ft_printf.c
*/
int		ft_printf(const char *format, ...);
/*
** print_char.c
*/
int		print_char(int c);
int		print_string(char *s);
/*
** print_decimal.c
*/
int		print_int(int d);
int		print_uint(unsigned int u);
/*
** print_hexa.c
*/
int		print_hexa(unsigned int x, char format);
int		print_address(t_ull nbr);
/*
** print_number.c
*/
int		get_length(t_ull nbr, unsigned int base);
void	print_number(t_ull nbr, char *charset, unsigned int base);
#endif
