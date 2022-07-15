/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:35:58 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/16 08:11:13 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)

{
	char	i;

	i = 'a';
	while (i <= 'z')
	{	
		ft_putchar(i);
		i++;
	}
}
/*
int main()
{
ft_print_alphabet();
return 0;
}
*/
