#ifndef IMAGE_H
#define IMAGE_H

#include "cuda_runtime.h"

#include <stdint.h>
#include "constants.h"

#include "image_types/bmp.h"

struct image_t {
    const char *filepath;

    int width;
    int height;
    
    int bytes_per_pixel;

    uint8_t *data;
};

int __host__ read_image(struct image_t *image, const char *filepath);
int __host__ cleanup_image(struct image_t *image);

#endif
