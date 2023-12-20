/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:05:53 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/03 11:45:12 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

/*#include <limits.h>
int main()
{
	ft_putnbr(INT_MAX);
	write(1,"\n",1);
	ft_putnbr(INT_MIN);
	write(1,"\n",1);
	ft_putnbr(737);
	write(1,"\n",1);
	ft_putnbr(-4444444);
	write(1,"\n",1);
	ft_putnbr(8);
	return(0);
}*/
