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

# define SIZE_X 600
# define SIZE_Y 500


typedef struct s_map
{
    int **map;
    int map_width;
    int map_height;
} t_map;

typedef struct s_player
{
    double  pos_x;     // Oyuncunun haritadaki X konumu (örn: 3.5)
    double  pos_y;     // Oyuncunun haritadaki Y konumu (örn: 3.5)
    double  dir_x;     // Bakış yönü X bileşeni
    double  dir_y;     // Bakış yönü Y bileşeni
    double  plane_x;   // Kamera düzlemi X bileşeni (FOV genişliği)
    double  plane_y;   // Kamera düzlemi Y bileşeni
}   t_player;


typedef struct s_vars
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
    t_player player;
    t_map   map;
} t_vars;


int	close_window_cross(t_vars *var);
int	close_window_esc(int key, t_vars *var);
void	window_settings(t_vars *var, int x_len, int y_len);
void my_mlx_pixel_put(t_vars *var, int x, int y, int color);
void init_map(t_map *map);
void init_player(t_player *player);


#endif
