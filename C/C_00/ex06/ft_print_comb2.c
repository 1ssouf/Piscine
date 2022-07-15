/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:53:55 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/16 08:41:38 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + '0');
			ft_putchar ((a % 10) + '0');
			write (1, " ", 1);
			ft_putchar ((b / 10) + '0');
			ft_putchar ((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				write (1, ", ", 2);
			}
		b++;
		}
	a++;
	}
}
/*
int main()
{
	ft_print_comb2();

}
*/
