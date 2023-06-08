/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:44:41 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:14:58 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	key_input_utils(t_all *box)
{
	if (box->img.current_player01 == box->img.kame01r)
				box->img.current_player01 = box->img.player01r;
	if (box->img.current_player01 == box->img.kame01l)
				box->img.current_player01 = box->img.player01l;
	if (box->moves.mini_counter <= 5 && box->moves.mini_counter > 0)
	{
		if (box->img.current_player02 == box->img.kame02r)
				box->img.current_player02 = box->img.player02r;
		if (box->img.current_player02 == box->img.kame02l)
				box->img.current_player02 = box->img.player02l;
			box->img.current_player01 = box->img.current_player02;
	}
	if (box->moves.mini_counter < 2)
	{
		if (box->img.current_player03 == box->img.kame03r)
				box->img.current_player03 = box->img.player03r;
		if (box->img.current_player03 == box->img.kame03l)
				box->img.current_player03 = box->img.player03l;
			box->img.current_player01 = box->img.current_player03;
	}
	mlx_clear_window(box->map.mlx, box->map.window);
}

void	key_input_space(t_all *box)
{
	if (box->map.mapm[box->moves.i][box->moves.j + 1] == 'M')
	{
		kill(box);
		if (box->moves.mini_counter > 5)
				box->img.current_player01 = box->img.kame01r;
		if (box->moves.mini_counter <= 5 && box->moves.mini_counter > 0)
				box->img.current_player01 = box->img.kame02r;
		if (box->moves.mini_counter < 2)
				box->img.current_player01 = box->img.kame03r;
			box->map.mapm[box->moves.i][box->moves.j + 1] = '0';
	}
	else if (box->map.mapm[box->moves.i][box->moves.j - 1] == 'M')
	{
		kill(box);
		if (box->moves.mini_counter > 5)
				box->img.current_player01 = box->img.kame01l;
		if (box->moves.mini_counter <= 5 && box->moves.mini_counter > 0)
				box->img.current_player01 = box->img.kame02l;
		if (box->moves.mini_counter < 2)
				box->img.current_player01 = box->img.kame03l;
			box->map.mapm[box->moves.i][box->moves.j - 1] = '0';
	}
}

void	key_input_right(t_all *box)
{
	box->img.current_player01 = box->img.player01r;
	box->img.current_player02 = box->img.player02r;
	box->img.current_player03 = box->img.player03r;
	key_input_utils(box);
	move_right01(box);
}

void	key_input_left(t_all *box)
{
	box->img.current_player01 = box->img.player01l;
	box->img.current_player02 = box->img.player02l;
	box->img.current_player03 = box->img.player03l;
	key_input_utils(box);
	move_left01(box);
}

int	key_input(int k, t_all *box)
{
	if (k == 13 || k == 126)
	{
		key_input_utils(box);
		move_up01(box);
	}
	else if (k == 1 || k == 125)
	{
		key_input_utils(box);
		move_down01(box);
	}
	else if (k == 2 || k == 124)
		key_input_right(box);
	else if (k == 0 || k == 123)
		key_input_left(box);
	else if (k == 49)
		key_input_space(box);
	else if (k == 53)
		free_memory01(box);
	return (0);
}
