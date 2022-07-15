/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:34:34 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 10:35:49 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector.h"

void	destroy_vector(t_vector *vec)
{
	if (vec && vec->data)
		free(vec->data);
	if (vec)
		free(vec);
}
