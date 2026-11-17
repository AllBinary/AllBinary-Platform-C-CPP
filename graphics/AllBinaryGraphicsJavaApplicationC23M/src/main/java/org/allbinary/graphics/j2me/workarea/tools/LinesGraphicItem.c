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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/swing/tree/DefaultMutableTreeNode.h"
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/dom/DomHelper.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/j2me/StatusFactory.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h"
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"

typedef struct LinesGraphicItem LinesGraphicItem;
struct LinesGraphicItem {
    GraphicItemInterface GraphicItemInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GameInputStrings* gameInputStrings;
    DefaultMutableTreeNode* treeNode;
    BasicArrayList* pointTreeNodeVector;
    GPoint* currentMousePoint;
    GPoint* fulcrumPoint;
    bool active;
    double theta;
    Color* color;
    Points* points;
};

static const char* LinesGraphicItem_RECT = "rect";
static const char* LinesGraphicItem_ARC = "arc";
static const char* LinesGraphicItem_STRING = "string";
static const char* LinesGraphicItem_CHAR = "char";
static const char* LinesGraphicItem_IMAGE = "image";
static int32_t LinesGraphicItem_item = 0;
static const char* LinesGraphicItem_NAME = "Line Tool";

LinesGraphicItem* LinesGraphicItem_new(void);

void LinesGraphicItem_init(LinesGraphicItem* this);

LinesGraphicItem* LinesGraphicItem_new1(Node* linesNode);
void LinesGraphicItem_init1(LinesGraphicItem* this, Node* linesNode);
void LinesGraphicItem_init(LinesGraphicItem* this);
void LinesGraphicItem_translate(LinesGraphicItem* this, int32_t x, int32_t y);
void LinesGraphicItem_setRotate(LinesGraphicItem* this, double theta);
void LinesGraphicItem_addRotate(LinesGraphicItem* this, double theta);
void LinesGraphicItem_setAngle(LinesGraphicItem* this, double angle);
void LinesGraphicItem_addAngle(LinesGraphicItem* this, double angle);
MutableTreeNode* LinesGraphicItem_getTreeNode(LinesGraphicItem* this);
const char* LinesGraphicItem_getName(LinesGraphicItem* this);
const char* LinesGraphicItem_getStaticName(void);
static void LinesGraphicItem_addPoint(LinesGraphicItem* this, NodeList* pointNodes);
void LinesGraphicItem_addPoint(LinesGraphicItem* this, GPoint* point);
GPoint* LinesGraphicItem_removePoint(LinesGraphicItem* this);
bool LinesGraphicItem_isActive(LinesGraphicItem* this);
void LinesGraphicItem_deactivate(LinesGraphicItem* this);
void LinesGraphicItem_activate(LinesGraphicItem* this);
void LinesGraphicItem_duplicatePoints(LinesGraphicItem* this, BasicArrayList* list);
GraphicItemInterface* LinesGraphicItem_duplicate(LinesGraphicItem* this);
double LinesGraphicItem_getAngle(LinesGraphicItem* this);
void LinesGraphicItem_setFulcrumPoint(LinesGraphicItem* this, GPoint* point);
void LinesGraphicItem_paint(LinesGraphicItem* this, Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y);
Node* LinesGraphicItem_toDom(LinesGraphicItem* this, CanvasDom* canvasDom);
bool LinesGraphicItem_isValid(LinesGraphicItem* this);
Points* LinesGraphicItem_getPointsInterface(LinesGraphicItem* this);
void LinesGraphicItem_setPointsInterface(LinesGraphicItem* this, Points* points);
Color* LinesGraphicItem_getColor(LinesGraphicItem* this);
void LinesGraphicItem_setColor(LinesGraphicItem* this, Color* color);
void LinesGraphicItem_mouseClicked(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t x, int32_t y);
void LinesGraphicItem_mouseEntered(LinesGraphicItem* this, MouseEvent* mouseEvent);
void LinesGraphicItem_mouseExited(LinesGraphicItem* this, MouseEvent* mouseEvent);
void LinesGraphicItem_mousePressed(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void LinesGraphicItem_mouseReleased(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void LinesGraphicItem_mouseDragged(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);
void LinesGraphicItem_mouseMoved(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t x, int32_t y);
void LinesGraphicItem_keyPressed(LinesGraphicItem* this, KeyEvent* keyEvent);
void LinesGraphicItem_keyReleased(LinesGraphicItem* this, KeyEvent* keyEvent);
void LinesGraphicItem_keyTyped(LinesGraphicItem* this, KeyEvent* keyEvent);

static void LinesGraphicItem_initFields(LinesGraphicItem* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->gameInputStrings = GameInputStrings_getInstance();
    this->treeNode = nullptr;
    this->pointTreeNodeVector = nullptr;
    this->currentMousePoint = nullptr;
    this->fulcrumPoint = nullptr;
    this->active = false;
    this->theta = 0.0;
    this->color = Color_new(JAVA_CALL(BasicColorFactory_getInstance()->WHITE, intValue));
    
}


void LinesGraphicItem_init(LinesGraphicItem* this) {
    LinesGraphicItem_initFields(this);
        this->points = Points_new();
        JAVA_TRY {
            LinesGraphicItem_init(this);
            this->active = true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

LinesGraphicItem* LinesGraphicItem_new(void) {
    LinesGraphicItem* this = calloc(1, sizeof(LinesGraphicItem));
    LinesGraphicItem_init(this);
    return this;
}


void LinesGraphicItem_init1(LinesGraphicItem* this, Node* linesNode) {
    LinesGraphicItem_initFields(this);
        this->points = Points_new();
        LinesGraphicItem_init(this);
        this->active = false;
        BasicArrayList* lineNodes = DomHelper_getWithoutTextNodes(DomHelper_getInstance(), Node_getChildNodes(linesNode));
        int32_t numberOfLines = BasicArrayList_size(lineNodes);
        for (int32_t index = 0; index < numberOfLines; index++) {
            Node* lineNode = ((Node*) BasicArrayList_get(lineNodes, index));
            BasicArrayList* pointNodes = DomHelper_getWithoutTextNodes(DomHelper_getInstance(), Node_getChildNodes(lineNode));
            Node* pointOneNode = DomHelper_searchNodeList(DomHelper_getInstance(), PointsDomUtil_getInstance()->POINTONE, pointNodes);
            LinesGraphicItem_addPoint(this, Node_getChildNodes(pointOneNode));
            if (index == numberOfLines - 1) {
                Node* pointTwoNode = DomHelper_searchNodeList(DomHelper_getInstance(), PointsDomUtil_getInstance()->POINTTWO, pointNodes);
                LinesGraphicItem_addPoint(this, Node_getChildNodes(pointTwoNode));
            }
        }
        if (numberOfLines == 0) {
            java_throw(java_exception_new("Exception", "Lines node does not contain a line"));
        }
}

LinesGraphicItem* LinesGraphicItem_new1(Node* linesNode) {
    LinesGraphicItem* this = calloc(1, sizeof(LinesGraphicItem));
    LinesGraphicItem_init1(this, linesNode);
    return this;
}


// throws Exception
void LinesGraphicItem_init(LinesGraphicItem* this) {
        this->treeNode = DefaultMutableTreeNode_new(PointsDomUtil_getInstance()->LINES + LinesGraphicItem_item);
        LinesGraphicItem_item++;
        Points_init(this->points);
        this->pointTreeNodeVector = BasicArrayListD_new();
        this->fulcrumPoint = PointFactory_createXY(PointFactory_getInstance(), 0, 0);
}


// throws Exception
void LinesGraphicItem_translate(LinesGraphicItem* this, int32_t x, int32_t y) {
        StatusFactory_setStatus(StatusFactory_getInstance(), java_concat("Translating: ", java_string_of(Points_getPoints(this->points))));
        BasicGraphicsPipeline* basicGraphicsPipeline = BasicGraphicsPipeline_new(Points_getPoints(this->points));
        BasicGraphicsPipeline_translate(basicGraphicsPipeline, x, y);
        this->points = Points_new();
        Points_addPoints(this->points, BasicGraphicsPipeline_getMatrix(basicGraphicsPipeline));
}


void LinesGraphicItem_setRotate(LinesGraphicItem* this, double theta) {
        while (theta > 2 * Math_PI) {
            theta -= 2 * Math_PI;
        }
        while (theta < 0.0) {
            theta += 2 * Math_PI;
        }
        this->theta = theta;
}


void LinesGraphicItem_addRotate(LinesGraphicItem* this, double theta) {
        LinesGraphicItem_setRotate(this, this->theta + theta);
}


void LinesGraphicItem_setAngle(LinesGraphicItem* this, double angle) {
        LinesGraphicItem_setRotate(this, ((angle) * 3.14159265358979323846 / 180.0));
}


void LinesGraphicItem_addAngle(LinesGraphicItem* this, double angle) {
        LinesGraphicItem_setRotate(this, this->theta + ((angle) * 3.14159265358979323846 / 180.0));
}


MutableTreeNode* LinesGraphicItem_getTreeNode(LinesGraphicItem* this) {
        return ((MutableTreeNode*) this->treeNode);
}


const char* LinesGraphicItem_getName(LinesGraphicItem* this) {
        return LinesGraphicItem_NAME;
}


const char* LinesGraphicItem_getStaticName(void) {
        return LinesGraphicItem_NAME;
}


// throws Exception
// synchronized
static void LinesGraphicItem_addPoint(LinesGraphicItem* this, NodeList* pointNodes) {
        BasicArrayList* list = DomHelper_getWithoutTextNodes(DomHelper_getInstance(), pointNodes);
        Node* xNode = DomHelper_searchNodeList(DomHelper_getInstance(), PositionStrings_getInstance()->X, list);
        Node* xTextNode = Node_getFirstChild(xNode);
        int32_t xInteger = Node_getNodeValue(xTextNode);
        Node* yNode = DomHelper_searchNodeList(DomHelper_getInstance(), PositionStrings_getInstance()->Y, list);
        Node* yTextNode = Node_getFirstChild(yNode);
        int32_t yInteger = Node_getNodeValue(yTextNode);
        GPoint* point = PointFactory_createXY(PointFactory_getInstance(), Integer_intValue(xInteger), Integer_intValue(yInteger));
        LinesGraphicItem_addPoint(this, point);
}


// Java overloaded method: C needs a different name
// synchronized
void LinesGraphicItem_addPoint(LinesGraphicItem* this, GPoint* point) {
        JAVA_CALL(Points_getPoints(this->points), add, point);
        LogUtil_putF(this->logUtil, GPoint_toString(point), this, "addPoint");
        BasicArrayList_add(this->pointTreeNodeVector, DefaultMutableTreeNode_new(GPoint_toString(point)));
        DefaultMutableTreeNode_add(this->treeNode, ((DefaultMutableTreeNode*) BasicArrayList_get(this->pointTreeNodeVector, BasicArrayList_size(this->pointTreeNodeVector) - 1)));
}


// synchronized
GPoint* LinesGraphicItem_removePoint(LinesGraphicItem* this) {
        GPoint* point = nullptr;
        if (Points_getSize(this->points) > 0) {
            int32_t lastPoint = Points_getSize(this->points) - 1;
            point = ((GPoint*) JAVA_CALL(Points_getPoints(this->points), removeAt, lastPoint));
            int32_t index = BasicArrayList_size(this->pointTreeNodeVector) - 1;
            if (index > 0) {
                DefaultMutableTreeNode_remove(this->treeNode, ((DefaultMutableTreeNode*) BasicArrayList_get(this->pointTreeNodeVector, index)));
                BasicArrayList_remove(this->pointTreeNodeVector, index);
            }
        }
        return point;
}


bool LinesGraphicItem_isActive(LinesGraphicItem* this) {
        return this->active;
}


void LinesGraphicItem_deactivate(LinesGraphicItem* this) {
        this->active = false;
}


void LinesGraphicItem_activate(LinesGraphicItem* this) {
        this->active = true;
}


// throws Exception
void LinesGraphicItem_duplicatePoints(LinesGraphicItem* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            GPoint* point = ((GPoint*) BasicArrayList_get(list, index));
            if (point != nullptr) {
                JAVA_CALL(Points_getPoints(this->points), add, PointFactory_createXY(PointFactory_getInstance(), GPoint_getX(point), GPoint_getY(point)));
                BasicArrayList_add(this->pointTreeNodeVector, DefaultMutableTreeNode_new(GPoint_toString(point)));
                DefaultMutableTreeNode_add(this->treeNode, ((DefaultMutableTreeNode*) BasicArrayList_get(this->pointTreeNodeVector, BasicArrayList_size(this->pointTreeNodeVector) - 1)));
            }
        }
}


// throws Exception
GraphicItemInterface* LinesGraphicItem_duplicate(LinesGraphicItem* this) {
        LinesGraphicItem* linesGraphicItem = LinesGraphicItem_new();
        LinesGraphicItem_duplicatePoints(linesGraphicItem, Points_getPoints(this->points));
        LinesGraphicItem_deactivate(linesGraphicItem);
        return linesGraphicItem;
}


double LinesGraphicItem_getAngle(LinesGraphicItem* this) {
        return ((this->theta) * 180.0 / 3.14159265358979323846);
}


void LinesGraphicItem_setFulcrumPoint(LinesGraphicItem* this, GPoint* point) {
        this->fulcrumPoint = point;
}


void LinesGraphicItem_paint(LinesGraphicItem* this, Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y) {
        JAVA_TRY {
            Graphics2D* graphics = ((Graphics2D*) g);
            Graphics2D_setColor(graphics, LinesGraphicItem_getColor(this));
            Graphics2D_setStroke(graphics, BasicStroke_new(x));
            if (LinesGraphicItem_isActive(this) && this->currentMousePoint != nullptr) {
                JAVA_CALL(Points_getPoints(this->points), add, this->currentMousePoint);
            }
            BasicArrayList* tempPointVector = PointsUtil_doTransforms(PointsUtil_getInstance(), Points_getPoints(this->points), canvasAngle, PointFactory_createXY(PointFactory_getInstance(), IntegerDimension_getWidth(dimension), IntegerDimension_getHeight(dimension)));
            if (LinesGraphicItem_isActive(this) && this->currentMousePoint != nullptr) {
                this->currentMousePoint = ((GPoint*) JAVA_CALL(Points_getPoints(this->points), removeAt, Points_getSize(this->points) - 1));
            }
            int32_t size = BasicArrayList_size(tempPointVector);
            GPoint* firstPoint = nullptr;
            if (size > 0) {
                firstPoint = ((GPoint*) BasicArrayList_get(tempPointVector, 0));
            }
            for (int32_t index = 1; index < size; index++) {
                GPoint* secondPoint = ((GPoint*) BasicArrayList_get(tempPointVector, index));
                Graphics2D_drawLine(graphics, (GPoint_getX(firstPoint) * x) - (x / 4), (GPoint_getY(firstPoint) * y) - (y / 4), (GPoint_getX(secondPoint) * x) - (x / 4), (GPoint_getY(secondPoint) * y) - (y / 4));
                firstPoint = secondPoint;
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "mouseMoved", e);
        } JAVA_END_TRY;
}


// throws Exception
Node* LinesGraphicItem_toDom(LinesGraphicItem* this, CanvasDom* canvasDom) {
        return PointsDomUtil_toDom(PointsDomUtil_getInstance(), canvasDom, Points_getPoints(this->points));
}


bool LinesGraphicItem_isValid(LinesGraphicItem* this) {
        return Points_isValid(this->points);
}


Points* LinesGraphicItem_getPointsInterface(LinesGraphicItem* this) {
        return this->points;
}


void LinesGraphicItem_setPointsInterface(LinesGraphicItem* this, Points* points) {
        this->points = points;
}


Color* LinesGraphicItem_getColor(LinesGraphicItem* this) {
        return this->color;
}


void LinesGraphicItem_setColor(LinesGraphicItem* this, Color* color) {
        this->color = color;
}


void LinesGraphicItem_mouseClicked(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t x, int32_t y) {
        JAVA_TRY {
            GPoint* mousePoint = PointFactory_createXY(PointFactory_getInstance(), MouseEvent_getPoint(mouseEvent)->x, MouseEvent_getPoint(mouseEvent)->y);
            if ((MouseEvent_getModifiers(mouseEvent) & mouseEvent->BUTTON1_MASK) == mouseEvent->BUTTON1_MASK) {
                GPoint* point = PointFactory_createXY(PointFactory_getInstance(), GPoint_getX(mousePoint) / x, GPoint_getY(mousePoint) / y);
                StatusFactory_setStatus(StatusFactory_getInstance(), java_concat("Line Point Added: ", GPoint_toString(point)));
                LinesGraphicItem_addPoint(this, point);
            } else if ((MouseEvent_getModifiers(mouseEvent) & mouseEvent->BUTTON3_MASK) == mouseEvent->BUTTON3_MASK) {
                StatusFactory_setStatus(StatusFactory_getInstance(), "Line Point Removed");
                LinesGraphicItem_removePoint(this);
            }
            this->currentMousePoint = mousePoint;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "mouseMoved", e);
        } JAVA_END_TRY;
}


void LinesGraphicItem_mouseEntered(LinesGraphicItem* this, MouseEvent* mouseEvent) {
}


void LinesGraphicItem_mouseExited(LinesGraphicItem* this, MouseEvent* mouseEvent) {
}


void LinesGraphicItem_mousePressed(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
}


void LinesGraphicItem_mouseReleased(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
}


void LinesGraphicItem_mouseDragged(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) {
}


void LinesGraphicItem_mouseMoved(LinesGraphicItem* this, MouseEvent* mouseEvent, int32_t x, int32_t y) {
        JAVA_TRY {
            GPoint* mousePoint = PointFactory_createXY(PointFactory_getInstance(), MouseEvent_getPoint(mouseEvent)->x, MouseEvent_getPoint(mouseEvent)->y);
            GPoint* point = PointFactory_createXY(PointFactory_getInstance(), GPoint_getX(mousePoint) / x, GPoint_getY(mousePoint) / y);
            this->currentMousePoint = point;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "mouseMoved", e);
        } JAVA_END_TRY;
}


void LinesGraphicItem_keyPressed(LinesGraphicItem* this, KeyEvent* keyEvent) {
        JAVA_TRY {
            int32_t keyCode = KeyEvent_getKeyCode(keyEvent);
            if (keyCode == keyEvent->VK_ESCAPE) {
                StatusFactory_setStatus(StatusFactory_getInstance(), "Deactivated");
                LinesGraphicItem_deactivate(this);
            } else if (keyCode == keyEvent->VK_UP) {
                LinesGraphicItem_translate(this, 0, -1);
            } else if (keyCode == keyEvent->VK_DOWN) {
                LinesGraphicItem_translate(this, 0, 1);
            } else if (keyCode == keyEvent->VK_LEFT) {
                LinesGraphicItem_translate(this, -1, 0);
            } else if (keyCode == keyEvent->VK_RIGHT) {
                LinesGraphicItem_translate(this, 1, 0);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->gameInputStrings->KEY_PRESSED, e);
        } JAVA_END_TRY;
}


void LinesGraphicItem_keyReleased(LinesGraphicItem* this, KeyEvent* keyEvent) {
}


void LinesGraphicItem_keyTyped(LinesGraphicItem* this, KeyEvent* keyEvent) {
}

