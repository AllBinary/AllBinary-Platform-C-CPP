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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct IndexedAnimationToImageArrayUtil IndexedAnimationToImageArrayUtil;
struct IndexedAnimationToImageArrayUtil {
    char unused;
};


IndexedAnimationToImageArrayUtil* IndexedAnimationToImageArrayUtil_new(void);
Image** IndexedAnimationToImageArrayUtil_getInstance(int32_t width, int32_t height, IndexedAnimation* sequentialAnimationInterface);

void IndexedAnimationToImageArrayUtil_init(IndexedAnimationToImageArrayUtil* this) {
}

IndexedAnimationToImageArrayUtil* IndexedAnimationToImageArrayUtil_new(void) {
    IndexedAnimationToImageArrayUtil* this = calloc(1, sizeof(IndexedAnimationToImageArrayUtil));
    IndexedAnimationToImageArrayUtil_init(this);
    return this;
}


// throws Exception
Image** IndexedAnimationToImageArrayUtil_getInstance(int32_t width, int32_t height, IndexedAnimation* sequentialAnimationInterface) {
        int32_t size = IndexedAnimation_getAnimationSize(sequentialAnimationInterface);
        Image** imageArray = ((Image**) java_array_new(sizeof(Image*), size));
        for (int32_t index = 0; index < size; index++) {
            IndexedAnimation_setFrame(sequentialAnimationInterface, index);
            imageArray[index] = AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil_getInstance(), width, height, sequentialAnimationInterface);
        }
        return imageArray;
}

