/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:29:24 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/06 02:35:51 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factor;
	int	num;

	factor = 1;
	num = nb;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		while (factor < num)
		{
			nb *= factor;
			factor++;
		}
		return (nb);
	}
	return (0);
}
/*#include<stdio.h>
int main ()
{
	int res;
	res = ft_iterative_factorial(-42);
	printf("Factorial is %d\n", res);
	return (0);
}
*/
