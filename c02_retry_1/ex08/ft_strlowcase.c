/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:03:48 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/25 20:36:17 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include<stdio.h>
int main ()
{
	char* converted_str;
	char str[] = "hwjfjjsnnwAJUSSJN&&& *&Y*(&(*";
	converted_str = ft_strlowcase(str);
	printf("The converted string is: %s\n",converted_str);
	return(0);
}*/
