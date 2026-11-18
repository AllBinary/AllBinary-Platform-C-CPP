#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMUTIL_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMUTIL_H
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
typedef struct PointFactory PointFactory;
typedef struct Rectangle Rectangle;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
// #include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct FormUtil FormUtil;
struct FormUtil {
    char unused;
};


FormUtil* FormUtil_new(void);
void FormUtil_init(FormUtil* this);

FormUtil* FormUtil_getInstance(void);

Rectangle* FormUtil_createFormRectangle(FormUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FormUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FormUtil_register(void);

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMUTIL_H
