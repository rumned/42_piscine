/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:49:27 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/25 23:15:28 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (i > 0 && str[i] != '\0')
		{
			if (str[i - 1] > 0 && str[i - 1] <= 47)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 123 && str[i - 1] <= 127)
				str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
	char str1[] = "AHdbd$shjd 	kjddEWRW1223)(";
	char *result;
	result=ft_strcapitalize(str1);
	printf("Result is %s\n",result);
	return(0);
}*/
