/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:51:47 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 14:10:37 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

int	load_dictionary(t_map *dictionary, char *path)
{
	char	*file_content;
	char	**lines;
	char	**current_line;
	t_pair	pair;

	file_content = load_file(path);
	lines = ft_split(file_content, '\n');
	current_line = lines;
	while (current_line != lines)
	{
		parse(&pair, current_line);
		map_insert(dictionary, pair.key, pair.value);
		free(*current_line);
		current_line++;
	}
	free(file_content);
	free(lines);
}
