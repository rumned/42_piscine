/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:07:12 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/02 03:32:30 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	int r1, r2, r3, r4;
	char* str1 = "Str1";
	char* str2 = "Stb1";
	char* str3 = "Str9";

	r1 = ft_strncmp(str1, str2, 4);
	r2 = strncmp(str1, str2, 4);
	r3 = ft_strncmp(str1, str3, 4);
	r4 = strncmp(str1, str3, 4);

	printf("s1/s2,code: %d\n", r1);
	printf("s1/s2,real: %d\n", r2);
	printf("s1/s3,code: %d\n", r3);
	printf("s1/s3,real: %d\n", r4);

	return (0);
}*/
