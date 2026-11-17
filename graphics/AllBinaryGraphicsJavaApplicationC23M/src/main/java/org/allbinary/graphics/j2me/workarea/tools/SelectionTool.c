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
// #include "java/util/HashMap.h"
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/math/RectangleCollisionPointUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"

typedef struct SelectionTool SelectionTool;
struct SelectionTool {
    GraphicItemInterface GraphicItemInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CanvasJPanel* canvasJPanel;
    bool active;
    bool controlIdDown;
    Color* rectColor;
    GPoint* startPoint;
    GPoint* endPoint;
};

static const char* SelectionTool_NAME = "Selection Tool";

SelectionTool* SelectionTool_new(CanvasJPanel* canvasJPanel);

void SelectionTool_init(SelectionTool* this, CanvasJPanel* canvasJPanel);
void SelectionTool_setColor(SelectionTool* this, Color* color);
MutableTreeNode* SelectionTool_getTreeNode(SelectionTool* this);
Points* SelectionTool_getPointsInterface(SelectionTool* this);
void SelectionTool_setPointsInterface(SelectionTool* this, Points* points);
bool SelectionTool_isValid(SelectionTool* this);
bool SelectionTool_isActive(SelectionTool* this);
void SelectionTool_deactivate(SelectionTool* this);
void SelectionTool_activate(SelectionTool* this);
void SelectionTool_setFulcrumPoint(SelectionTool* this, GPoint* point);
void SelectionTool_translate(SelectionTool* this, int32_t x, int32_t y);
void SelectionTool_setRotate(SelectionTool* this, double theta);
void SelectionTool_addRotate(SelectionTool* this, double theta);
void SelectionTool_setAngle(SelectionTool* this, double angle);
void SelectionTool_addAngle(SelectionTool* this, double angle);
double SelectionTool_getAngle(SelectionTool* this);
static void SelectionTool_makeSelection(SelectionTool* this);
int32_t SelectionTool_getXRect(SelectionTool* this);
int32_t SelectionTool_getYRect(SelectionTool* this);
void SelectionTool_paint(SelectionTool* this, Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y);
Node* SelectionTool_toDom(SelectionTool* this, CanvasDom* canvasDom);
GPoint* SelectionTool_removePoint(SelectionTool* this);
void SelectionTool_addPoint(SelectionTool* this, GPoint* point);
const char* SelectionTool_getName(SelectionTool* this);
const char* SelectionTool_getStaticName(void);
void SelectionTool_mouseClicked(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void SelectionTool_mouseMoved(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void SelectionTool_mouseEntered(SelectionTool* this, MouseEvent* mouseEvent);
void SelectionTool_mouseExited(SelectionTool* this, MouseEvent* mouseEvent);
void SelectionTool_mousePressed(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void SelectionTool_mouseReleased(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void SelectionTool_mouseDragged(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void SelectionTool_keyPressed(SelectionTool* this, KeyEvent* keyEvent);
void SelectionTool_keyReleased(SelectionTool* this, KeyEvent* keyEvent);
void SelectionTool_keyTyped(SelectionTool* this, KeyEvent* keyEvent);
GraphicItemInterface* SelectionTool_duplicate(SelectionTool* this);

static void SelectionTool_initFields(SelectionTool* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->active = true;
    this->controlIdDown = false;
    this->rectColor = Color_new(JAVA_CALL(BasicColorFactory_getInstance()->RED, intValue));
    this->startPoint = PointFactory_getInstance()->ZERO_ZERO;
    this->endPoint = this->startPoint;
}


void SelectionTool_init(SelectionTool* this, CanvasJPanel* canvasJPanel) {
    SelectionTool_initFields(this);
        this->canvasJPanel = canvasJPanel;
}

SelectionTool* SelectionTool_new(CanvasJPanel* canvasJPanel) {
    SelectionTool* this = calloc(1, sizeof(SelectionTool));
    SelectionTool_init(this, canvasJPanel);
    return this;
}


void SelectionTool_setColor(SelectionTool* this, Color* color) {
}


MutableTreeNode* SelectionTool_getTreeNode(SelectionTool* this) {
        return nullptr;
}


Points* SelectionTool_getPointsInterface(SelectionTool* this) {
        return nullptr;
}


void SelectionTool_setPointsInterface(SelectionTool* this, Points* points) {
}


bool SelectionTool_isValid(SelectionTool* this) {
        return true;
}


bool SelectionTool_isActive(SelectionTool* this) {
        return this->active;
}


void SelectionTool_deactivate(SelectionTool* this) {
}


void SelectionTool_activate(SelectionTool* this) {
}


void SelectionTool_setFulcrumPoint(SelectionTool* this, GPoint* point) {
}


// throws Exception
void SelectionTool_translate(SelectionTool* this, int32_t x, int32_t y) {
}


void SelectionTool_setRotate(SelectionTool* this, double theta) {
}


void SelectionTool_addRotate(SelectionTool* this, double theta) {
}


void SelectionTool_setAngle(SelectionTool* this, double angle) {
}


void SelectionTool_addAngle(SelectionTool* this, double angle) {
}


double SelectionTool_getAngle(SelectionTool* this) {
        return 0.0;
}


static void SelectionTool_makeSelection(SelectionTool* this) {
        int32_t xRect = SelectionTool_getXRect(this);
        int32_t xRect2 = ((GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint)) < 0 ? -(GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint)) : (GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint))) + xRect;
        int32_t yRect = SelectionTool_getYRect(this);
        int32_t yRect2 = ((GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint)) < 0 ? -(GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint)) : (GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint))) + yRect;
        HashMap* hashMap = CanvasJPanel_getGraphicItemHashMap(this->canvasJPanel);
        Any** graphicItemArray = JAVA_CALL(HashMap_keySet(hashMap), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) HashMap_get(hashMap, graphicItemArray[index]));
            if (GraphicItemInterface_getName(item) == LinesGraphicItem_getStaticName()) {
                if (RectangleCollisionPointUtil_allPointsInsideCell(xRect, yRect, xRect2, yRect2, JAVA_CALL(GraphicItemInterface_getPointsInterface(item), getPoints), CanvasJPanel_getXPixelsPerWorkAreaPixel(this->canvasJPanel), CanvasJPanel_getYPixelsPerWorkAreaPixel(this->canvasJPanel))) {
                    GraphicItemInterface_setColor(item, Color_YELLOW);
                    GraphicItemInterface_activate(item);
                } else if (!this->controlIdDown) {
                    GraphicItemInterface_setColor(item, Color_WHITE);
                    GraphicItemInterface_deactivate(item);
                }
            }
        }
}


int32_t SelectionTool_getXRect(SelectionTool* this) {
        int32_t xDiff = GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint);
        int32_t xRect = GPoint_getX(this->startPoint);
        if (xDiff < 0) {
            xRect = GPoint_getX(this->endPoint);
        }
        return xRect;
}


int32_t SelectionTool_getYRect(SelectionTool* this) {
        int32_t yDiff = GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint);
        int32_t yRect = GPoint_getY(this->startPoint);
        if (yDiff < 0) {
            yRect = GPoint_getY(this->endPoint);
        }
        return yRect;
}


void SelectionTool_paint(SelectionTool* this, Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y) {
        Graphics_setColor(g, this->rectColor);
        int32_t xRect = SelectionTool_getXRect(this);
        int32_t width = ((GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint)) < 0 ? -(GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint)) : (GPoint_getX(this->endPoint) - GPoint_getX(this->startPoint)));
        int32_t yRect = SelectionTool_getYRect(this);
        int32_t height = ((GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint)) < 0 ? -(GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint)) : (GPoint_getY(this->endPoint) - GPoint_getY(this->startPoint)));
        Graphics_drawRect(g, xRect, yRect, width, height);
}


// throws Exception
Node* SelectionTool_toDom(SelectionTool* this, CanvasDom* canvasDom) {
        return nullptr;
}


GPoint* SelectionTool_removePoint(SelectionTool* this) {
        return nullptr;
}


void SelectionTool_addPoint(SelectionTool* this, GPoint* point) {
}


const char* SelectionTool_getName(SelectionTool* this) {
        return SelectionTool_NAME;
}


const char* SelectionTool_getStaticName(void) {
        return SelectionTool_NAME;
}


void SelectionTool_mouseClicked(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
}


void SelectionTool_mouseMoved(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
}


void SelectionTool_mouseEntered(SelectionTool* this, MouseEvent* mouseEvent) {
}


void SelectionTool_mouseExited(SelectionTool* this, MouseEvent* mouseEvent) {
}


void SelectionTool_mousePressed(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, MouseStrings_getInstance()->MOUSE_PRESSED);
        this->startPoint = PointFactory_createXY(PointFactory_getInstance(), MouseEvent_getX(mouseEvent), MouseEvent_getY(mouseEvent));
        this->endPoint = this->startPoint;
}


void SelectionTool_mouseReleased(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, MouseStrings_getInstance()->MOUSE_RELEASED);
        this->endPoint = PointFactory_createXY(PointFactory_getInstance(), MouseEvent_getX(mouseEvent), MouseEvent_getY(mouseEvent));
        this->active = false;
        SelectionTool_makeSelection(this);
}


void SelectionTool_mouseDragged(SelectionTool* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
        this->endPoint = PointFactory_createXY(PointFactory_getInstance(), MouseEvent_getX(mouseEvent), MouseEvent_getY(mouseEvent));
}


void SelectionTool_keyPressed(SelectionTool* this, KeyEvent* keyEvent) {
        if (KeyEvent_getKeyCode(keyEvent) == keyEvent->VK_CONTROL) {
            this->controlIdDown = true;
        }
}


void SelectionTool_keyReleased(SelectionTool* this, KeyEvent* keyEvent) {
        if (KeyEvent_getKeyCode(keyEvent) == keyEvent->VK_CONTROL) {
            this->controlIdDown = false;
        }
}


void SelectionTool_keyTyped(SelectionTool* this, KeyEvent* keyEvent) {
}


// throws Exception
GraphicItemInterface* SelectionTool_duplicate(SelectionTool* this) {
        return nullptr;
}

