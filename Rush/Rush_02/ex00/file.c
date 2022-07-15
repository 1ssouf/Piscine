/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 10:14:35 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/27 11:55:11 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "file.h"
#include "vector.h"

char	*read_content(int fd)
{
	int			has_content_left;
	char		c;
	t_vector	*vec;
	char		*content;

	vec = create_vector(4096);
	has_content_left = read(fd, &c, 1);
	while (has_content_left)
	{
		vector_push(vec, c);
		has_content_left = read(fd, &c, 1);
	}
	vector_push(vec, '\0');
	content = vec->data;
	free(vec);
	return (content);
}

char	*load_file(char *path)
{
	int		fd;
	char	*content;

	fd = open(path, O_RDONLY);
	if (!fd)
	{
		return (0);
	}
	content = read_content(fd);
	close(fd);
	return (content);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		dummy;
	char	*content;

	dummy = argc;
	content = load_file(argv[1]);
	printf("%s\n", content);
	free(content);
	system("leaks a.out");
	return (0);
}
//*/
