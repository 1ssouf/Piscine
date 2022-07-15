/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:19:02 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/22 10:16:48 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] && s2[a] && a < n - 1 && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
  char str1[] = "abCd"; 
  char str2[] = "abcd";
  int result1;
  int result2;

  result1 = strncmp(str1, str2, 3);
  printf("strncmp(str1, str2) = %d\n", result1);
  result2 = ft_strncmp(str1, str2, 3);
  printf("ft_strcmp(str1, str2) = %d\n", result2);

  return 0;
}
*/
