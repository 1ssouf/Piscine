/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:07:47 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/22 06:59:43 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str0)
{
	int	a;

	a = 0;
	while (str0[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	a = size;
	while (*dest)
	{
		dest++;
		if (a > 0)
			a--;
	}
	while (*src && a > 1)
	{
		*dest++ = *src++;
		a--;
	}
	*dest = '\0';
	if (size > dest_len)
		return (dest_len + src_len);
	return (size + src_len);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char			dest[50] = "qw";
	char			src[50] = "109";
	unsigned int	size;

	size = 2;
	printf("%lu\n", strlcat(dest, src, size));
//	printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
		}
*/
