/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:06:20 by ialousse          #+#    #+#             */
/*   Updated: 2022/03/20 18:25:19 by ialousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "rush01.h"

enum	e_Position
{
	col1up = 0,
	col2up,
	col3up,
	col4up,
	col1down,
	col2down,
	col3down,
	col4down,
	row1left,
	row2left,
	row3left,
	row4left,
	row1right,
	row2right,
	row3right,
	row4right,
};

int	border(int *position, int *str)
{
	int	tab[16];

	tab[col1up] = str[0];
	tab[col2up] = str[1];
	tab[col3up] = str[2];
	tab[col4up] = str[3];
	tab[col1down] = str[4];
	tab[col2down] = str[5];
	tab[col3down] = str[6];
	tab[col4down] = str[7];
	tab[row1left] = str[8];
	tab[row2left] = str[9];
	tab[row3left] = str[10];
	tab[row4left] = str[11];
	tab[row1right] = str[12];
	tab[row2right] = str[13];
	tab[row3right] = str[14];
	tab[row4right] = str[15];
	return (tab[*position]);
}

/*int solve_items(int *nbr)
{
	char sol[24];
	sol[0] = "1234";
	sol[1] = 1243;
	sol[2] = 1324;
	sol[3] = 1342;
	sol[4] = 1423;
	sol[5] = 1432;
	sol[6] = 2134;
	sol[7] = 2143;
	sol[8] = 2314;
	sol[9] = 2341;
	sol[10] = 2413;
	sol[11] = 2431;
	sol[12] = 3124;
	sol[13] = 3142;
	sol[14] = 3214;
	sol[15] = 3241;
	sol[16] = 3412;
	sol[17] = 3421;
	sol[18] = 4123;
	sol[19] = 4132;
	sol[20] = 4213;
	sol[21] = 4231;
	sol[22] = 4312;
	sol[23] = 4321;
	return (sol[*nbr]);
}*/

int	solve_items(void)
{
	int	sol [24][4];

	sol [24][4] = {{1, 2, 3, 4}, {1, 2, 4, 3,},
	{1, 3, 2, 4}, {1, 3, 4, 2}, {1, 4, 2, 3}, {1, 4, 3, 2},
	{2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4}, {2, 3, 4, 1},
	{2, 4, 1, 3}, {2, 4, 3, 1}, {3, 1, 2, 4}, {3, 1, 4, 2},
	{3, 2, 1, 4}, {3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1},
	{4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3}, {4, 2, 3, 1},
	{4, 3, 1, 2}, {4, 3, 2, 1}};
	return (0);
}
