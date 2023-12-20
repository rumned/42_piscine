/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:44:09 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/06 03:14:31 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int main() 
{
	int res;
	int num;

	num = 3;
	res = ft_fibonacci(num);
	printf("The %dth Fibonacci term is: %d\n", num, res);
	return (0);
}*/
