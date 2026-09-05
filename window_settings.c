#include "cub3d.h"

int	close_window_cross(t_vars *var)
{
	mlx_destroy_image(var->mlx, var->img);
	mlx_destroy_window(var->mlx, var->win);
	mlx_destroy_display(var->mlx);
	free(var->mlx);
	exit(0);
	return (0);
}

int	close_window_esc(int key, t_vars *var)
{
	if (key == 65307)
		close_window_cross(var);
	return (0);
}

void	window_settings(t_vars *var,  int x_len, int y_len)
{
	var->mlx = mlx_init();
	var->win = mlx_new_window(var->mlx, SIZE_X, SIZE_Y, "CUB3D");
	var->img = mlx_new_image(var->mlx, SIZE_X, SIZE_Y);
	var->addr
		= mlx_get_data_addr(var->img, &var->bpp, &var->line_len, &var->endian);
	// buraya haritayı buffer a yazan fonksiyon gelecek

    //
	mlx_put_image_to_window(var->mlx, var->win, var->img, 0, 0);
	mlx_hook(var->win, 17, 0, close_window_cross, var);
	mlx_key_hook(var->win, close_window_esc, var);
}