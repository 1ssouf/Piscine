/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:27:15 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/16 08:18:04 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'P';
	b = 'N';
	if (n >= 0)
		write (1, &a, 1);
	else
		write (1, &b, 1);
}
/*
int main()
{
ft_is_negative(5);
ft_is_negative(0);
ft_is_negative(-5);
return 0;
}
*/
