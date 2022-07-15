/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 23:38:54 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/21 14:18:06 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int main()
{
	char nom[] = "qwerty";
	char surnom[] = "asdfghj";
	printf("mon nom est : %s\n",nom);
	printf("mon surnom est : %s\n",surnom);
	ft_strcpy(nom, surnom);
	printf("mon nom est : %s\n",nom);
	printf("mon surnom est : %s\n",surnom);
	return 0;


}
*/
