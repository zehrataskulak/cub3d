#include "cub3d.h"

int main()
{
    t_vars	var;
	t_map	*map;

    window_settings(&var, 600, 500);
    mlx_loop(var.mlx);
	return (0);
}