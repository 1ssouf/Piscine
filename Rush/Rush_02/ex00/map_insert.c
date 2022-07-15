/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:05:35 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 11:54:49 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	*map_cpy(t_map *dest, t_map *src)
{
	int	i;

	i = 0;
	while (i < src->size)
	{
		dest->data[i] = src->data[i];
		i++;
	}
	dest->size = src->size;
	return (dest);
}

int	map_insert(t_map *map, int key, char *value)
{
	t_map	*temp;

	if (map_at(map, key))
	{
		return (0);
	}
	if (map->size == map->capacity)
	{
		temp = create_map(2 * map->capacity);
		temp = map_cpy(temp, map);
		destroy_map(map);
		map = temp;
	}
	map->data[map->size].key = key;
	map->data[map->size].value = value;
	map->size++;
	return (1);
}
