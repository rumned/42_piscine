/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:26:29 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/02 03:33:34 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	char haystack[42] = "Fuchuk is Good";
	char needle[] = " ";
	char* result;
	char* real_res;
	
	result = ft_strstr(haystack, needle);
	real_res = strstr(haystack, needle);

	printf("Coded func: %s\n",result);
	printf("Real func: %s\n", real_res);
}*/
