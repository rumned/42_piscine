/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:54:54 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/05 01:36:31 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src) 
{
	int i;
	int n;
	char *copy;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	copy = (char *)malloc(n + 1);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
	if (*src == '\0') 
		return (0);
}

#include<string.h>
#include<stdio.h>
int main() 
{
    char *src = "oqiqo";
	char *src1 = "oqiqo";
    char *dup = ft_strdup(src);
	char *dup1 = strdup(src1);

    if (dup != 0) 
	{
        printf("Original:%s\n", src);
        printf("Duplicate, coded:%s\n", dup);
        printf("Original:%s\n", src1);
        printf("Duplicate, real:%s\n", dup1);
		free(dup);
        free(dup1);
    } 
	else 
        printf("Memory allocation failed.\n");
    return 0;
}
