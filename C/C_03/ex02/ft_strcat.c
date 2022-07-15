/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:49:27 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/22 00:52:24 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (src[b] != '\0')
	{
		dest [a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char c[666];
	char d[666];
	ft_strcat(c, "JeSais");
	ft_strcat(d, "Pas");
	printf("c = %s\n", c);
	printf("d = %s\n",d);
	ft_strcat(c, d);
	printf("c = %s\n",c);

	return 0;
}
*/
