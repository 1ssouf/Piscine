/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:50:27 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/29 21:45:57 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		index;

	index = 0;
	tab = malloc(ft_strlen(src) * (sizeof(char) + 1));
	if (tab == NULL)
		return (0);
	while (src[index] != '\0')
	{
		tab[index] = src[index];
		index++;
	}
	tab[index] = '\0';
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					num_s;
	struct s_stock_str	*test;

	num_s = 0;
	test = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (test == NULL)
		return (0);
	while (num_s < ac)
	{
		test[num_s].size = ft_strlen(av[num_s]);
		test[num_s].str = av[num_s];
		test[num_s].copy = ft_strdup(av[num_s]);
		num_s++;
	}
	test[num_s] = (struct s_stock_str){0, 0, 0};
	return (test);
}
/*
int main (void)
{
	char *strs[4];
	char *strs1;
	char *strs2;
	char *strs3;
	char *strs4;
	int size;
	
	str1 = "Salut";
	str2 = "les";
	str3 = "gas";
	str4 = "!!!!"
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	ft_show_tab(ft_strs_to_tab(size, strs));
}*/
