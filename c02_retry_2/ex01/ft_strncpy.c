/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:37:34 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/27 17:14:23 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include<stdio.h>
int main ()
{
	char dest[] = "123456789";
	char *src;
	src = "Sedap";	
	printf("Source string: %s\n",src);
	printf("Destination string: %s\n",dest);
	ft_strncpy(dest,src,8);
	printf("After ft_strcpy, source is: %s\n",src);
	printf("After ft_strcpy, dest is: %s\n",dest);
	return (0);
}
