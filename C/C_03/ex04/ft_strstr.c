/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:18:05 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 16:38:09 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char x[555] = "j'aime les pomme verte";
	char y[555] = "pomme";
	printf("%s\n",ft_strstr(x, y));
	return (0);
}
*/
