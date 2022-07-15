/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:25:44 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 12:55:30 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct s_vector
{
	char	*data;
	int		size;
	int		capacity;
}	t_vector;

// Creates and initializes a new vector with a capacity equal to 'reserve'.
t_vector	*create_vector(unsigned int reserve);

// Frees the memory allocated for the vector 'vec'.
void		destroy_vector(t_vector *vec);

// Pushes a new character in the vector.
void		vector_push(t_vector *vec, char c);

// Returns a pointer to the element at index 'idx.
// If 'idx' is out of range, returns NULL.
char		*vector_at(t_vector *vec, unsigned int idx);

#endif
