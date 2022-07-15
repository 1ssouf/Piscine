/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:23 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/27 18:23:10 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		index;

	tab = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!tab)
		return (0);
	index = 0;
	while (src[index])
	{
		tab[index] = src[index];
		index++;
	}
	tab[index] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int main()
{
	char *ta = "bjr";
	printf("%s\n",ft_strdup(ta));
}
*/
