/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:01:05 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 23:10:08 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "mlx/mlx.h"
# include <string.h>
# include <fcntl.h>
# include <errno.h>

typedef struct s_map
{
	void	*mlx;
	void	*window;
	char	**mapm;
	char	*mapv;
}	t_map;

typedef struct s_moves
{
	int	counter;
	int	i;
	int	j;
	int	x;
	int	y;
	int	patrol;
	int	mini_counter;
}	t_moves;

typedef struct s_image
{
	int		size_img;
	void	*current_player01;
	void	*current_player02;
	void	*current_player03;
	void	*player01r;
	void	*player01l;
	void	*player02r;
	void	*player02l;
	void	*player03r;
	void	*player03l;
	void	*kame01r;
	void	*kame01l;
	void	*kame02r;
	void	*kame02l;
	void	*kame03r;
	void	*kame03l;
	void	*enemy;
	void	*droid17;
	void	*droid18;
	void	*mini;
	void	*coll1;
	void	*coll2;
	void	*coll3;
	void	*coll4;
	void	*coll5;
	void	*coll6;
	void	*coll7;
	void	*back;
	void	*wall;
	void	*exit01;
	void	*exit02;
	void	*exit03;
	void	*exit04;
	void	*exit1;
	void	*exit2;
	void	*exit3;
	void	*exit4;
	int		victory_obj;
	char	*display_moves;
	int		patrol_flag;
}	t_image;

typedef struct s_all
{
	t_moves	moves;
	t_map	map;
	t_image	img;
}	t_all;

int		main(int ac, char **av);
void	check_av(char *av);
void	check_wall(t_all *box);
void	check_letters01(t_all *box);
void	check_letters02(t_all *box);
void	check_rect(t_all *box);
void	read_map(char *av, t_all *box);
void	move_up01(t_all *box);
void	move_up02(t_all *box);
void	move_down01(t_all *box);
void	move_down02(t_all *box);
void	move_left01(t_all *box);
void	move_left02(t_all *box);
void	move_right01(t_all *box);
void	move_right02(t_all *box);
void	move_utils(t_all *box);
void	put_img01(t_all *box);
void	put_img02(int i, int j, t_all *box);
void	put_img03(int i, int j, t_all *box);
void	put_img04(int i, int j, t_all *box);
void	exit_open(t_all *box);
void	take_img01(t_all *box);
void	take_img02(t_all *box);
void	take_img03(t_all *box);
void	window(t_all *box);
int		key_input(int k, t_all *box);
void	key_input_utils(t_all *box);
void	key_input_space(t_all *box);
void	key_input_right(t_all *box);
void	key_input_left(t_all *box);
void	free_memory01(t_all *box);
void	free_memory02(t_all *box);
void	player_position(t_all *box);
void	remaining_collect(t_all *box);
void	print_counter(t_all *box);
void	fix_counter(t_all *box);
int		enemy_patrol(t_all *box);
void	enemy_patrol_utils01(t_all *box);
void	enemy_patrol_utils02(t_all *box);
void	enemy_patrol_utils03(t_all *box);
void	enemy_patrol_utils04(t_all *box);
void	enemy_patrol_utils05(t_all *box);
void	enemy_patrol_utils06(t_all *box);
void	enemy_patrol_utils07(t_all *box);
void	enemy_patrol_utils08(t_all *box);
void	enemy_patrol_utils09(t_all *box);
void	enemy_patrol_utils10(t_all *box);
void	enemy_patrol_utils11(t_all *box);
void	enemy_patrol_utils12(t_all *box);
void	move_up_enemy(t_all *box);
void	move_down_enemy(t_all *box);
void	move_left_enemy(t_all *box);
void	move_right_enemy(t_all *box);
void	kill(t_all *box);

#endif
