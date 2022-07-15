/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:42:43 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 08:20:18 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	a = 1;
	if (power == 0 || ((nb < 0) && (power == 0)))
		return (1);
	if (power < 0 || ((power != 0) && (nb == 0)))
		return (0);
	while (power > 0)
	{
		a = nb * a;
		power--;
	}
	return (a);
}
/*
#include <stdio.h>
#include <math.h>
int main ()
{

//	int a = 3;
//	int b = 3;
	printf("%d\n",ft_iterative_power(-2, 3));



}
*/
