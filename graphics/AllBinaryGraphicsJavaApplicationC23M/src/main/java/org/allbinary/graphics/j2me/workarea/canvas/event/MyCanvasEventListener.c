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
// package org.allbinary.graphics.j2me.workarea.canvas.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MyCanvasEventListener MyCanvasEventListener;
struct MyCanvasEventListener {
    void (*delete)(void* this, MyCanvasEvent* evt);
    void (*duplicate)(void* this, MyCanvasEvent* evt);
    void (*select)(void* this, MyCanvasEvent* evt);
    void (*rotate)(void* this, MyCanvasEvent* evt);
    void (*explode)(void* this, MyCanvasEvent* evt);
    void (*autoExplode)(void* this, MyCanvasEvent* evt);
    void (*center)(void* this, MyCanvasEvent* evt);
};


