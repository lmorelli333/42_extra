/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:59:06 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:12:50 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	utils(t_all *box)
{
	box->img.size_img = 64;
	box->img.victory_obj = 0;
	box->moves.counter = 0;
	box->img.patrol_flag = 1;
}

void	fix_counter(t_all *box)
{
	box->img.display_moves = ft_itoa(box->moves.counter);
	mlx_string_put(box->map.mlx, box->map.window, 20, 30, 0xFFFFFF, "MOVES : ");
	mlx_string_put(box->map.mlx, box->map.window, 100, 30, 0xFFFFFF,
		box->img.display_moves);
	free(box->img.display_moves);
}

void	print_counter(t_all *box)
{
	box->img.display_moves = ft_itoa(box->moves.counter);
	mlx_string_put(box->map.mlx, box->map.window, 20, 30, 0xFFFFFF, "MOVES : ");
	mlx_string_put(box->map.mlx, box->map.window, 100, 30, 0xFFFFFF,
		box->img.display_moves);
	box->moves.counter++;
	free(box->img.display_moves);
}

int	main(int ac, char **av)
{
	t_all	box;

	if (ac != 2)
	{
		ft_printf("Error\n%s\n", strerror(EINVAL));
		exit (1);
	}
	utils(&box);
	check_av(av[1]);
	read_map(av[1], &box);
	player_position(&box);
	check_rect(&box);
	free(box.map.mapv);
	window(&box);
	take_img01(&box);
	box.img.current_player01 = box.img.player01r;
	box.img.current_player02 = box.img.player02r;
	box.img.current_player03 = box.img.player03r;
	put_img01(&box);
	kill(&box);
	mlx_key_hook(box.map.window, key_input, &box);
	mlx_loop_hook(box.map.mlx, enemy_patrol, &box);
	mlx_loop(box.map.mlx);
	free_memory01(&box);
	return (0);
}
