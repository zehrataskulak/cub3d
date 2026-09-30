#include "cub3d.h"

void my_mlx_pixel_put(t_vars *var, int x, int y, int color)
{
    char *dst;

    if (x < 0 || x >= SIZE_X || y < 0 || y >= SIZE_Y)
        return ;
    dst = var->addr + (y * var->line_len + x * (var->bpp / 8));
    *(unsigned int *)dst = color;
}

