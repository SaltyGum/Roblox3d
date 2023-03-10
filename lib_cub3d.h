/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_cub3d.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:51:19 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/02/13 13:30:27 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_CUB3D_H
# define LIB_CUB3D_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "mlx_linux/mlx.h"

# define WIDTH 800.0
# define HEIGHT 800.0

// BUTTONS SETUP

// ARROWS
# define A_UP 65362
# define A_DOWN 65364
# define A_LEFT 65361
# define A_RIGHT 65363
# define W 119
# define A 97
# define S 115
# define D 100

// SCROLLING
# define SCRL_UP 4
# define SCRL_DOWN 5
// COLOR CHANGE HELP PANEL AND RESET
# define C_BUT 99
# define R_BUT 114
// WINDOW CLOSE
# define ESC_BUT 65307
# define WIN_X 17

typedef struct s_data
{
	char	*type;
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_cub3d;

int	ch_ose(int key, t_cub3d *blk);
int	clk_act(int key, int x, int y, t_cub3d *blk);
int	ft_close(t_cub3d *blk);



#endif
