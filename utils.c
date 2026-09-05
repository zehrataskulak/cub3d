#include "cub3d.h"

void my_mlx_pixel_put(t_vars *var, int x, int y, int color)
{
    char *dst;

    if (x < 0 || x >= SIZE_X || y < 0 || y >= SIZE_Y)
        return ;
    dst = var->addr + (y * var->line_len + x * (var->bpp / 8));
    *(unsigned int *)dst = color;
}

// this function is not an arbitrary function. i'll use this map until we truely read normal maps from file

void init_map(t_map *map)
{
    int mock[8][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 1, 0, 0, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 1, 1, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };
    int y;
    int x;

    map->map_width = 8;
    map->map_height = 8;

    // 1. Önce 8 adet 'int *' (satır) tutacak ana diziyi oluşturuyoruz
    map->map = malloc(sizeof(int *) * 8);

    y = 0;
    while (y++ < 8)
    {
        // 2. Her satırın içine 8 adet 'int' (sütun) koyacak yeri ayırıyoruz
        map->map[y] = malloc(sizeof(int) * 8);
        
        x = 0;
        while (x++ < 8)
            map->map[y][x] = mock[y][x]; // Şimdi güvenle kopyalayabiliriz
    }
}