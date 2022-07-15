/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 01:47:12 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/21 16:39:53 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 'a' || str[a] > 'z') && (str[a] < 'A' || str[a] > 'Z'))
			return (0);
		++a;
	}
	return (1);
}

/*
int main ()
{
	char z[22] = "109";
	char w[22] = "aAsj";
	printf("%d\n",ft_str_is_alpha(z));
	printf("%d\n",ft_str_is_alpha(w));
	return 0;
}
*/
