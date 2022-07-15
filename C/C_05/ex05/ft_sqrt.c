/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:03:50 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 13:55:07 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	a;
	long	sq;

	sq = nb;
	if (sq <= 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 2;
	if (sq >= 2)
	{
		while ((a * a) <= sq)
		{
			if ((a * a) == sq)
				return (a);
			a++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_sqrt(666));
	printf("%d\n", ft_sqrt(2147395600));

}
*/
