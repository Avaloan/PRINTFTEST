/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 02:42:19 by fdidelot          #+#    #+#             */
/*   Updated: 2017/06/08 01:13:35 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"
#include <locale.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int ret1, ret2;
	char c = 0;
	setlocale(LC_ALL, "");
	wchar_t ee = 65478;
	ret1 = ft_printf("CCCC = %lc\n", ee);
	printf("NB CUR %d\n", ret1);
	printf("MB CUR MAX %d\n",MB_CUR_MAX);
	printf("salut %S kkkk\n",L"ԶԶԶ");
	//ret1 = ft_printf("% 04d\n", 654);
	//ret2 = printf("% 04d\n", 654);
	//printf("ft : %d || printf : %d", ret1, ret2);
	//ret2 = ft_printf("%sbabubububu%cytol\n", "salsalsiali", 0);
	//ft_printf("%.10d", -42);
	/*ret1 = ft_printf("1 % 03d\n", 0);
	ret2 = printf("2 % 03d\n", 0);
	ret1 = ft_printf("1 %#.O\n", 0);
	ret2 = printf("2 %#.O\n", 0);
	printf("ret1 = %d\nret2 = %d\n", ret1, ret2);
	*/
	/*
	printf("POP %.0p, %.p\n", 0, 0); //UNDIFINED
	ft_printf("OPO %.0p, %.p\n", 0, 0);

	printf("{%05.S}\n", L"42 c est cool");  //UNDIFINED
	ft_printf("{%05.S}\n", L"42 c est cool");

	printf("%#.3o\n", 1);
	ft_printf("%#.3o\n", 1);

	printf("{%05.Z}\n", 0);
	ft_printf("{%05.Z}\n", 0);
	
	printf("{%05.%}\n", 0); //UNDEFINED
	ft_printf("{%05.%}\n", 0);

	printf("{%05.s}\n", 0); //UNDIFINED
	ft_printf("{%05.s}\n", 0);

	printf("INT MIN %D\n", INT_MIN);
	printf("%#o\n", INT_MIN);
	ft_printf("%#o\n", INT_MIN);
	*/return (42);
}
