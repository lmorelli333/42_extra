/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:42:54 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:13:39 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	quit(void)
{
	exit(0);
}

void	window(t_all *box)
{
	int		i;

	i = 0;
	while (box->map.mapm[i])
		i++;
	box->map.mlx = mlx_init();
	box->map.window = mlx_new_window(box->map.mlx,
			(64 * ft_strlen(box->map.mapm[0])), (64 * (i) + 64), "so_long");
	mlx_hook(box->map.window, 17, 0, quit, 0);
}

void	take_img03(t_all *box)
{
	box->img.player01r = mlx_xpm_file_to_image(box->map.mlx,
			"./img/player01R.xpm", &box->img.size_img, &box->img.size_img);
	box->img.player01l = mlx_xpm_file_to_image(box->map.mlx,
			"./img/player01L.xpm", &box->img.size_img, &box->img.size_img);
	box->img.player02r = mlx_xpm_file_to_image(box->map.mlx,
			"./img/player02R.xpm", &box->img.size_img, &box->img.size_img);
	box->img.player02l = mlx_xpm_file_to_image(box->map.mlx,
			"./img/player02L.xpm", &box->img.size_img, &box->img.size_img);
	box->img.player03r = mlx_xpm_file_to_image(box->map.mlx,
			"./img/player03R.xpm", &box->img.size_img, &box->img.size_img);
	box->img.player03l = mlx_xpm_file_to_image(box->map.mlx,
			"./img/player03L.xpm", &box->img.size_img, &box->img.size_img);
	box->img.kame01r = mlx_xpm_file_to_image(box->map.mlx,
			"./img/kame01R.xpm", &box->img.size_img, &box->img.size_img);
	box->img.kame01l = mlx_xpm_file_to_image(box->map.mlx,
			"./img/kame01L.xpm", &box->img.size_img, &box->img.size_img);
	box->img.kame02r = mlx_xpm_file_to_image(box->map.mlx,
			"./img/kame02R.xpm", &box->img.size_img, &box->img.size_img);
	box->img.kame02l = mlx_xpm_file_to_image(box->map.mlx,
			"./img/kame02L.xpm", &box->img.size_img, &box->img.size_img);
	box->img.kame03r = mlx_xpm_file_to_image(box->map.mlx,
			"./img/kame03R.xpm", &box->img.size_img, &box->img.size_img);
	box->img.kame03l = mlx_xpm_file_to_image(box->map.mlx,
			"./img/kame03L.xpm", &box->img.size_img, &box->img.size_img);
}

void	take_img02(t_all *box)
{
	box->img.enemy = mlx_xpm_file_to_image(box->map.mlx, "./img/enemy1R.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.droid17 = mlx_xpm_file_to_image(box->map.mlx, "./img/C17R.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.droid18 = mlx_xpm_file_to_image(box->map.mlx, "./img/C18R.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.mini = mlx_xpm_file_to_image(box->map.mlx, "./img/mini1R.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.back = mlx_xpm_file_to_image(box->map.mlx, "./img/back.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.exit01 = mlx_xpm_file_to_image(box->map.mlx, "./img/e01.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.exit02 = mlx_xpm_file_to_image(box->map.mlx, "./img/e02.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.exit03 = mlx_xpm_file_to_image(box->map.mlx, "./img/e03.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.exit04 = mlx_xpm_file_to_image(box->map.mlx, "./img/e04.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.wall = mlx_xpm_file_to_image(box->map.mlx, "./img/wall.xpm",
			&box->img.size_img, &box->img.size_img);
	take_img03(box);
}

void	take_img01(t_all *box)
{
	box->img.coll1 = mlx_xpm_file_to_image(box->map.mlx, "./img/A.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.coll2 = mlx_xpm_file_to_image(box->map.mlx, "./img/B.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.coll3 = mlx_xpm_file_to_image(box->map.mlx, "./img/C.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.coll4 = mlx_xpm_file_to_image(box->map.mlx, "./img/D.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.coll5 = mlx_xpm_file_to_image(box->map.mlx, "./img/F.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.coll6 = mlx_xpm_file_to_image(box->map.mlx, "./img/G.xpm",
			&box->img.size_img, &box->img.size_img);
	box->img.coll7 = mlx_xpm_file_to_image(box->map.mlx, "./img/H.xpm",
			&box->img.size_img, &box->img.size_img);
	take_img02(box);
}
