/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:34:53 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 09:58:37 by ialousse         ###   ########.fr       */
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
/*
#include <stdio.h>
int main ()
{
	printf ("%d\n", ft_is_prime(37));
	printf ("%d\n", ft_is_prime(0));
	printf ("%d\n", ft_is_prime(-1));
	printf ("%d\n", ft_is_prime(2047395609));
	printf ("%d\n", ft_is_prime(100));

}*/
