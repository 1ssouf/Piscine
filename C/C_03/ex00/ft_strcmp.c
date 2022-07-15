/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:50:00 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/22 00:39:29 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	if ((s1 == '\0') && (s2 == '\0'))
		return (0);
	else
		return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "a";
  char str2[] = "abcd";
  int result1;
  int result2;

  // comparing strings str1 and str2
  result1 = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result1);

  result2 = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2) = %d\n", result2);

  return 0;
}
*/
