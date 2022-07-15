/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:39:58 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 22:30:51 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "map.h"

t_map	*create_map(unsigned int reserve)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	map->data = 0;
	if (reserve)
	{
		map->data = malloc(sizeof(t_pair) * reserve);
		map->capacity = reserve;
	}
	else
	{
		map->data = malloc(sizeof(t_pair) * 16);
		map->capacity = 16;
	}
	map->size = 0;
	return (map);
}
