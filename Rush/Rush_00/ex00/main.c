/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:34:08 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/13 11:06:30 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

void	draw_separation(void)
{
	write(1, "********************\n", 21);
}

int	main(void)
{
	draw_separation();
	write(1, "Drawing a rectangle with size 5 X 3\n", 36);
	rush(5, 3);
	draw_separation();
	write(1, "Drawing a rectangle with size 5 X 1\n", 36);
	rush(5, 1);
	write(1, "\n", 1);
	draw_separation();
	write(1, "Drawing a rectangle with size 1 X 1\n", 36);
	rush(1, 1);
	write(1, "\n", 1);
	draw_separation();
	write(1, "Drawing a rectangle with size 1 X 5\n", 36);
	rush(1, 5);
	write(1, "\n", 1);
	return (0);
}
