/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:42:44 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/28 15:19:34 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	*tmp;

	if (min >= max)
	{
		return (0);
	}
	tmp = malloc(sizeof(int) * (max - min));
	if (tmp == '\0')
		return (-1);
	a = 0;
	while (min < max)
	{
		tmp[a] = min;
		min++;
		a++;
	}
	*range = tmp;
	return (a);
}
/*
#include <stdio.h>
int main ()
{
	int size;
	int *tab;
	int i = 0;

	size = ft_ultimate_range(&tab, -6, 10);
	while (i < size)
	{
		printf("%d,\n",tab[i]);
		i++;
	}


}*/
