/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 04:31:08 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/20 19:21:39 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_if_alphamaj(int z)
{
	if ((z <= 'Z') && (z >= 'A'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (!(ft_if_alphamaj(str[x])))
			return (0);
		x++;
	}
	return (1);
}
/*
int main ()
{
	return 0;


}
*/
