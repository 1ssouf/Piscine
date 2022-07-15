/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:43:10 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 12:19:10 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	main(int gc, char *gv[])
{
	int	a;

	a = 0;
	while (++a < gc)
		ft_putstr(gv[gc - a]);
	return (0);
}
