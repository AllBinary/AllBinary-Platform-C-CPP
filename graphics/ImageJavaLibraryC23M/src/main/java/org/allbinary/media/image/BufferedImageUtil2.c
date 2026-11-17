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

typedef struct BufferedImageUtil2 BufferedImageUtil2;
struct BufferedImageUtil2 {
    ImageUtil* imageUtil;
};

static BufferedImageUtil2* BufferedImageUtil2_instance;

BufferedImageUtil2* BufferedImageUtil2_new(void);
BufferedImageUtil2* BufferedImageUtil2_getInstance(void);
BufferedImage* BufferedImageUtil2_createSpriteImage(BufferedImageUtil2* this, BufferedImage** bufferedImageArray);

// Static fields with runtime initializers: call this once at startup
void BufferedImageUtil2_staticInit(void) {
    BufferedImageUtil2_instance = BufferedImageUtil2_new();
}

static void BufferedImageUtil2_initFields(BufferedImageUtil2* this) {
    this->imageUtil = ImageUtil_getInstance();
}

void BufferedImageUtil2_init(BufferedImageUtil2* this) {
    BufferedImageUtil2_initFields(this);
}

BufferedImageUtil2* BufferedImageUtil2_new(void) {
    BufferedImageUtil2* this = calloc(1, sizeof(BufferedImageUtil2));
    BufferedImageUtil2_init(this);
    return this;
}


BufferedImageUtil2* BufferedImageUtil2_getInstance(void) {
        return BufferedImageUtil2_instance;
}


BufferedImage* BufferedImageUtil2_createSpriteImage(BufferedImageUtil2* this, BufferedImage** bufferedImageArray) {
        int32_t columns = java_array_length(bufferedImageArray);
        int32_t max = columns;
        int32_t rows = 0;
        if (java_array_length(bufferedImageArray) < columns) {
            columns = java_array_length(bufferedImageArray);
        }
        rows = (java_array_length(bufferedImageArray) / columns);
        if (java_array_length(bufferedImageArray) % columns != 0) {
            rows++;
        }
        BufferedImage* bufferedImage = ImageUtil_create(this->imageUtil, JAVA_CALL(bufferedImageArray[0], getWidth, nullptr) * columns, JAVA_CALL(bufferedImageArray[0], getHeight, nullptr) * rows);
        Graphics2D* g = BufferedImage_createGraphics(bufferedImage);
        int32_t columnIndex = 0;
        int32_t rowIndex = 0;
        for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
            if (index / max != 0 && index % max == 0) {
                rowIndex++;
                columnIndex = 0;
            }
            Graphics2D_drawImage(g, bufferedImageArray[index], JAVA_CALL(bufferedImageArray[index], getWidth, nullptr) * columnIndex, JAVA_CALL(bufferedImageArray[index], getHeight, nullptr) * rowIndex, JAVA_CALL(bufferedImageArray[index], getWidth, nullptr), JAVA_CALL(bufferedImageArray[index], getHeight, nullptr), nullptr);
            columnIndex++;
        }
        Graphics2D_dispose(g);
        return bufferedImage;
}

