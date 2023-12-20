/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:18:36 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/21 19:00:01 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 96)
		{
			return (0);
		}
		else if (*str >= 123 && *str <= 127)
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

	str = "";
	value = ft_str_is_lowercase(str);
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
        printf("The string has only lowercase alpha characters.\n");
        printf("Return value: %d\n", value);
    }
  
    return (0);
}*/
