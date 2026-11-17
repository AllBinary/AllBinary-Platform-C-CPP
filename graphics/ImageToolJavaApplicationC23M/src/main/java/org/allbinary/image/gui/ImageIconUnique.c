/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.image.gui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/image/gui/ImageIcon.h"

typedef struct ImageIconUnique ImageIconUnique;
struct ImageIconUnique {
    ImageIcon base;
    int32_t id;
};


ImageIconUnique* ImageIconUnique_new(BufferedImage* bufferedImage, int32_t index);

void ImageIconUnique_init(ImageIconUnique* this, BufferedImage* bufferedImage, int32_t index);
int32_t ImageIconUnique_getId(ImageIconUnique* this);
void ImageIconUnique_setId(ImageIconUnique* this, int32_t id);

static void ImageIconUnique_initFields(ImageIconUnique* this) {
    this->id = 0;
}


void ImageIconUnique_init(ImageIconUnique* this, BufferedImage* bufferedImage, int32_t index) {
        ImageIcon_init(&this->base, bufferedImage);
        ImageIconUnique_initFields(this);
        ImageIconUnique_setId(this, index);
}

ImageIconUnique* ImageIconUnique_new(BufferedImage* bufferedImage, int32_t index) {
    ImageIconUnique* this = calloc(1, sizeof(ImageIconUnique));
    ImageIconUnique_init(this, bufferedImage, index);
    return this;
}


int32_t ImageIconUnique_getId(ImageIconUnique* this) {
        return this->id;
}


void ImageIconUnique_setId(ImageIconUnique* this, int32_t id) {
        this->id = id;
}

