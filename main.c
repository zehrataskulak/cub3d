#include "cub3d.h"

int main()
{
    t_vars	var;
    t_mapdata	map;

    window_settings(&var, SIZE_X, SIZE_Y);

    init_fake_data(&map);

    mlx_loop(var.mlx);
	return (0);
}