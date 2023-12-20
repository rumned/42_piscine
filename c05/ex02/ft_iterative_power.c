/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:47:28 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/06 02:58:52 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	while ((nb != 0) && (power != 0))
	{
		if (power < 0)
			return (0);
		while (power > 0)
		{
			nb = nb * nb;
			power--;
		}
		return (nb);
	}
	if ((nb == 0) && (power == 0))
		return (1);
	else if (power == 0)
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
	int nb = 9;
	int power = 0;
	int res = ft_iterative_power(nb, power);
	printf("%d raised to power %d is %d\n", nb, power, res);
}*/
