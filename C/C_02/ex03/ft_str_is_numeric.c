/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 03:11:02 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/21 17:09:16 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	y;

	y = 0;
	while (str[y] != '\0')
	{	
		if (str[y] >= '0' && str[y] <= '9')
			++y;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char z[11] = "09h";
	char x[11] = "whds";
	printf("%d\n",ft_str_is_numeric(z));
	printf("%d\n",ft_str_is_numeric(x));
	return 0;
}
*/
