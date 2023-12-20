/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:51:57 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/28 16:00:44 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0' && i < nb)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[100] = "abcdefghij";
	char str2[] = "0123456789";
	char str3[100] = "abcdefghij";
	char str4[] = "0123456789";
	//4 diff strings because same strings would mess with output
	char* res1;
	char* res2;

	res1 = ft_strncat(str1, str2, 20);
	res2 = strncat(str3, str4, 20);

	printf("Coded function %s\n", res1);
	printf("Real function %s\n", res2);
	return (0);
}*/
