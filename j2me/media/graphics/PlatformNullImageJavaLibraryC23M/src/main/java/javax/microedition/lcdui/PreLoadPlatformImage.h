#ifndef JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H
#define JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H
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
typedef struct PlatformImage PlatformImage;
#include "javax/microedition/lcdui/PlatformImage.h"

//PlatformNullImageJavaLibrary
typedef struct PreLoadPlatformImage PreLoadPlatformImage;
struct PreLoadPlatformImage {
    PlatformImage base;
};


PreLoadPlatformImage* PreLoadPlatformImage_new(void);
void PreLoadPlatformImage_init(PreLoadPlatformImage* this);

PreLoadPlatformImage* PreLoadPlatformImage_getInstance(void);
#ifndef PreLoadPlatformImage_getImage
#define PreLoadPlatformImage_getImage PlatformImage_getImage
#endif
#ifndef PreLoadPlatformImage_getSurfaceWidth
#define PreLoadPlatformImage_getSurfaceWidth PlatformImage_getSurfaceWidth
#endif
#ifndef PreLoadPlatformImage_getSurfaceHeight
#define PreLoadPlatformImage_getSurfaceHeight PlatformImage_getSurfaceHeight
#endif
#ifndef PreLoadPlatformImage_getWidth
#define PreLoadPlatformImage_getWidth PlatformImage_getWidth
#endif
#ifndef PreLoadPlatformImage_getHeight
#define PreLoadPlatformImage_getHeight PlatformImage_getHeight
#endif
#ifndef PreLoadPlatformImage_getGraphics
#define PreLoadPlatformImage_getGraphics PlatformImage_getGraphics
#endif
#ifndef PreLoadPlatformImage_drawImage
#define PreLoadPlatformImage_drawImage PlatformImage_drawImage
#endif
#ifndef PreLoadPlatformImage_drawRegion
#define PreLoadPlatformImage_drawRegion PlatformImage_drawRegion
#endif
#ifndef PreLoadPlatformImage_getRGB
#define PreLoadPlatformImage_getRGB PlatformImage_getRGB
#endif
#ifndef PreLoadPlatformImage_setRGB
#define PreLoadPlatformImage_setRGB PlatformImage_setRGB
#endif
#ifndef PreLoadPlatformImage_getData
#define PreLoadPlatformImage_getData PlatformImage_getData
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PreLoadPlatformImage_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PreLoadPlatformImage_register(void);


#endif // JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_H
