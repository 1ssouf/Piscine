/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:36:27 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 11:07:01 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector.h"

t_vector	*vector_cpy(t_vector *dest, t_vector *src)
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

void	vector_push(t_vector *vec, char c)
{
	t_vector	*temp;

	if (vec->size == vec->capacity)
	{
		temp = create_vector(2 * vec->capacity);
		temp = vector_cpy(temp, vec);
		destroy_vector(vec);
		vec = temp;
	}
	vec->data[vec->size] = c;
	vec->size++;
}
