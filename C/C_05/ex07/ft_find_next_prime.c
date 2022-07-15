/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:50:58 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 14:26:55 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	if (nb <= 1)
		return (0);
	a = 2;
	while (a <= (nb / a))
	{
		if (nb % a == 0)
			return (0);
		else
			a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb > 2147395600)
		return (2147483647);
	while (nb >= 1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>

int main ()
{
	printf ("%d\n", ft_find_next_prime(37));
	printf ("%d\n", ft_find_next_prime(17));
	printf ("%d\n", ft_find_next_prime(97));
	printf ("%d\n", ft_find_next_prime(25));
	printf ("%d\n", ft_find_next_prime(2147395601));

}
*/
