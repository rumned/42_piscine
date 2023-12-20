/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:32:38 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/21 18:03:23 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 64)
		{
			return (0);
		}
		else if ((*str >= 91 && *str <= 96) || (*str >= 123 && *str <= 127))
		{
			return (0);
		}
		str++;
	}
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
int    ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if ((*str < 'a' && *str > 'z') || (*str < 'A' && *str > 'Z'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}*/

/*#include <stdio.h>
int    main()
{
    char *str;
    int value;

    str = "abcd";
    value = ft_str_is_alpha(str);
    printf("The string is: %s\n",str);
    if (value < 1)
    {
        printf("The string has at least one non-alphabetical character.\n");
        printf("Return value: %d\n", value);
    }
    else if (*str == '\0')
    {
        printf("The string is empty.\n");
        printf("Return value: %d\n", value);
    }
    else
    {
        printf("The string has only alphabetical characters.\n");
        printf("Return value: %d\n", value);
    }
  
    return (0);
}*/
