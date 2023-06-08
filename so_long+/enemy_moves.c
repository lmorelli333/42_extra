/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:09:40 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 22:51:46 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up_enemy(t_all *box)
{
	mlx_clear_window(box->map.mlx, box->map.window);
	fix_counter(box);
	if (box->map.mapm[box->moves.y - 1][box->moves.x] == '0'
	|| box->map.mapm[box->moves.y - 1][box->moves.x] == '7'
	|| box->map.mapm[box->moves.y - 1][box->moves.x] == '8')
	{
		box->map.mapm[box->moves.y - 1][box->moves.x] = 'N';
		box->map.mapm[box->moves.y][box->moves.x] = '0';
	}
	else if (box->map.mapm[box->moves.y - 1][box->moves.x] == 'P')
		exit (0);
	player_position(box);
	put_img01(box);
}

void	move_down_enemy(t_all *box)
{
	mlx_clear_window(box->map.mlx, box->map.window);
	fix_counter(box);
	if (box->map.mapm[box->moves.y + 1][box->moves.x] == '0'
	|| box->map.mapm[box->moves.y + 1][box->moves.x] == '7'
	|| box->map.mapm[box->moves.y + 1][box->moves.x] == '8')
	{
		box->map.mapm[box->moves.y + 1][box->moves.x] = 'N';
		box->map.mapm[box->moves.y][box->moves.x] = '0';
	}
	else if (box->map.mapm[box->moves.y + 1][box->moves.x] == 'P')
		exit (0);
	player_position(box);
	put_img01(box);
}

void	move_left_enemy(t_all *box)
{
	mlx_clear_window(box->map.mlx, box->map.window);
	fix_counter(box);
	if (box->map.mapm[box->moves.y][box->moves.x - 1] == '0'
	|| box->map.mapm[box->moves.y][box->moves.x - 1] == '7'
	|| box->map.mapm[box->moves.y][box->moves.x - 1] == '8')
	{
		box->map.mapm[box->moves.y][box->moves.x - 1] = 'N';
		box->map.mapm[box->moves.y][box->moves.x] = '0';
	}
	else if (box->map.mapm[box->moves.y][box->moves.x - 1] == 'P')
		exit (0);
	player_position(box);
	put_img01(box);
}

void	move_right_enemy(t_all *box)
{
	mlx_clear_window(box->map.mlx, box->map.window);
	fix_counter(box);
	if (box->map.mapm[box->moves.y][box->moves.x + 1] == '0'
	|| box->map.mapm[box->moves.y][box->moves.x + 1] == '7'
	|| box->map.mapm[box->moves.y][box->moves.x + 1] == '8')
	{
		box->map.mapm[box->moves.y][box->moves.x + 1] = 'N';
		box->map.mapm[box->moves.y][box->moves.x] = '0';
	}
	else if (box->map.mapm[box->moves.y][box->moves.x + 1] == 'P')
		exit (0);
	player_position(box);
	put_img01(box);
}
