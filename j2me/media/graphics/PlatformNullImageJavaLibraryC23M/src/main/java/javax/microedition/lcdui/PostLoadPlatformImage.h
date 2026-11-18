#ifndef JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_H
#define JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_H
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
typedef struct PostLoadPlatformImage PostLoadPlatformImage;
struct PostLoadPlatformImage {
    PlatformImage base;
};


PostLoadPlatformImage* PostLoadPlatformImage_new(void);
void PostLoadPlatformImage_init(PostLoadPlatformImage* this);

PostLoadPlatformImage* PostLoadPlatformImage_getInstance(void);
#ifndef PostLoadPlatformImage_getImage
#define PostLoadPlatformImage_getImage PlatformImage_getImage
#endif
#ifndef PostLoadPlatformImage_getSurfaceWidth
#define PostLoadPlatformImage_getSurfaceWidth PlatformImage_getSurfaceWidth
#endif
#ifndef PostLoadPlatformImage_getSurfaceHeight
#define PostLoadPlatformImage_getSurfaceHeight PlatformImage_getSurfaceHeight
#endif
#ifndef PostLoadPlatformImage_getWidth
#define PostLoadPlatformImage_getWidth PlatformImage_getWidth
#endif
#ifndef PostLoadPlatformImage_getHeight
#define PostLoadPlatformImage_getHeight PlatformImage_getHeight
#endif
#ifndef PostLoadPlatformImage_getGraphics
#define PostLoadPlatformImage_getGraphics PlatformImage_getGraphics
#endif
#ifndef PostLoadPlatformImage_drawImage
#define PostLoadPlatformImage_drawImage PlatformImage_drawImage
#endif
#ifndef PostLoadPlatformImage_drawRegion
#define PostLoadPlatformImage_drawRegion PlatformImage_drawRegion
#endif
#ifndef PostLoadPlatformImage_getRGB
#define PostLoadPlatformImage_getRGB PlatformImage_getRGB
#endif
#ifndef PostLoadPlatformImage_setRGB
#define PostLoadPlatformImage_setRGB PlatformImage_setRGB
#endif
#ifndef PostLoadPlatformImage_getData
#define PostLoadPlatformImage_getData PlatformImage_getData
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PostLoadPlatformImage_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PostLoadPlatformImage_register(void);


#endif // JAVAX_MICROEDITION_LCDUI_POSTLOADPLATFORMIMAGE_H
