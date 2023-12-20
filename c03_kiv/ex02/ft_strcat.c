/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:44:28 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/27 14:31:20 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	if (src[i] == '\0')
		dest[count] = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[100] = "Hahahihihoho";
	char str2[] = "B1b1b2b2b3b3";
	char* res1;
	char* res2;

	res1 = ft_strcat(str1, str2);
	res2 = strcat(str1,str2);

	printf("Coded function %s\n",res1);
	printf("Real function %s\n", res2);
	return (0);
}*/
