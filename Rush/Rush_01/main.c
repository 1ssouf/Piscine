/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:58:08 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/20 17:57:54 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"
#include "rush01.h"

int	print(int MAT[24][4], char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = '0' + MAT[i][j];
			write (1, &c, 1);
			write (1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	solve_items();
	print(solve_items, '0');
	return (0);
}
