/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:58:41 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/15 19:11:16 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int q, int w, int e)
{
	write(1, &q, 1);
	write(1, &w, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a;
		while (b++ <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_display(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					write(1, ", ", 2);
				}
				c++;
			}
		}
		a++;
	}
}
/*
int main ()
{

ft_print_comb();
return 0;


}
*/
