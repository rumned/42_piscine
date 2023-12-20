/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <mobin-mu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:09:05 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/19 16:50:54 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *a / *b ;
	*b = holder % *b ;
}
/*
#include<stdio.h>
int main()
{
	int a;
	int b;
	int *pA;
	int *pB;
	
	a = 11;
	b = 2;
	pA = &a;
	pB = &b;

	printf("Value of a: %d\n",a);
	printf("Value of b: %d\n",b);
	ft_ultimate_div_mod(pA,pB);
	printf("Division result: %d\n",a);
	printf("Remainder: %d\n",b);
	return(0);
}*/
