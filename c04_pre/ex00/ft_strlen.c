/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:31:53 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/24 03:28:55 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/*#include<stdio.h>
#include<string.h>
int main(int argc, char** argv)
{
	if (argc == 2)
	{
		char	*str;
		int str_len;
		int str_len1;
		str_len = ft_strlen(argv[1]);
		str_len1 = strlen(argv[1]);
		printf("String length is %d\n",str_len);
		printf("String length by real strlen is %d\n", str_len1);
	}
	return(0);
}*/
