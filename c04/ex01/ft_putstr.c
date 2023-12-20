/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:58:44 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/02 08:05:09 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{	
	int	i;

	i = 0;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/*#include<stdio.h>
#include<stdlib.h>
int main (int argc, char** argv)
{

	if (argc == 2)
	{
		char* string = argv[1];	
		ft_putstr(string);
	}
	else
		printf("Enter 1 argument only.");
	return (0);
}
*/
/*int main()
{
	char string[] = "Yoooooo";
	ft_putstr(string);
	return(0);
}*/
