/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:42:28 by juhur             #+#    #+#             */
/*   Updated: 2021/12/08 19:43:30 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int d)
{
	int			ret;
	long long	ll;

	ret = 0;
	ll = (long long)d;
	if (ll < 0)
	{
		ll = -ll;
		ret += print_char('-');
	}
	ret += get_nbr_len((unsigned long long)ll, 10);
	ft_putnbr_main((unsigned long long)ll, "0123456789", 10);
	return (ret);
}
