/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:42:56 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/28 15:25:03 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		a;
	int		b;
	int		c;

	s = malloc(sizeof(strs));
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != '\0')
		{
			s[c++] = strs[a][b++];
		}
		b = 0;
		while (strs[b] != '\0' && a != size - 1)
		{
			s[c++] = sep[b++];
		}
		a++;
	}
	s[c] = '\0';
	return (s);
}
/*
#include<stdio.h>
int main()
{
  	char *str;
	char *i = "123456789";
	str = ft_strjoin(2, &i,"  " "test2");
	printf("ft_strjoin = %s\n",str);
	free (str);
	return 0;
}*/
