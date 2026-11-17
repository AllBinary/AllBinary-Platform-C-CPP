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
// package org.allbinary.input.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/media/image/capture/CapturedImageInputOutput.h"
#include "org/allbinary/media/image/comparison/ComparisonImageInputOutput.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesImageInputOutput.h"
#include "org/allbinary/media/image/io/ImageIOInterface.h"

typedef struct InputImageIOInterfaceFactory InputImageIOInterfaceFactory;
struct InputImageIOInterfaceFactory {
    char unused;
};


InputImageIOInterfaceFactory* InputImageIOInterfaceFactory_new(void);

void InputImageIOInterfaceFactory_init(InputImageIOInterfaceFactory* this);
ImageIOInterface* InputImageIOInterfaceFactory_getInstance(InputImageType* imageType);


void InputImageIOInterfaceFactory_init(InputImageIOInterfaceFactory* this) {
}

InputImageIOInterfaceFactory* InputImageIOInterfaceFactory_new(void) {
    InputImageIOInterfaceFactory* this = calloc(1, sizeof(InputImageIOInterfaceFactory));
    InputImageIOInterfaceFactory_init(this);
    return this;
}


// throws Exception
ImageIOInterface* InputImageIOInterfaceFactory_getInstance(InputImageType* imageType) {
        if (imageType == InputImageType_CAPTURE) {
            return CapturedImageInputOutput_new();
        } else if (imageType == InputImageType_COMPARISON) {
            return ComparisonImageInputOutput_new();
        } else if (imageType == InputImageType_MOTION) {
            return MotionRectanglesImageInputOutput_new();
        } else {
            java_throw(java_exception_new("Exception", java_concat("No ImageIOInterface for: ", InputImageType_toString(imageType))));
        }
}

