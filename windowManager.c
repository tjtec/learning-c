#include <unistd.h>
#include "minilibx-linux/mlx.h"
#include <stdio.h>

int main(){
    write(1,"Hi\n",3);
    void *mlx;
    void *window;
    mlx = mlx_init();
    window = mlx_new_window(mlx, 200, 200, "Hi");

    void *image;
    int height;
    int length; 
    image = mlx_xpm_file_to_image(mlx, "wall40.xpm", &height, &length);
    //mlx_put_image_to_window (mlx, window, image, 0, 0);
    //printf("%i %i\n", height, length);
    mlx_pixel_put(mlx, window, 10, 10, 0x00FFFFFF);

    mlx_loop(mlx);

}
