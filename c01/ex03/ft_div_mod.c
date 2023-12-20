/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <mobin-mu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:45:34 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/19 16:50:14 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>
int  main()
{
	int a;
	int b;
	int *pDiv;
	int *pMod;
	int div;
	int mod;

	a = 11;
	b = 2;
	pDiv = &div;
	pMod = &mod;

	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	ft_div_mod(a,b,pDiv,pMod);
	printf("Division result is %d\n",div);
	printf("Division result is %d\n",mod);
	return(0);
}
*/
