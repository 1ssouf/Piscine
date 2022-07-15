/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 04:17:14 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/20 19:19:37 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_if_alphamin(int x)
{
	if ((x >= 'a') && (x <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	y;

	y = 0;
	while (str[y])
	{
		if (!(ft_if_alphamin(str[y])))
			return (0);
		y++;
	}
	return (1);
}
/*
int	main(void)
{
	return (0;
}
*/
