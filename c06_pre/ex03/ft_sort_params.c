/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobin-mu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:46:37 by mobin-mu          #+#    #+#             */
/*   Updated: 2023/10/04 18:30:53 by mobin-mu         ###   ########.fr       */
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
	int j;
	int flag;
	char *holder;

	j = 0;
	flag = 1;
	while (flag == 1)
	{
		flag = 0;
		while (j < argc - 1)
		{
			while ((ft_strcmp(argv[j], argv[j + 1]) > 0) && argv[j] && argv[j + 1])
			{
				flag = 1;
				holder = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = holder;
			}
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = 1;
	while (n < argc)
	{
		ft_sort_params(argc,argv);
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
