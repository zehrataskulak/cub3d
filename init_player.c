#include "cub3d.h"

void init_fake_data(t_mapdata *data)
{
    // 1. Texture Yolları (Sahte yollar, test için resim dosyaları oluşturmalısın)
    data->tex_no = "./textures/north.xpm";
    data->tex_so = "./textures/south.xpm";
    data->tex_we = "./textures/west.xpm";
    data->tex_ea = "./textures/east.xpm";

    // 2. Renkler (RGB'den tek bir int değere dönüştürülmüş hali: 0xRRGGBB)
    data->floor_color = 0x5C4033;   // Kahverengi tonu
    data->ceiling_color = 0x87CEEB; // Gökyüzü mavisi tonu

    // 3. Basit 5x5 Kapalı Test Haritası
    // 1: Duvar, 0: Boşluk, N: Oyuncu
    data->map_width = 5;
    data->map_height = 5;
    
    data->map = (char **)malloc(sizeof(char *) * data->map_height);
    data->map[0] = "11111";
    data->map[1] = "10001";
    data->map[2] = "10N01"; // Oyuncu haritanın tam ortasında (x:2, y:2)
    data->map[3] = "10001";
    data->map[4] = "11111";

    // 4. Oyuncu Başlangıç Verisi
    // Haritada 'N' karakterini bulup koordinatlarını buraya atamalıyız.
    // DDA algoritmasının oyuncuyu karelerin tam merkezinden başlatması için +0.5 ekleriz.
    data->p_x = 2.5; 
    data->p_y = 2.5;
    data->p_dir = 'N';
}