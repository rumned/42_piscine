/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <mobin-mu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:42:14 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/19 16:49:38 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
/*
#include<stdio.h>
int main ()
{
	int a;
	int b;

	a = 40;
	b = 2;
	printf("Int a : %d, int b: %d\n",a,b);
	ft_swap(&a,&b);
	printf("After ft_swap, a: %d, b: %d",a,b);
	return(0);
}*/
