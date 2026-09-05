#include "cub3d.h"

void init_player(t_player *player)
{
    // 1. Oyuncuyu haritada bir hücrenin ortasına koy
    player->pos_x = 3.5;
    player->pos_y = 3.5;

    // 2. Yönü Kuzey (Yukarı) olarak ayarla
    player->dir_x = 0.0;
    player->dir_y = -1.0;

    // 3. Kamera düzlemini yöne dik (Sağa bakacak şekilde) ve 66 derece FOV ayarla
    player->plane_x = 0.66;
    player->plane_y = 0.0;
}