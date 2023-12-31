/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim <mrahim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:47:29 by mrahim            #+#    #+#             */
/*   Updated: 2023/09/24 14:47:30 by mrahim           ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include "rush_01.h"
#include <unistd.h>

void	printgrid(void)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			a = g_grid[i][j] + '0';
			write(1, &a, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
