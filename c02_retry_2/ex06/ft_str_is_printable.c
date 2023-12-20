/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:07:23 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/09/25 13:35:09 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 0 && *str <= 31)
		{
			return (0);
		}
		else if (*str == 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>
int    main()
{
    char *str;
    int value;

	str = "";
	value = ft_str_is_printable(str);
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
        printf("The string has only printable characters.\n");
        printf("Return value: %d\n", value);
    }
  
    return (0);
}*/
