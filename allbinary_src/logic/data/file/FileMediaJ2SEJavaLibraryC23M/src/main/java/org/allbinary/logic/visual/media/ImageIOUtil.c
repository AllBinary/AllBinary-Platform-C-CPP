// Generated Code Do Not Modify
// package org.allbinary.logic.visual.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "java/awt/image/RenderedImage.h"
// #include "javax/imageio/ImageIO.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"

typedef struct ImageIOUtil ImageIOUtil;
struct ImageIOUtil {
    char unused;
};


ImageIOUtil* ImageIOUtil_new(void);
BufferedImage* ImageIOUtil_read(AbFile* file);
bool ImageIOUtil_write(RenderedImage* renderedImage, const char* name, AbFile* file);

void ImageIOUtil_init(ImageIOUtil* this) {
}

ImageIOUtil* ImageIOUtil_new(void) {
    ImageIOUtil* this = calloc(1, sizeof(ImageIOUtil));
    ImageIOUtil_init(this);
    return this;
}


// throws Exception
BufferedImage* ImageIOUtil_read(AbFile* file) {
        return ImageIO_read(AbFileNativeUtil_get(file));
}


// throws Exception
bool ImageIOUtil_write(RenderedImage* renderedImage, const char* name, AbFile* file) {
        return ImageIO_write(renderedImage, name, AbFileNativeUtil_get(file));
}

