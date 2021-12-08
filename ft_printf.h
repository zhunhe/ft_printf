/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:01:41 by juhur             #+#    #+#             */
/*   Updated: 2021/12/08 19:44:15 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*
** ft_printf.c
*/
int		ft_printf(const char *format, ...);
int		print_char(int c);
int		print_string(char *s);
/*
** print_nbr.c
*/
int		print_nbr(long long nbr, char format);
int		get_nbr_len(unsigned long long nbr, int base_len);
void	ft_putnbr_main(long long nbr, char *base, int number);
/*
** print_int.c
*/
int		print_int(int d);
#endif
