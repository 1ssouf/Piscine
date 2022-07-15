/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:41:13 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 20:40:48 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "parse.h"

int	ft_strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + ft_strlen(str + 1));
}

char	*ft_strcpy(char *dest, char *src)
{
	*dest = *src;
	if (*src != '\0')
	{
		ft_strcpy(dest + 1, src + 1);
	}
	return (dest);
}

char	*remove_trailing_whitespaces(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ' || \
			str[i] == '\t' || \
			str[i] == '\n' || \
			str[i] == '\v' || \
			str[i] == '\f' || \
			str[i] == '\r')
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}

int	parse(t_pair *pair, char *str)
{
	pair->key = ft_atoi(str);
	while (*str != '\0' && *str != ':')
		str++;
	if (*str == '\0')
		return (-1);
	str++;
	str = skip_spaces(str);
	if (*str == '\0')
		return (-1);
	str = remove_trailing_whitespaces(str);
	pair->value = malloc(sizeof(char) * ft_strlen(str));
	pair->value = ft_strcpy(pair->value, str);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	t_pair	pair;
	int		err;
	char	a[] = "      89 :    eighty-nine  ";
	char	b[] = "      --89 :    eighty-nine  ";
	char	c[] = "";
	char	d[] = "      42 :";
	char	e[] = "      20 :    twenty";

	err = parse(&pair, a);
	printf("'      89 :    eighty-nine  ' -> (%d, '%s') and returned %d\n", \
			pair.key, pair.value, err);
	err = parse(&pair, b);
	printf("'      --89 :    eighty-nine  ' -> (%d, '%s') and returned %d\n", \
			pair.key, pair.value, err);
	err = parse(&pair, c);
	printf("'' -> (%d, '%s') and returned %d\n", \
			pair.key, pair.value, err);
	err = parse(&pair, d);
	printf("' 42 : ' -> (%d, '%s') and returned %d\n", \
			pair.key, pair.value, err);
	err = parse(&pair, e);
	printf("' 20 :    twenty' -> (%d, '%s') and returned %d\n", \
			pair.key, pair.value, err);
}
//*/
