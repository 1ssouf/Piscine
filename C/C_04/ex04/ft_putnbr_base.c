/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:08:44 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/22 17:14:59 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *i)
{
	int	a;

	a = 0;
	while (i[a])
	{
		write (1, i, 1);
		a++;
	}
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	div;
	unsigned int	res;
	unsigned int	size_base;

	size_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar ("-");
		nbr = -nbr;
	}
	div = 1;
	while ((nbr / div) >= size_base)
		div = div * size_base;
	while (div > 0)
	{
		res = nbr / div % (size_base);
		ft_putchar(&base[res]);
		div = div / size_base;
	}
}
/*
int main ()
{



ft_putnbr_base(16, "0123456789");




return 0;
}*/
