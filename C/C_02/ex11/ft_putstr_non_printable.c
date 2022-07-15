/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:27:39 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/28 11:45:48 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (ft_char_is_printable(str[a]) == 1)
			ft_putchar(str[a]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[a] / 16]);
			ft_putchar("0123456789abcdef"[str[a] % 16]);
		}
		a++;
	}
}
/*
#include <stdio.h>

int main ()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}*/
