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

int	get_nbr_len(unsigned long long nbr, int base_len)
{
	int	nbr_len;

	if (nbr == 0)
		return (1);
	nbr_len = 0;
	while (nbr)
	{
		nbr /= base_len;
		nbr_len++;
	}
	return (nbr_len);
}

void	ft_putnbr_main(long long nbr, char *base, int number)
{
	if (nbr >= number)
		ft_putnbr_main(nbr / number, base, number);
	print_char(base[nbr % number]);
}

char	*get_charset(char format, int *base)
{
	if (format == 'd' || format == 'i' || format == 'u')
	{
		*base = 10;
		return ("0123456789");
	}
	else if (format == 'x' || format == 'p')
	{
		*base = 16;
		return ("0123456789abcdef");
	}
	else if (format == 'X')
	{
		*base = 16;
		return ("0123456789ABCDEF");
	}
	*base = 0;
	return (0);
}

int	print_nbr(long long nbr, char format)
{
	int		ret;
	int		base;
	char	*prefix;
	char	*charset;

	ret = 0;
	if (format == 'p')
	{
		prefix = "0x";
		ret += print_string(prefix);
	}
	if (nbr < 0)
	{
		ret += print_char('-');
		nbr = -nbr;
	}
	charset = get_charset(format, &base);
	ret += get_nbr_len(nbr, base);
	ft_putnbr_main(nbr, charset, base);
	return (ret);
}
