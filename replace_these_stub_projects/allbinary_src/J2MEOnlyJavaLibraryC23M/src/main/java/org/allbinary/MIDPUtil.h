#ifndef ORG_ALLBINARY_MIDPUTIL_H
#define ORG_ALLBINARY_MIDPUTIL_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2026 AllBinary
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Form Form;
typedef struct Image Image;
typedef struct Item Item;
typedef struct Manager Manager;
typedef struct MediaException MediaException;
typedef struct Player Player;
#include "java/io/IOException.h"
#include "java/io/InputStream.h"

//like microemu-playn, so the languages without overloading can be generated. J2ME uses the MIDP overloads.
typedef struct MIDPUtil MIDPUtil;
struct MIDPUtil {
    char unused;
};


MIDPUtil* MIDPUtil_new(void);
void MIDPUtil_init(MIDPUtil* this);

MIDPUtil* MIDPUtil_getInstance(void);

Image* MIDPUtil_createImageWH(MIDPUtil* this, int32_t width, int32_t height);

Image* MIDPUtil_createImageFromByteArray(MIDPUtil* this, int8_t* imageData, int32_t imageOffset, int32_t imageLength);

Image* MIDPUtil_createImageFromInputStream(MIDPUtil* this, InputStream* inputStream);

Player* MIDPUtil_createPlayerFromInputStream(MIDPUtil* this, InputStream* inputStream, const char* type);

int32_t MIDPUtil_appendItem(MIDPUtil* this, Form* form, Item* item);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MIDPUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MIDPUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif

#endif // ORG_ALLBINARY_MIDPUTIL_H
