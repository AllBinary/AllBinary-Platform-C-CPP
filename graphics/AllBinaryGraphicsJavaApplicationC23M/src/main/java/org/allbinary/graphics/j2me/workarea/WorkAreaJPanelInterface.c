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
// package org.allbinary.graphics.j2me.workarea

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/graphics/j2me/workarea/KeyListener.h"

typedef struct WorkAreaJPanelInterface WorkAreaJPanelInterface;
struct WorkAreaJPanelInterface {
    const char* (*getName)(void* this);
    void (*deselect)(void* this);
    void (*select)(void* this);
    void (*changeZoom)(void* this, int32_t factor);
    void (*explodeAll)(void* this);
    void (*autoRotate)(void* this, int32_t increments, int32_t totalAngle);
    void (*autoExplode)(void* this, int32_t numberOfFrames, int32_t explodeType);
    void (*autoMirror)(void* this);
    void (*play)(void* this);
    void (*stop)(void* this);
    bool (*isPlaying)(void* this);
    Document* (*toDocument)(void* this);
};


