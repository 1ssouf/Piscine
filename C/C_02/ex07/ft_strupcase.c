/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 05:53:12 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/20 19:29:10 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
/*
int main ()
{
char iss[] = "issouf";
printf("%s\n",iss);
ft_strupcase(iss);
printf("%s\n",iss);

return 0;
}
*/
