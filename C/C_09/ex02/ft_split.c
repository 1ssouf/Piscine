/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:16:03 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/31 13:23:04 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
	i++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset, int j)
{
	int	len;

	len = 0;
	while (str[j])
	{
		if (!ft_is_in_charset(str[j], charset))
			len++;
		else
			break ;
		j++;
	}
	return (len);
}

int	ft_count_split(char *str, char *charset)
{
	int	i;
	int	word_b;
	int	count;

	i = 0;
	count = 0;
	word_b = 0;
	while (str[i])
	{
		if (ft_is_in_charset(str[i], charset))
			word_b = 0;
		else if (!ft_is_in_charset(str[i], charset) && word_b == 0)
		{
			word_b = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	strs = malloc(sizeof(char *) * (ft_count_split(str, charset) + 1));
	i = 0;
	j = 0;
	while (i < ft_count_split(str, charset))
	{
		k = 0;
		while (str[j] && ft_is_in_charset(str[j], charset))
			j++;
		strs[i] = malloc(sizeof(char) * ft_word_len(str, charset, j) + 1);
		while (k < ft_word_len(str, charset, j))
		{
			strs[i][k] = str[j + k];
			k++;
		}
		strs[i][k] = '\0';
		j += ft_word_len(str, charset, j);
		i++;
	}
	strs[i] = 0;
	return (strs);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
(void)argc;

char **tab = ft_split(argv[1], argv[2]);
size_t i = 0;
while (tab[i])
{
printf("|%s|\n", tab[i]);
i++;
}
}*/
