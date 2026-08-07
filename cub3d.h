#ifndef CUB3D_H
# define CUB3D_H

# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# include "libft/libft.h"
# include "gnl/get_next_line.h"
# include "minilibx-linux/mlx.h"

# define SIZE_X 1200
# define SIZE_Y 800

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
} t_vars;

typedef struct s_map
{

} t_map;

int	close_window_cross(t_vars *var);
int	close_window_esc(int key, t_vars *var);
void	window_settings(t_vars *var, int x_len, int y_len);


#endif
