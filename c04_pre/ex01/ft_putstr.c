/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:58:44 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/26 04:10:01 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putstr(char	*str)
{	
	int i;

	i = 0;
	while(*str != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
#include<stdio.h>
#include<stdlib.h>
int main (int argc, char** argv)
{
	char* string;
	string = (char* )malloc(100 * sizeof(char));
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
		printf("Enter 1 argument only.");
	return (0);
}	
