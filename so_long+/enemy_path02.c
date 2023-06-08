/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_path02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:36:07 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 22:59:38 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	enemy_patrol_utils09(t_all *box)
{
	if (box->img.patrol_flag == 18)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 19)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3L.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_left_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 20)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_up_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils08(t_all *box)
{
	if (box->img.patrol_flag == 15)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		put_img01(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 16)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 17)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils07(t_all *box)
{
	if (box->img.patrol_flag == 13)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 14)
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
}

void	enemy_patrol_utils06(t_all *box)
{
	if (box->img.patrol_flag == 10)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy3L.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_left_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 11)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_up_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 12)
	{
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_up_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils05(t_all *box)
{
	if (box->img.patrol_flag == 8)
	{
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18R.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 9)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/poof.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18L.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
}
