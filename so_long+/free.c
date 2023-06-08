/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:00:52 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:14:26 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_memory02(t_all *box)
{
	mlx_destroy_image(box->map.mlx, box->img.enemy);
	mlx_destroy_image(box->map.mlx, box->img.droid17);
	mlx_destroy_image(box->map.mlx, box->img.droid18);
	mlx_destroy_image(box->map.mlx, box->img.mini);
	mlx_destroy_image(box->map.mlx, box->img.coll1);
	mlx_destroy_image(box->map.mlx, box->img.coll2);
	mlx_destroy_image(box->map.mlx, box->img.coll3);
	mlx_destroy_image(box->map.mlx, box->img.coll4);
	mlx_destroy_image(box->map.mlx, box->img.coll5);
	mlx_destroy_image(box->map.mlx, box->img.coll6);
	mlx_destroy_image(box->map.mlx, box->img.coll7);
	mlx_destroy_image(box->map.mlx, box->img.wall);
	mlx_destroy_image(box->map.mlx, box->img.exit01);
	mlx_destroy_image(box->map.mlx, box->img.exit02);
	mlx_destroy_image(box->map.mlx, box->img.exit03);
	mlx_destroy_image(box->map.mlx, box->img.exit04);
	mlx_destroy_image(box->map.mlx, box->img.back);
	free(box->map.mlx);
	exit(0);
}

void	free_memory01(t_all *box)
{	
	int	i;

	i = 0;
	while (box->map.mapm[i])
	{
		free(box->map.mapm[i]);
		i++;
	}
	free(box->map.mapm);
	mlx_destroy_image(box->map.mlx, box->img.player01r);
	mlx_destroy_image(box->map.mlx, box->img.player01l);
	mlx_destroy_image(box->map.mlx, box->img.player02r);
	mlx_destroy_image(box->map.mlx, box->img.player02l);
	mlx_destroy_image(box->map.mlx, box->img.player03r);
	mlx_destroy_image(box->map.mlx, box->img.player03l);
	mlx_destroy_image(box->map.mlx, box->img.kame01r);
	mlx_destroy_image(box->map.mlx, box->img.kame01l);
	mlx_destroy_image(box->map.mlx, box->img.kame02r);
	mlx_destroy_image(box->map.mlx, box->img.kame02l);
	mlx_destroy_image(box->map.mlx, box->img.kame03r);
	mlx_destroy_image(box->map.mlx, box->img.kame03l);
	free_memory02(box);
}
