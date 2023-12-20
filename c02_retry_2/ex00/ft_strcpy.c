/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <mobin-mu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:44:08 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/21 15:51:28 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char	*dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}	
/*
#include<stdio.h>
int main ()
{
	char dest[20];
	char *src;

	src = "Selamat pagi bosku";	
	printf("Source string: %s\n",src);
	printf("Destination string: %s\n",dest);
	ft_strcpy(dest,src);
	printf("After ft_strcpy, source is: %s\n",src);
	printf("After ft_strcpy, dest is: %s\n",dest);
	return (0);
}*/
