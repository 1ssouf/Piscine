/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:33:00 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 20:40:58 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "map.h"

// Splits the string 'str' at the separations 'sep' and returns
// a null-terminated array of those sub-strings.
char	**ft_split(char *str, char sep);

char	*skip_spaces(char *str);

// Transforms a string into an int.
int		ft_atoi(char *str);

// Parses a line and creates a pair out of it which is stored in 'pair'.
// Returns 0 when the parse was ok, if an error occured, returns -1.
int		parse(t_pair *pair, char *str);

int		load_dictionary(t_map *dictionary, char *path);

int		interpret(t_map *dictionary, char *input);

#endif
