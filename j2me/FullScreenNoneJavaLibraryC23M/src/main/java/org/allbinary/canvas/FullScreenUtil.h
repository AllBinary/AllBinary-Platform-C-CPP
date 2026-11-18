#ifndef ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H
#define ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H
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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct CommandListener CommandListener;
typedef struct Features Features;
typedef struct MainFeatureFactory MainFeatureFactory;

typedef struct FullScreenUtil FullScreenUtil;
struct FullScreenUtil {
    char unused;
};


FullScreenUtil* FullScreenUtil_new(void);
void FullScreenUtil_init(FullScreenUtil* this);

FullScreenUtil* FullScreenUtil_getInstance(void);

void FullScreenUtil_initOnRun(FullScreenUtil* this, Canvas* fullScreenInterface, CommandListener* commandListener);

void FullScreenUtil_initMethod(FullScreenUtil* this, Canvas* fullScreenInterface);

bool FullScreenUtil_isScreenChange(FullScreenUtil* this, bool isFullScreen);

bool FullScreenUtil_isScreenChangeCanvas(FullScreenUtil* this, Canvas* fullScreenInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FullScreenUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FullScreenUtil_register(void);


#endif // ORG_ALLBINARY_CANVAS_FULLSCREENUTIL_H
