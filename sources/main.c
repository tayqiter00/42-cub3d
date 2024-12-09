/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42kl..edu.my>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:39:11 by qtay              #+#    #+#             */
/*   Updated: 2024/12/09 17:36:58 by nchok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		return (err_msg("Invalid num of arguments!"), EXIT_FAILURE);
	init_data(&data);
	if (check_file(av[1]) == FAILURE)
		return (EXIT_FAILURE);
	if (get_file(av[1], &data) == FAILURE)
		return (EXIT_FAILURE);
	if (check_map(&data) == FAILURE)
		return (EXIT_FAILURE);
	init_player_dir(&data.player);
	init_mlx(&data);
	load_texture_img(&data);
	render_raycast(&data);
	mlx_loop(data.mlx);
	return (EXIT_SUCCESS);
}
