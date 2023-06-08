/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:02:03 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:16:59 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_open(t_all *box)
{
	box->img.exit01 = mlx_xpm_file_to_image(box->map.mlx,
			"./img/E1.xpm", &box->img.size_img, &box->img.size_img);
	box->img.exit02 = mlx_xpm_file_to_image(box->map.mlx,
			"./img/E2.xpm", &box->img.size_img, &box->img.size_img);
	box->img.exit03 = mlx_xpm_file_to_image(box->map.mlx,
			"./img/E3.xpm", &box->img.size_img, &box->img.size_img);
	box->img.exit04 = mlx_xpm_file_to_image(box->map.mlx,
			"./img/E4.xpm", &box->img.size_img, &box->img.size_img);
}

void	put_img04(int i, int j, t_all *box)
{
	if (box->map.mapm[i][j] == '0')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.back, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'A')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll1, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'B')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll2, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'C')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll3, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'D')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll4, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'F')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll5, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'G')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll6, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'H')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.coll7, j * 64, (i + 1) * 64);
}

void	put_img03(int i, int j, t_all *box)
{
	if (box->map.mapm[i][j] == 'N')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.enemy, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'P')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.current_player01, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == '7')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.droid17, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == '8')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.droid18, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'M')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.mini, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'A' || box->map.mapm[i][j] == 'B'
			|| box->map.mapm[i][j] == 'C' || box->map.mapm[i][j] == 'D'
			|| box->map.mapm[i][j] == 'F' || box->map.mapm[i][j] == 'G'
			|| box->map.mapm[i][j] == 'H' || box->map.mapm[i][j] == '0')
		put_img04(i, j, box);
}

void	put_img02(int i, int j, t_all *box)
{
	if (box->map.mapm[i][j] == 'E')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.exit01, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'J')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.exit02, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'I')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.exit03, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'K')
		mlx_put_image_to_window(box->map.mlx, box->map.window,
			box->img.exit04, j * 64, (i + 1) * 64);
	else if (box->map.mapm[i][j] == 'A' || box->map.mapm[i][j] == 'B'
			|| box->map.mapm[i][j] == 'C' || box->map.mapm[i][j] == 'D'
			|| box->map.mapm[i][j] == 'F' || box->map.mapm[i][j] == 'G'
			|| box->map.mapm[i][j] == 'H' || box->map.mapm[i][j] == 'N'
			|| box->map.mapm[i][j] == '7' || box->map.mapm[i][j] == '8'
			|| box->map.mapm[i][j] == 'M' || box->map.mapm[i][j] == 'P'
			|| box->map.mapm[i][j] == '0')
		put_img03(i, j, box);
}

void	put_img01(t_all *box)
{
	int	i;
	int	j;

	i = -1;
	while (box->map.mapm[++i])
	{
		j = -1;
		while (box->map.mapm[i][++j])
		{
			if (box->map.mapm[i][j] == '1')
				mlx_put_image_to_window(box->map.mlx, box->map.window,
					box->img.wall, j * 64, (i + 1) * 64);
			else if (box->map.mapm[i][j] == 'E' || box->map.mapm[i][j] == 'J'
				|| box->map.mapm[i][j] == 'I' || box->map.mapm[i][j] == 'K'
				|| box->map.mapm[i][j] == 'A' || box->map.mapm[i][j] == 'B'
				|| box->map.mapm[i][j] == 'C' || box->map.mapm[i][j] == 'D'
				|| box->map.mapm[i][j] == 'F' || box->map.mapm[i][j] == 'G'
				|| box->map.mapm[i][j] == 'H' || box->map.mapm[i][j] == 'N'
				|| box->map.mapm[i][j] == '7' || box->map.mapm[i][j] == '8'
				|| box->map.mapm[i][j] == 'M' || box->map.mapm[i][j] == 'P'
				|| box->map.mapm[i][j] == '0')
				put_img02(i, j, box);
		}
	}
}
