/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:37:34 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/25 23:18:13 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
			dest[i] = src[i];
			i++;
	}
	return (dest);
}
/*#include<stdio.h>
int main ()
{
	char dest[] = "123456789";
	char *src;
	src = "Se";	
	printf("Source string: %s\n",src);
	printf("Destination string: %s\n",dest);
	ft_strncpy(dest,src,5);
	printf("After ft_strcpy, source is: %s\n",src);
	printf("After ft_strcpy, dest is: %s\n",dest);
	return (0);
}*/
