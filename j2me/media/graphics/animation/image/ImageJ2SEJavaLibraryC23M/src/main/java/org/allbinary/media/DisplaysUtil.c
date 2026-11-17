/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/Dimension.h"
// #include "java/awt/DisplayMode.h"
// #include "java/awt/GraphicsDevice.h"
// #include "java/awt/GraphicsEnvironment.h"
// #include "java/awt/Toolkit.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"

typedef struct DisplaysUtil DisplaysUtil;
struct DisplaysUtil {
    char unused;
};

static DisplaysUtil* DisplaysUtil_instance;

DisplaysUtil* DisplaysUtil_new(void);
DisplaysUtil* DisplaysUtil_getInstance(void);
Rectangle* DisplaysUtil_getPrimaryScreenSize(DisplaysUtil* this);
Rectangle** DisplaysUtil_getScreenSizesAsRectangleArray(DisplaysUtil* this);

// Static fields with runtime initializers: call this once at startup
void DisplaysUtil_staticInit(void) {
    DisplaysUtil_instance = DisplaysUtil_new();
}

void DisplaysUtil_init(DisplaysUtil* this) {
}

DisplaysUtil* DisplaysUtil_new(void) {
    DisplaysUtil* this = calloc(1, sizeof(DisplaysUtil));
    DisplaysUtil_init(this);
    return this;
}


DisplaysUtil* DisplaysUtil_getInstance(void) {
        return DisplaysUtil_instance;
}


Rectangle* DisplaysUtil_getPrimaryScreenSize(DisplaysUtil* this) {
        Dimension* dimension = JAVA_CALL(Toolkit_getDefaultToolkit(), getScreenSize);
        return Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, dimension->width, dimension->height);
}


Rectangle** DisplaysUtil_getScreenSizesAsRectangleArray(DisplaysUtil* this) {
        GraphicsEnvironment* graphicsEnvironment = GraphicsEnvironment_getLocalGraphicsEnvironment();
        GraphicsDevice** graphicsDeviceArray = GraphicsEnvironment_getScreenDevices(graphicsEnvironment);
        GraphicsDevice* graphicsDevice = nullptr;
        DisplayMode* displayMode = nullptr;
        Rectangle* rectangle = nullptr;
        int32_t size = java_array_length(graphicsDeviceArray);
        Rectangle** rectangleArray = ((Rectangle**) java_array_new(sizeof(Rectangle*), size));
        for (int32_t index = 0; index < size; index++) {
            graphicsDevice = graphicsDeviceArray[index];
            displayMode = GraphicsDevice_getDisplayMode(graphicsDevice);
            rectangle = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, DisplayMode_getWidth(displayMode), DisplayMode_getHeight(displayMode));
            rectangleArray[index] = rectangle;
        }
        return rectangleArray;
}

