/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:32:06 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 08:35:30 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;
	int	b;

	a = (index - 1);
	b = (index - 2);
	if (index == 1 || index == 0)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(a) + ft_fibonacci(b));
}
/*
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_fibonacci(13));
}
*/
