/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:58:10 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/02 03:27:52 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int ft_strlcat(char* dest, char* src, unsigned int size)
{
	unsigned	int	dest_count;
	unsigned	int	src_count;
	unsigned	int i;
	unsigned	int j;

	dest_count = 0;
	src_count = 0;
	while (src[src_count] != '\0')
		src_count++;
	while (dest[dest_count] != '\0')
		dest_count++;
	while ((src[i] != '\0') && i < size)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	if (src[i] == '\0')
		dest[count] = '\0';
	return (i+size);
}
#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[] = "ABCDE";
	char str2[] = "12345";
	char str3[] = "ABCDE";
	char str4[] = "12345";
	int res1;
	int res2;

	res1 = ft_strlcat(str1, str2, 3);
	res2 = strlcat(str3,str4, 3);

	printf("Coded function: length %d , %s\n", res1,str1);
	printf("Real function: length %d , %s\n", res2,str3);
	return (0);
}
