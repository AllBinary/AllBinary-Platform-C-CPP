#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H
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
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct Canvas Canvas;
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct NullCanvas NullCanvas;
typedef struct NullImage NullImage;
typedef struct Anchor Anchor;
typedef struct MyCanvas MyCanvas;
typedef struct ProcessPaintable ProcessPaintable;
typedef struct CircularIndexUtil CircularIndexUtil;
#if __has_include("javax/microedition/lcdui/Canvas.h")
#include "javax/microedition/lcdui/Canvas.h"
#endif
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#if __has_include("org/allbinary/util/CircularIndexUtil.h")
#include "org/allbinary/util/CircularIndexUtil.h"
#endif

typedef struct BufferedGameCanvasPaintHelper BufferedGameCanvasPaintHelper;
struct BufferedGameCanvasPaintHelper {
    ProcessPaintable base;
    Canvas* gameCanvas;
    Image** offScreenImage;
    Image* previousImage;
    CircularIndexUtil* circularIndexUtil;
    CircularIndexUtil* drawCircularIndexUtil;
    int32_t anchor;
};


BufferedGameCanvasPaintHelper* BufferedGameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas);

void BufferedGameCanvasPaintHelper_init(BufferedGameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas);

void BufferedGameCanvasPaintHelper_process(BufferedGameCanvasPaintHelper* this);

void BufferedGameCanvasPaintHelper_paint(BufferedGameCanvasPaintHelper* this, Graphics* graphics);
#define BufferedGameCanvasPaintHelper_new1 BufferedGameCanvasPaintHelper_new
#define BufferedGameCanvasPaintHelper_init1 BufferedGameCanvasPaintHelper_init
#ifndef BufferedGameCanvasPaintHelper_setBasicColorP
#define BufferedGameCanvasPaintHelper_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef BufferedGameCanvasPaintHelper_paintThreed
#define BufferedGameCanvasPaintHelper_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BufferedGameCanvasPaintHelper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BufferedGameCanvasPaintHelper_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H
