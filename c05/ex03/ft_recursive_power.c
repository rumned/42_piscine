/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:24:07 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/06 03:52:06 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if ((nb == 0) && (power == 0))
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main() 
{
    int nb = 2;
    int power = 7;
    int result = ft_recursive_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);
    return (0);
}*/
