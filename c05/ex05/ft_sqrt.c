/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 03:21:37 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/06 03:49:09 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	rc;
	long	n;

	rc = 1;
	n = nb;
	while (rc * rc <= nb)
	{
		if (rc * rc == nb)
			return (rc);
		rc++;
	}
	return (0);
}
/*#include<stdio.h>
int	main(void)
{
	long n;
	long res;
	
	n = 100000000;
	res = ft_sqrt(n);
	if (res > 0)
		printf("Square root of %ld is %ld\n", n, res);
	else
		printf("%ld is an irrational number.\n", n);
	return (0);
}*/
