/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:30:45 by juhur             #+#    #+#             */
/*   Updated: 2021/12/08 16:30:49 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_length(t_ull nbr, unsigned int base)
{
	int	len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	return (len);
}

void	print_number(t_ull nbr, char *charset, unsigned int base)
{
	if (nbr >= base)
		print_number(nbr / base, charset, base);
	print_char(charset[nbr % base]);
}
