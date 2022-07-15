/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:13:30 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 20:39:49 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

char	*skip_spaces(char *str)
{
	while (*str == ' ' || \
			*str == '\t' || \
			*str == '\n' || \
			*str == '\v' || \
			*str == '\f' || \
			*str == '\r')
	{
		str++;
	}
	return (str);
}

int	get_num(char *str)
{
	int	total;

	total = 0;
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += *str - '0';
		str++;
	}
	return (total);
}

int	ft_atoi(char *str)
{
	char	*str_begin;

	str_begin = skip_spaces(str);
	if (*str_begin == '-')
	{
		return (-get_num(str_begin + 1));
	}
	else if (*str_begin == '+')
	{
		return (get_num(str_begin + 1));
	}
	else
	{
		return (get_num(str_begin));
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("atoi:    '42' -> %d\n", atoi("42"));
	printf("ft_atoi: '42' -> %d\n", ft_atoi("42"));
	printf("\n");
	printf("atoi:    '-42' -> %d\n", atoi("-42"));
	printf("ft_atoi: '-42' -> %d\n", ft_atoi("-42"));
	printf("\n");
	printf("atoi:    '- 42' -> %d\n", atoi("- 42"));
	printf("ft_atoi: '- 42' -> %d\n", ft_atoi("- 42"));
	printf("\n");
	printf("atoi:    '--42' -> %d\n", atoi("--42"));
	printf("ft_atoi: '--42' -> %d\n", ft_atoi("--42"));
	printf("\n");
	printf("atoi:    ' 42' -> %d\n", atoi(" 42"));
	printf("ft_atoi: ' 42' -> %d\n", ft_atoi(" 42"));
	printf("\n");
	printf("atoi:    ' - 42' -> %d\n", atoi(" - 42"));
	printf("ft_atoi: ' - 42' -> %d\n", ft_atoi(" - 42"));
	printf("\n");
	printf("atoi:    '   -42' -> %d\n", atoi("   -42"));
	printf("ft_atoi: '   -42' -> %d\n", ft_atoi("   -42"));
	printf("\n");
	printf("atoi:    '+42' -> %d\n", atoi("+42"));
	printf("ft_atoi: '+42' -> %d\n", ft_atoi("+42"));
	printf("\n");
	printf("atoi:    '42abc' -> %d\n", atoi("42abc"));
	printf("ft_atoi: '42abc' -> %d\n", ft_atoi("42abc"));
	printf("\n");
	printf("atoi:    ' -42abc' -> %d\n", atoi(" -42abc"));
	printf("ft_atoi: ' -42abc' -> %d\n", ft_atoi(" -42abc"));
	printf("\n");
	printf("atoi:    ' - 42abc' -> %d\n", atoi(" - 42abc"));
	printf("ft_atoi: ' - 42abc' -> %d\n", ft_atoi(" - 42abc"));
	printf("\n");
	printf("atoi:    'abc' -> %d\n", atoi("abc"));
	printf("ft_atoi: 'abc' -> %d\n", ft_atoi("abc"));
	printf("\n");
}
//*/
