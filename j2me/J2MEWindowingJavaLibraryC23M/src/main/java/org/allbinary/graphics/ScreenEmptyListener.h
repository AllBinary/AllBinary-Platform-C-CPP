#ifndef ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H
#define ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H
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
// package org.allbinary.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ScreenListenerInterface ScreenListenerInterface;
#include "org/allbinary/graphics/ScreenListenerInterface.h"

typedef struct ScreenEmptyListener ScreenEmptyListener;
struct ScreenEmptyListener {
    ScreenListenerInterface ScreenListenerInterface_interface;
};


ScreenEmptyListener* ScreenEmptyListener_new(void);
void ScreenEmptyListener_init(ScreenEmptyListener* this);

void ScreenEmptyListener_onFullScreen(ScreenEmptyListener* this, bool isFullScreen);

void ScreenEmptyListener_onFullScreenDisplay(ScreenEmptyListener* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScreenEmptyListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScreenEmptyListener_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_SCREENEMPTYLISTENER_H
