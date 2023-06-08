/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:02:24 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:06:25 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up01(t_all *box)
{
	if (box->map.mapm[box->moves.i - 1][box->moves.j] == '0' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'A' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'B' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'C' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'D' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'F' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'G' ||
		box->map.mapm[box->moves.i - 1][box->moves.j] == 'H')
		move_up02(box);
	else if (box->map.mapm[box->moves.i - 1][box->moves.j] == 'E' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'J' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'I' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'K')
	{
		if (box->img.victory_obj == 0)
			exit (0);
	}
	else if (box->map.mapm[box->moves.i - 1][box->moves.j] == 'N'
			|| box->map.mapm[box->moves.i - 1][box->moves.j] == '7'
			|| box->map.mapm[box->moves.i - 1][box->moves.j] == '8'
			|| box->map.mapm[box->moves.i - 1][box->moves.j] == 'M')
		exit (0);
	move_utils(box);
}

void	move_down01(t_all *box)
{
	if (box->map.mapm[box->moves.i + 1][box->moves.j] == '0' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'A' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'B' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'C' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'D' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'F' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'G' ||
		box->map.mapm[box->moves.i + 1][box->moves.j] == 'H')
		move_down02(box);
	else if (box->map.mapm[box->moves.i + 1][box->moves.j] == 'E' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'J' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'I' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'K')
	{
		if (box->img.victory_obj == 0)
			exit (0);
	}
	else if (box->map.mapm[box->moves.i + 1][box->moves.j] == 'N'
			|| box->map.mapm[box->moves.i + 1][box->moves.j] == '7'
			|| box->map.mapm[box->moves.i + 1][box->moves.j] == '8'
			|| box->map.mapm[box->moves.i + 1][box->moves.j] == 'M')
		exit (0);
	move_utils(box);
}

void	move_left01(t_all *box)
{
	if (box->map.mapm[box->moves.i][box->moves.j - 1] == '0' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'A' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'B' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'C' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'D' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'F' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'G' ||
		box->map.mapm[box->moves.i][box->moves.j - 1] == 'H')
		move_left02(box);
	else if (box->map.mapm[box->moves.i][box->moves.j - 1] == 'E' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'J' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'I' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'K')
	{
		if (box->img.victory_obj == 0)
			exit (0);
	}
	else if (box->map.mapm[box->moves.i][box->moves.j - 1] == 'N'
			|| box->map.mapm[box->moves.i][box->moves.j - 1] == '7'
			|| box->map.mapm[box->moves.i][box->moves.j - 1] == '8'
			|| box->map.mapm[box->moves.i][box->moves.j - 1] == 'M')
		exit (0);
	move_utils(box);
}

void	move_right01(t_all *box)
{
	if (box->map.mapm[box->moves.i][box->moves.j + 1] == '0' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'A' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'B' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'C' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'D' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'F' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'G' ||
		box->map.mapm[box->moves.i][box->moves.j + 1] == 'H')
		move_right02(box);
	else if (box->map.mapm[box->moves.i][box->moves.j + 1] == 'E' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'J' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'I' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'K')
	{
		if (box->img.victory_obj == 0)
			exit (0);
	}
	else if (box->map.mapm[box->moves.i][box->moves.j + 1] == 'N'
			|| box->map.mapm[box->moves.i][box->moves.j + 1] == '7'
			|| box->map.mapm[box->moves.i][box->moves.j + 1] == '8'
			|| box->map.mapm[box->moves.i][box->moves.j + 1] == 'M')
		exit (0);
	move_utils(box);
}
