/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:26:29 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/30 22:47:46 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char	*str)
{
	int count;
	
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len_count;
	int i;
	int n;
	char holder[1024];
	char *ptr;

	ptr = &holder[0];
	n = 0;
	i = 0;
	
	len_count = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (str[i] != to_find[i] && str[i] != '\0')
		i++;
	while (i <= (i + len_count))
	{
		while (str[i] == to_find[i])
		{	
			holder[n] = str[i];
			i++;
			n++;
			if (n == len_count)
			{
				holder[n] = '\0';
				return (ptr);
			}
			else
			{
				n = 0;
				break;
			}
			i++;		
		}
	}
	return (0);
}
/*#include<string.h>
#include<stdio.h>
int main()
{
	char haystack[42] = "Fuchuk is Good";
	char needle[] = "FuchuK";
	char* result;
	char* real_res;
	
	result = ft_strstr(haystack, needle);
	real_res = strstr(haystack, needle);

	printf("Coded func: %s\n",result);
	printf("Real func: %s\n", real_res);
}*/
