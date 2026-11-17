// Generated Code Do Not Modify
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ImageItem ImageItem;
struct ImageItem {
    char unused;
};


ImageItem* ImageItem_new(void);

void ImageItem_init(ImageItem* this) {
}

ImageItem* ImageItem_new(void) {
    ImageItem* this = calloc(1, sizeof(ImageItem));
    ImageItem_init(this);
    return this;
}

