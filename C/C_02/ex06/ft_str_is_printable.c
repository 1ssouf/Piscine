/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 04:50:16 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/21 17:48:28 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 32 || str[x] > 126)
			return (0);
		x++;
	}
	return (1);
}
/*
int main ()
{
	char a[14]= "jjkfvgk\n==";
	char b[11] = "sd";
	printf("%d\n",ft_str_is_printable(a));
	printf("%d\n",ft_str_is_printable(b));
	return 0;
}
*/
