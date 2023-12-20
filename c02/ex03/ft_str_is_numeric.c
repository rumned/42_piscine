/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 04:25:32 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/23 19:30:43 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 47)
		{
			return (0);
		}
		else if (*str >= 58 && *str <= 127)
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
/*#include <stdio.h>
int    main()
{
    char *str;
    int value;

	str = "58393";
	value = ft_str_is_numeric(str);
    printf("The string is: %s\n",str);
    if (value < 1)
    {
        printf("The string has at least one non-numerical character.\n");
        printf("Return value: %d\n", value);
    }
    else if (*str == '\0')
    {
        printf("The string is empty.\n");
        printf("Return value: %d\n", value);
    }
    else
    {
        printf("The string has only numerical characters.\n");
        printf("Return value: %d\n", value);
    }
  
    return (0);
}*/
