#ifndef JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H
#define JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H
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
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NullImage NullImage;
typedef struct Image Image;
typedef struct Graphics Graphics;
typedef struct NullUtil NullUtil;

//PlatformNullImageJavaLibrary
typedef struct PlatformImage PlatformImage;
struct PlatformImage {
    char unused;
};


PlatformImage* PlatformImage_new(void);
void PlatformImage_init(PlatformImage* this);

void* PlatformImage_getImage(PlatformImage* this, void* graphicsSurface2);

int32_t PlatformImage_getSurfaceWidth(PlatformImage* this, void* graphicsSurface2, int32_t width);

int32_t PlatformImage_getSurfaceHeight(PlatformImage* this, void* graphicsSurface2, int32_t height);

int32_t PlatformImage_getWidth(PlatformImage* this, Image* image, int32_t width);

int32_t PlatformImage_getHeight(PlatformImage* this, Image* image, int32_t height);

Graphics* PlatformImage_getGraphics(PlatformImage* this, void* graphicsSurface, int32_t width, int32_t height, Image* image);

void PlatformImage_drawImage(PlatformImage* this, Image* image, int32_t x, int32_t y, int32_t anchor, Graphics* g2, void* g);

void PlatformImage_drawRegion(PlatformImage* this, Image* image, int32_t x_src, int32_t y_src, int32_t width, int32_t height, int32_t transform, int32_t x_dst, int32_t y_dst, int32_t anchor, Graphics* g);

void PlatformImage_getRGB(PlatformImage* this, int32_t* argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image);

void PlatformImage_setRGB(PlatformImage* this, int32_t* argb, int32_t offset, int32_t scanlength, int32_t x, int32_t y, int32_t width, int32_t height, Image* image);

int32_t* PlatformImage_getData(PlatformImage* this, Image* image);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformImage_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformImage_register(void);


#endif // JAVAX_MICROEDITION_LCDUI_PLATFORMIMAGE_H
