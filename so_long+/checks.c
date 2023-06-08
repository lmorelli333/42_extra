/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <lmorelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:44:51 by lmorelli          #+#    #+#             */
/*   Updated: 2023/06/08 22:50:45 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_av(char *av)
{
	char	av_ext[5];

	if (ft_strlen(av) < 4)
	{
		ft_printf("Error: file name too short\n");
		exit(1);
	}
	ft_strlcpy(av_ext, (const char *)(av + ft_strlen((const char *)av) - 4), 5);
	av_ext[4] = '\0';
	if (ft_strcmp(av_ext, ".ber") != 0)
	{
		ft_printf("Error : the file extension is not .ber\n", av);
		exit (1);
	}
}

void	check_rect(t_all *box)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen((const char *)box->map.mapm[0]);
	i = 0;
	while (box->map.mapm[i])
	{
		j = 0;
		while (box->map.mapm[i][j])
			j++;
		if (j != len)
		{
			ft_printf("Error, your map is not rectangular\n");
			exit (1);
		}
		i++;
	}
	check_wall(box);
}

void	check_letters02(t_all *box)
{
	int	i;
	int	c;
	int	e;
	int	p;

	i = 0;
	c = 0;
	e = 0;
	p = 0;
	while (box->map.mapv[i])
	{
		if (box->map.mapv[i] == 'A' || box->map.mapv[i] == 'B'
			|| box->map.mapv[i] == 'C' || box->map.mapv[i] == 'D'
			|| box->map.mapv[i] == 'F' || box->map.mapv[i] == 'G'
			|| box->map.mapv[i] == 'H')
			c++;
		if (box->map.mapv[i] == 'E')
			e++;
		if (box->map.mapv[i] == 'P')
			p++;
		i++;
	}
	if (!c || !e || !p)
	{
		ft_printf("Error, you don't have at least one collectible, one exit, and one player in your map\n");
		exit (1);
	}
	box->img.victory_obj = c;
}

void	check_letters01(t_all *box)
{
	int	i;

	i = 0;
	while (box->map.mapv[i])
	{
		if (box->map.mapv[i] != '0' && box->map.mapv[i] != '1'
			&& box->map.mapv[i] != 'A' && box->map.mapv[i] != 'B'
			&& box->map.mapv[i] != 'C' && box->map.mapv[i] != 'D'
			&& box->map.mapv[i] != 'F' && box->map.mapv[i] != 'G'
			&& box->map.mapv[i] != 'H' && box->map.mapv[i] != 'E'
			&& box->map.mapv[i] != 'J' && box->map.mapv[i] != 'I'
			&& box->map.mapv[i] != 'K' && box->map.mapv[i] != 'P'
			&& box->map.mapv[i] != 'N' && box->map.mapv[i] != '7'
			&& box->map.mapv[i] != '8' && box->map.mapv[i] != 'M'
			&& box->map.mapv[i] != '\n')
		{
			ft_printf("Error\n");
			exit (1);
		}
		i++;
	}
	check_letters02(box);
}

void	check_wall(t_all *box)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen((const char *)box->map.mapm[0]) - 1;
	while (box->map.mapm[i])
	{
		if (box->map.mapm[i][0] != '1' || box->map.mapm[i][len] != '1')
		{	
			ft_printf("Error, your map is not bounded by walls\n");
			exit (1);
		}
		i++;
	}
	i = 0;
	while (box->map.mapm[i])
	{
		if (box->map.mapm[i][0] != '1' ||
		box->map.mapm[i][ft_strlen((const char *)box->map.mapm[i]) - 1] != '1')
		{	
			ft_printf("Error, your map is not bounded by walls\n");
			exit (1);
		}
		i++;
	}
	check_letters01(box);
}
