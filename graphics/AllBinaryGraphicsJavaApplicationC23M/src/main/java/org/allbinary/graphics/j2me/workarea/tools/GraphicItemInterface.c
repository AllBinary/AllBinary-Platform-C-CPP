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
// package org.allbinary.graphics.j2me.workarea.tools

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h"
#include "org/w3c/dom/Node.h"

typedef struct GraphicItemInterface GraphicItemInterface;
struct GraphicItemInterface {
    const char* (*getName)(void* this);
    void (*setColor)(void* this, Color* color);
    MutableTreeNode* (*getTreeNode)(void* this);
    Points* (*getPointsInterface)(void* this);
    void (*setPointsInterface)(void* this, Points* points);
    bool (*isValid)(void* this);
    bool (*isActive)(void* this);
    void (*deactivate)(void* this);
    void (*activate)(void* this);
    void (*setFulcrumPoint)(void* this, GPoint* point);
    void (*translate)(void* this, int32_t x, int32_t y);
    void (*setRotate)(void* this, double theta);
    void (*addRotate)(void* this, double theta);
    void (*setAngle)(void* this, double angle);
    void (*addAngle)(void* this, double angle);
    double (*getAngle)(void* this);
    void (*paint)(void* this, Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y);
    Node* (*toDom)(void* this, CanvasDom* canvasDom);
    GPoint* (*removePoint)(void* this);
    void (*addPoint)(void* this, GPoint* point);
    void (*mouseClicked)(void* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
    void (*mouseEntered)(void* this, MouseEvent* mouseEvent);
    void (*mouseExited)(void* this, MouseEvent* mouseEvent);
    void (*mousePressed)(void* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
    void (*mouseReleased)(void* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
    void (*mouseDragged)(void* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
    void (*mouseMoved)(void* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
    void (*keyPressed)(void* this, KeyEvent* keyEvent);
    void (*keyReleased)(void* this, KeyEvent* keyEvent);
    void (*keyTyped)(void* this, KeyEvent* keyEvent);
    GraphicItemInterface* (*duplicate)(void* this);
};


