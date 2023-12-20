/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 05:43:53 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/26 23:38:53 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*#include <string.h>
#include<stdio.h>
int main()
{
	char* str1;
	char* str2;
	char* str3;
	int r1;
	int r2;
	int r3;
	int r4;

	str1 = "Hello World";
	str2 = "Hello World";
	str3 = "djshdsds";

	r1 = ft_strcmp(str1, str2);
	r2 = ft_strcmp(str1, str3);
	r3 = strcmp(str1, str2);
	r4 = strcmp(str1, str3);
	printf("ft_strcmp is %d\n", r1);
	printf("ft_strcmp is %d\n", r2);
	printf("strcmp is %d\n", r3);
	printf("strcmp is %d\n", r4);
}*/
