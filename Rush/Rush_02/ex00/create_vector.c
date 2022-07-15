/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:29:18 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 17:14:55 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector.h"

t_vector	*create_vector(unsigned int reserve)
{
	t_vector	*vec;

	vec = malloc(sizeof(t_vector));
	vec->data = 0;
	if (reserve)
	{
		vec->data = malloc(sizeof(char) * reserve);
		vec->capacity = reserve;
	}
	else
	{
		vec->data = malloc(sizeof(char) * 16);
		vec->capacity = 16;
	}
	vec->size = 0;
	return (vec);
}
