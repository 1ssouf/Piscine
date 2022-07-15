/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 06:16:59 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/20 19:31:24 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 65) && (str[a] <= 90))
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
/*
int main ()
{
char iss[] = "ISSOUF";
printf("%s\n",iss);
ft_strlowcase(iss);
printf("%s\n",iss);

return 0;
}
*/
