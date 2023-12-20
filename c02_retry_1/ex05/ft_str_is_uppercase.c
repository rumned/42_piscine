/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:02:20 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/21 19:06:19 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 64)
		{
			return (0);
		}
		else if (*str >= 91 && *str <= 127)
		{
			return (0);
		}
		str++;
	}
	if (*str == '\0')
	{
		return (1);
	}	
	return (1);
}
/*#include <stdio.h>
int    main()
{
    char *str;
    int value;

	str = "HJDHJD";
	value = ft_str_is_uppercase(str);
    printf("The string is: %s\n",str);
    if (value < 1)
    {
        printf("The string has at least one disallowed character.\n");
        printf("Return value: %d\n", value);
    }
    else if (*str == '\0')
    {
        printf("The string is empty.\n");
        printf("Return value: %d\n", value);
    }
    else
    {
        printf("The string has only uppercase alpha characters.\n");
        printf("Return value: %d\n", value);
    }
  
    return (0);
}*/
