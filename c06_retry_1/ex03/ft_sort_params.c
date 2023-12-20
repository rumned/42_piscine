/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:46:37 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/04 19:33:19 by mobin-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int		j;
	int		k;
	char	*holder;

	k = 1;
	while (k < argc)
	{
		j = k + 1;
		while (j < argc)
		{	
			if (ft_strcmp(argv[k], argv[j]) > 0)
			{
				holder = argv[j];
				argv[j] = argv[k];
				argv[k] = holder;
			}
			j++;
		}
		k++;
	}
}	

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = 1;
	ft_sort_params(argc, argv);
	while (n < argc)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
