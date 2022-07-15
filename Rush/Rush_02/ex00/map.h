/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:15:17 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 09:57:51 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "pair.h"

typedef struct s_map
{
	t_pair	*data;
	int		size;
	int		capacity;
}	t_map;

// Creates and initializes a new map with a capacity equal to 'reserve'.
t_map	*create_map(unsigned int reserve);

// Frees the memory allocated for the map 'map'.
void	destroy_map(t_map *map);

// Pushes a new pair of key and value in the map.
// Returns true if the insertion actually took place. False if a value was
// already mapped to that key.
int		map_insert(t_map *map, int key, char *value);

// Finds and returns a pointer to the value mapped to the key.
// If the key is not found, returns NULL.
char	*map_at(t_map *map, int key);

#endif
