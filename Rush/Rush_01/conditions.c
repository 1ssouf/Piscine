/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaquerb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 07:46:20 by jlaquerb          #+#    #+#             */
/*   Updated: 2022/03/20 18:31:47 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "conditions.h"
#include "main.h"
#include "rush01.h"

void	ft_putchar(void)
{
	write (1, "\n", 1);
}

void	conditions_step1(char *str, int *nbr, int *nbr2, int sol[*nbr][*nbr2])
{
	if (str[8] == 4 && str[12] == 1)
		write(1, &sol[0][4], 4);
	if (str[8] == 1 && str[12] == 4)
		write(1, &sol[23][4], 4);
	if (str[9] == 4 && str[13] == 1)
		write(1, &sol[0][4], 4);
	if (str[9] == 1 && str[13] == 4)
		write(1, &sol[23][4], 4);
	if (str[10] == 4 && str[14] == 1)
		write(1, &sol[0][4], 4);
	if (str[10] == 1 && str[14] == 4)
		write(1, &sol[23][4], 5);
	if (str[11] == 4 && str[15] == 1)
		write(1, &sol[0][4], 4);
	if (str[11] == 1 && str[15] == 4)
		write(1, &sol[23][4], 4);
}
