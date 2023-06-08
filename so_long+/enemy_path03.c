/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_path03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:36:42 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:00:57 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	enemy_patrol_utils12(t_all *box)
{
	if (box->img.patrol_flag == 27)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 28)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 29)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3L.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_left_enemy(box);
		box->img.patrol_flag = 10;
	}
}

void	enemy_patrol_utils11(t_all *box)
{
	if (box->img.patrol_flag == 24)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3L.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		put_img01(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 25)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2R.xpm", &box->img.size_img,
				&box->img.size_img);
		put_img01(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 26)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils10(t_all *box)
{
	if (box->img.patrol_flag == 21)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_left_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 22)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_up_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 23)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
}
