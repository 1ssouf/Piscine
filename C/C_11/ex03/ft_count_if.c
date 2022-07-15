/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:50:26 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/31 15:55:28 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	a;
	int	m;

	a = -1;
	m = 0;
	while (++a < length)
		if ((*f)(tab[a]) != 0)
			m++;
	return (m);
}
