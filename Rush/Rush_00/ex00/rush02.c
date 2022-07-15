/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-plae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:08:43 by tde-plae          #+#    #+#             */
/*   Updated: 2022/03/13 14:55:16 by tde-plae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

enum e_Position
{
	TopLeft = 0,
	TopCenter,
	TopRight,
	Left,
	Center,
	Right,
	BottomLeft,
	BottomCenter,
	BottomRight,
};

char	get_char(int position)
{
	int	tab[9];

	tab[TopLeft] = 'A';
	tab[TopCenter] = 'B';
	tab[TopRight] = 'A';
	tab[Left] = 'B';
	tab[Center] = ' ';
	tab[Right] = 'B';
	tab[BottomLeft] = 'C';
	tab[BottomCenter] = 'B';
	tab[BottomRight] = 'C';
	return (tab[position]);
}

void	draw_char(char *buff, int idx, char c, int should_draw)
{
	if (should_draw)
	{
		buff[idx] = c;
	}
}

void	draw(char *buff, int w, int h)
{
	int	x;
	int	y;
	int	i;

	y = 0;
	while (y < h)
	{
		x = 0;
		while (x < w)
		{
			i = y * w + x;
			draw_char(buff, i, get_char(Center), 1);
			draw_char(buff, i, get_char(Right), x == w - 1);
			draw_char(buff, i, get_char(Left), x == 0);
			draw_char(buff, i, get_char(BottomCenter), y == h - 1);
			draw_char(buff, i, get_char(TopCenter), y == 0);
			draw_char(buff, i, get_char(BottomRight), x == w - 1 && y == h - 1);
			draw_char(buff, i, get_char(BottomLeft), x == 0 && y == h - 1);
			draw_char(buff, i, get_char(TopRight), x == w - 1 && y == 0);
			draw_char(buff, i, get_char(TopLeft), x == 0 && y == 0);
			x++;
		}
		y++;
	}
}

void	print(char *buff, int width, int height)
{
	int	y;

	y = 0;
	while (y < height)
	{
		write(1, buff + y * width, width);
		ft_putchar('\n');
		y++;
	}
}

void	rush(int x, int y)
{
	char	buff[65536];

	if (x < 1 || y < 1)
	{
		write(2, "Called rush() with an invalid size parameter.\n", 46);
		return ;
	}
	if (x * y > 65536)
	{
		write(2, "Called rush() with a size that's too big.\n", 42);
		return ;
	}
	draw(buff, x, y);
	print(buff, x, y);
}
