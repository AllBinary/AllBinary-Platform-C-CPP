#ifndef ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H
#define ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H
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
typedef struct AppletUtil AppletUtil;
typedef struct J2MEUtil J2MEUtil;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct MyCanvas MyCanvas;

typedef struct CustomGameMenuUtil CustomGameMenuUtil;
struct CustomGameMenuUtil {
    char unused;
};


CustomGameMenuUtil* CustomGameMenuUtil_new(void);
void CustomGameMenuUtil_init(CustomGameMenuUtil* this);

void CustomGameMenuUtil_add(MyCanvas* canvas);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomGameMenuUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomGameMenuUtil_register(void);


#endif // ORG_ALLBINARY_CANVAS_CUSTOMGAMEMENUUTIL_H
