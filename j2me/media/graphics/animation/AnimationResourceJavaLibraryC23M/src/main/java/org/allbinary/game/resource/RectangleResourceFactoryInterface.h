#ifndef ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H
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
// package org.allbinary.game.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Rectangle Rectangle;

typedef struct RectangleResourceFactoryInterface RectangleResourceFactoryInterface;
struct RectangleResourceFactoryInterface {
    Rectangle* (*getRectangle)(void* this, const char* resource);
    Rectangle*** (*getRectangleArrayOfArrays)(void* this, const char* resource);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RectangleResourceFactoryInterface_staticInit(void);

static inline Rectangle* RectangleResourceFactoryInterface_getRectangle(void* this, const char* resource) {
    return ((__typeof__(((RectangleResourceFactoryInterface*) nullptr)->getRectangle)) java_method_of(this, "getRectangle"))(this, resource);
}

static inline Rectangle*** RectangleResourceFactoryInterface_getRectangleArrayOfArrays(void* this, const char* resource) {
    return ((__typeof__(((RectangleResourceFactoryInterface*) nullptr)->getRectangleArrayOfArrays)) java_method_of(this, "getRectangleArrayOfArrays"))(this, resource);
}

#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif

#endif // ORG_ALLBINARY_GAME_RESOURCE_RECTANGLERESOURCEFACTORYINTERFACE_H
