#include "cub3d.h"

int main()
{
    t_vars	var;
	t_map	*map;

    window_settings(&var, SIZE_X, SIZE_Y);
    mlx_loop(var.mlx);
	return (0);
}