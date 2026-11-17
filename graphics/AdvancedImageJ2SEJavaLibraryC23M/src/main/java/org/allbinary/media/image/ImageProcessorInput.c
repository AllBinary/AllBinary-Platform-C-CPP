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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "java/io/File.h"

typedef struct ImageProcessorInput ImageProcessorInput;
struct ImageProcessorInput {
    BufferedImage** bufferedImageArray;
    File** files;
};


ImageProcessorInput* ImageProcessorInput_new(File** files, BufferedImage** bufferedImageArray);

void ImageProcessorInput_init(ImageProcessorInput* this, File** files, BufferedImage** bufferedImageArray);
BufferedImage** ImageProcessorInput_getBufferedImageArray(ImageProcessorInput* this);
File** ImageProcessorInput_getFiles(ImageProcessorInput* this);

static void ImageProcessorInput_initFields(ImageProcessorInput* this) {
    
    
}


void ImageProcessorInput_init(ImageProcessorInput* this, File** files, BufferedImage** bufferedImageArray) {
        
        ImageProcessorInput_initFields(this);
        this->bufferedImageArray = bufferedImageArray;
        this->files = files;
}

ImageProcessorInput* ImageProcessorInput_new(File** files, BufferedImage** bufferedImageArray) {
    ImageProcessorInput* this = calloc(1, sizeof(ImageProcessorInput));
    ImageProcessorInput_init(this, files, bufferedImageArray);
    return this;
}


BufferedImage** ImageProcessorInput_getBufferedImageArray(ImageProcessorInput* this) {
        return this->bufferedImageArray;
}


File** ImageProcessorInput_getFiles(ImageProcessorInput* this) {
        return this->files;
}

