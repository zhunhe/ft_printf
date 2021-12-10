/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:27:58 by juhur             #+#    #+#             */
/*   Updated: 2021/12/09 16:27:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(unsigned int x, char format)
{
	int		ret;
	char	*base;

	ret = 0;
	base = CHARSET_HEXA_LOWER;
	if (format == CHAR_HEXA_UPPER)
		base = CHARSET_HEXA_UPPER;
	ret += get_length(x, BASE_LEN_HEXA);
	print_number(x, base, BASE_LEN_HEXA);
	return (ret);
}

int	print_address(t_ull nbr)
{
	int		len;
	char	*prefix;

	len = 0;
	prefix = PREFIX_HEXA;
	len += print_string(prefix);
	len += get_length(nbr, BASE_LEN_HEXA);
	print_number(nbr, CHARSET_HEXA_LOWER, BASE_LEN_HEXA);
	return (len);
}
