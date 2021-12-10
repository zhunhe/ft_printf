/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:42:28 by juhur             #+#    #+#             */
/*   Updated: 2021/12/09 15:58:44 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int d)
{
	int			len;
	long long	ll;

	len = 0;
	ll = (long long)d;
	if (ll < 0)
	{
		ll = -ll;
		len += print_char(CHAR_MINUS);
	}
	len += get_length(ll, BASE_LEN_DECIMAL);
	print_number(ll, CHARSET_DECIMAL, BASE_LEN_DECIMAL);
	return (len);
}

int	print_uint(unsigned int u)
{
	int	len;

	len = 0;
	len += get_length(u, BASE_LEN_DECIMAL);
	print_number(u, CHARSET_DECIMAL, BASE_LEN_DECIMAL);
	return (len);
}
