/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:37:06 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/26 11:09:13 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	write (1, str, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(&str[a]);
		a++;
	}
}

int	main(int argc, char **argv)
{
	if (argc)
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
