/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <mobin-mu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:52 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/14 21:34:54 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	int	z;

	if (n < 0)
	{
		z = 78;
	}	
	else
	{
		z = 80;
	}
	write(1, &z, 1);
}

int	main(void)
{
	ft_is_negative(NULL);
	return(0);
}
