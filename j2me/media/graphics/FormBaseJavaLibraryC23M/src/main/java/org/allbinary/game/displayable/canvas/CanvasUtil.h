#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CANVASUTIL_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CANVASUTIL_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct CommonPhoneStrings CommonPhoneStrings;

typedef struct CanvasUtil CanvasUtil;
struct CanvasUtil {
    char unused;
};


CanvasUtil* CanvasUtil_new(void);

void CanvasUtil_init(CanvasUtil* this);

const char* CanvasUtil_getKeyName(int32_t key);
#define CanvasUtil_new0 CanvasUtil_new
#define CanvasUtil_init0 CanvasUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CanvasUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CanvasUtil_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_CANVASUTIL_H
