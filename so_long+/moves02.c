/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:31:45 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:18:21 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_utils(t_all *box)
{
	player_position(box);
	remaining_collect(box);
	print_counter(box);
	put_img01(box);
}

void	move_up02(t_all *box)
{
	if (box->map.mapm[box->moves.i - 1][box->moves.j] == 'A' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'B' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'C' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'D' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'F' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'G' ||
			box->map.mapm[box->moves.i - 1][box->moves.j] == 'H')
	{
		box->img.victory_obj--;
		if (box->img.victory_obj == 0)
			exit_open(box);
	}
		box->map.mapm[box->moves.i - 1][box->moves.j] = 'P';
		box->map.mapm[box->moves.i][box->moves.j] = '0';
}

void	move_down02(t_all *box)
{
	if (box->map.mapm[box->moves.i + 1][box->moves.j] == 'A' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'B' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'C' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'D' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'F' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'G' ||
			box->map.mapm[box->moves.i + 1][box->moves.j] == 'H')
	{
		box->img.victory_obj--;
		if (box->img.victory_obj == 0)
			exit_open(box);
	}
		box->map.mapm[box->moves.i + 1][box->moves.j] = 'P';
		box->map.mapm[box->moves.i][box->moves.j] = '0';
}

void	move_left02(t_all *box)
{
	if (box->map.mapm[box->moves.i][box->moves.j] == 'A' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'B' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'C' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'D' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'F' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'G' ||
			box->map.mapm[box->moves.i][box->moves.j - 1] == 'H')
	{
		box->img.victory_obj--;
		if (box->img.victory_obj == 0)
			exit_open(box);
	}
		box->map.mapm[box->moves.i][box->moves.j - 1] = 'P';
		box->map.mapm[box->moves.i][box->moves.j] = '0';
}

void	move_right02(t_all *box)
{
	if (box->map.mapm[box->moves.i][box->moves.j] == 'A' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'B' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'C' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'D' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'F' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'G' ||
			box->map.mapm[box->moves.i][box->moves.j + 1] == 'H')
	{
			box->img.victory_obj--;
		if (box->img.victory_obj == 0)
			exit_open(box);
	}
		box->map.mapm[box->moves.i][box->moves.j + 1] = 'P';
		box->map.mapm[box->moves.i][box->moves.j] = '0';
}
