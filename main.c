/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:08:08 by juhur             #+#    #+#             */
/*   Updated: 2021/12/08 18:10:42 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int		ret;
	int		a = 1;
	char	*s = "I really hate C language";
	char	c = 'a';
	int		d = 12345;
	int		*p = &a;
	int		x = 12345678;

#if 0
	printf("-----%%p TEST!-----\n");
	ret = ft_printf("%p", p);
	printf("\nret: [%d]\n", ret);
	ret = printf("%p", p);
	printf("\nret: [%d]\n", ret);
	printf("\n");

	printf("-----%%d TEST!-----\n");
	ret = ft_printf("%d", d);
	printf("\nret: [%d]\n", ret);
	ret = printf("%d", d);
	printf("\nret: [%d]\n", ret);
	d = INT_MAX;
	printf("-----d = INT_MAX-----\n");
	ret = ft_printf("%d", d);
	printf("\nret: [%d]\n", ret);
	ret = printf("%d", d);
	printf("\nret: [%d]\nd", ret);
	d = INT_MIN;
	printf("-----d = INT_MIN-----\n");
	ret = ft_printf("%d", d);
	printf("\nret: [%d]\n", ret);
	ret = printf("%d", d);
	printf("\nret: [%d]\n", ret);
	printf("\n");

	printf("-----%%c TEST!-----\n");
	ret = ft_printf("%c", c);
	printf("\nret: [%d]\n", ret);
	ret = printf("%c", c);
	printf("\nret: [%d]\n", ret);
	printf("\n");

	printf("-----%%s TEST!-----\n");
	ret = ft_printf("%s", s);
	printf("\nret: [%d]\n", ret);
	ret = printf("%s", s);
	printf("\nret: [%d]\n", ret);
	printf("\n");

	printf("-----%%u TEST!-----\n");
	d = -42;
	ret = ft_printf("%u", d);
	printf("\nret: [%d]\n", ret);
	ret = printf("%u", d);
	printf("\nret: [%d]\n", ret);
	printf("\n");
#endif
	return 0;
}
