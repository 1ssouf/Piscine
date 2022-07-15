/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:14:37 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/22 14:37:19 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg;
	int	nbr;
	int	a;

	neg = 1;
	nbr = 0;
	a = 0;
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'
		|| str[a] == '\f' || str[a] == '\r' || str[a] == '\v')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-' )
			neg *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		nbr = ((nbr * 10) + (str[a] - '0'));
		a++;
	}
	return (nbr * neg);
}
/*
#include <stdio.h>
int main ()
{
	char a[] =  "    ---+--+1234ab567";
	printf("%d\n",ft_atoi(a));
	return (0);
}
*/
