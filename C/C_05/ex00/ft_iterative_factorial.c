/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:39:15 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 07:55:36 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	while (nb != 0)
	{
		if (nb >= 0)
		{	
			res *= nb;
			nb--;
		}
		else
			return (0);
	}
	return (res);
}
/*
#include <stdio.h>
int main ()
{
printf("10! = %d\n",ft_iterative_factorial(10));
return 0;
}
*/
