/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:16:41 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 13:46:16 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "parse.h"

enum e_error
{
	Error = -1,
	DictError = -2,
};

int	assert(int condition, char *error_message)
{
	if (!condition)
	{
		log_error(error_message);
		return (0);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	int		err;
	t_map	*dictionary;

	err = 0;
	if (!assert(argc == 1 || argc > 3, "Error"))
		return (-1);
	dictionary = create_map(0);
	if (argc == 3)
		err = load_dictionary(dictionary, argv[1]);
	else
		err = load_dictionary(dictionary, "number.dict");
	if (!assert(err, "Dict Error"))
		return (-1);
	if (argc == 3)
		err = interpret(dictionary, argv[2]);
	else
		err = interpret(dictionary, argv[1]);
	if (err == Error)
	{
		log_error("Error");
		return (-1);
	}
	else if (err == DictError)
	{
		log_error("Dict Error");
		return (-1);
	}
	return (0);
}
