/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:00:28 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/02/13 13:30:24 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_cub3d.h"

int	ch_ose(int key, t_cub3d *blk)
{
	if (key == ESC_BUT)
		ft_close(blk);
	else if (key == W)
		printf("Key WWWWWWWWWWWWWWWWWWWW\n");
	else if (key == S)
		printf("Key SSSSSSSSSSSSSSSSSSSS\n");
	else if (key == A)
		printf("Key AAAAAAAAAAAAAAAAAAAA\n");
	else if (key == D)
		printf("Key DDDDDDDDDDDDDDDDDDDD\n");
	else if (key == C_BUT)
		printf("Key CCCCCCCCCCCCCCCCCCCC\n");
	else if (key == R_BUT)
		printf("Key RRRRRRRRRRRRRRRRRRRR\n");
	else
		printf("Wrong == %d\n", key);
	return (0);
}

int	clk_act(int key, int x, int y, t_cub3d *blk)
{
	printf("Mouse key == %d\n", key);
	return (0);
}
