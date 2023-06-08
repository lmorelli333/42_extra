/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_path01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:48:52 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 22:56:41 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	enemy_patrol_utils04(t_all *box)
{
	if (box->img.patrol_flag == 6)
	{
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18R.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 7)
	{
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18L.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils03(t_all *box)
{
	if (box->img.patrol_flag == 4)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/poof.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.droid17 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C17R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18R.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini2L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_right_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 5)
	{
		box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
				"./img/enemy2R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18L.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils02(t_all *box)
{
	if (box->img.patrol_flag == 2)
	{
		box->img.droid17 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C17R.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18R.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1R.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
	else if (box->img.patrol_flag == 3)
	{
		box->img.droid17 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C17L.xpm", &box->img.size_img,
				&box->img.size_img);
		box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
				"./img/C18L.xpm", &box->img.size_img, &box->img.size_img);
		box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
				"./img/mini1L.xpm", &box->img.size_img,
				&box->img.size_img);
		move_down_enemy(box);
		box->img.patrol_flag++;
	}
}

void	enemy_patrol_utils01(t_all *box)
{
	box->img.enemy = mlx_xpm_file_to_image(box->map.mlx,
			"./img/enemy1R.xpm", &box->img.size_img,
			&box->img.size_img);
	box->img.droid17 = mlx_xpm_file_to_image(box->map.mlx,
			"./img/C17L.xpm", &box->img.size_img,
			&box->img.size_img);
	box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx,
			"./img/C18L.xpm", &box->img.size_img,
			&box->img.size_img);
	box->img.mini = mlx_xpm_file_to_image(box->map.mlx,
			"./img/mini2R.xpm", &box->img.size_img,
			&box->img.size_img);
	move_right_enemy(box);
	box->img.patrol_flag++;
}

int	enemy_patrol(t_all *box)
{
	if (box->moves.patrol < 6100)
	{
		box->moves.patrol++;
		return (0);
	}
	box->moves.patrol = 0;
	if (box->img.patrol_flag == 1)
		enemy_patrol_utils01(box);
	else if (box->img.patrol_flag == 2 || box->img.patrol_flag == 3)
		enemy_patrol_utils02(box);
	else if (box->img.patrol_flag == 4 || box->img.patrol_flag == 5)
		enemy_patrol_utils03(box);
	else if (box->img.patrol_flag == 6 || box->img.patrol_flag == 7)
		enemy_patrol_utils04(box);
	else if (box->img.patrol_flag == 8 || box->img.patrol_flag == 9)
		enemy_patrol_utils05(box);
	else if (box->img.patrol_flag == 10 || box->img.patrol_flag == 11 || box->img.patrol_flag == 12)
		enemy_patrol_utils06(box);
	else if (box->img.patrol_flag == 13 || box->img.patrol_flag == 14)
		enemy_patrol_utils07(box);
	else if (box->img.patrol_flag == 15 || box->img.patrol_flag == 16 || box->img.patrol_flag == 17)
		enemy_patrol_utils08(box);
	else if (box->img.patrol_flag == 18 || box->img.patrol_flag == 19 || box->img.patrol_flag == 20)
		enemy_patrol_utils09(box);
	else if (box->img.patrol_flag == 21 || box->img.patrol_flag == 22 || box->img.patrol_flag == 23)
		enemy_patrol_utils10(box);
	else if (box->img.patrol_flag == 24 || box->img.patrol_flag == 25 || box->img.patrol_flag == 26)
		enemy_patrol_utils11(box);
	else if (box->img.patrol_flag == 27 || box->img.patrol_flag == 28 || box->img.patrol_flag == 29)
		enemy_patrol_utils12(box);
	return (0);
}
