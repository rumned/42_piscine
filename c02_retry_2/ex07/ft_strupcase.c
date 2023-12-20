/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:21:12 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/25 23:20:36 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}	
	return (str);
}
/*#include <stdio.h>
int    main(int argc, char** argv)
{
    if (argc == 2)
	{
		char *value;
		value = ft_strupcase(argv[1]);//only needed when str is hardcoded
		printf("The string is: %s\n", value);
	}
	else
	{
		printf("Please enter ONLY 1 argument");
	}
    return (0);
}*/
