/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:34:02 by jetan             #+#    #+#             */
/*   Updated: 2023/09/17 16:11:56 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	head(int x)
{
	int	n;

	n = 1;
	while (n < x)
	{
		if (n != 1)
		{
			ft_putchar('-');
		}
		else
			ft_putchar('o');
			n++;
	}
	if (n == x)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	body(int x)
{
	int	n;

	n = 1;
	while (n < x)
	{
		if (n != 1)
		{
			ft_putchar(' ');
		}
		else
			ft_putchar('|');
		n++;
	}
	if (n == x)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	n;

	if (x <= 0 && y <= 0)
	{
		return ;
	}
	n = 1;
	while (n < y)
	{
		if (n != 1)
		{
			body(x);
		}
		else
			head(x);
		n++;
	}
	if (n == y)
	{
		head(x);
	}
}
