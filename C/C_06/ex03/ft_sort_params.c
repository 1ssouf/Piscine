/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:26:02 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 13:26:31 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	if (s1 == '\0' && s2 == '\0')
		return (0);
	else
		return (s1[a] - s2[a]);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
	write (1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	while (a < (ac - 1))
	{
		b = 1;
		while (b < (ac -1))
		{
			if (ft_strcmp(av[b], av[b + 1]) > 0)
				ft_swap(&av[b], &av[b + 1]);
			b++;
		}
		a++;
	}
	a = 1;
	while (a < ac)
	{
		ft_putstr(av[a]);
		a++;
	}
	return (0);
}
