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
// package org.allbinary.graphics.j2me.workarea.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/animation/vector/VectorCenterGenerator.h"
#include "org/allbinary/dom/DomHelper.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/GraphicsStrings.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Node.h"

typedef struct CanvasDom CanvasDom;
struct CanvasDom {
    GraphicsStrings* graphicsStrings;
    HashMap* graphicItemHashMap;
    double angle;
    IntegerDimension* dimension;
    Grid* grid;
};

const char* CanvasDom_FRAME = "frame";
const char* CanvasDom_ROTATE = "rotate";
const char* CanvasDom_SIZE = "size";
const char* CanvasDom_X = "X";
const char* CanvasDom_Y = "Y";
const char* CanvasDom_ZOOM = "zoom";
const char* CanvasDom_GRID = "grid";
const char* CanvasDom_ENABLED = "enabled";
const char* CanvasDom_POSSIBLE = "possible";
const char* CanvasDom_GRAPHICITEMS = "graphicItems";
const char* CanvasDom_REAL_SIZE = "realSize";

CanvasDom* CanvasDom_new(Node* canvasNode);

void CanvasDom_init(CanvasDom* this, Node* canvasNode);

CanvasDom* CanvasDom_new1(CanvasJPanel* canvasJPanel);
void CanvasDom_init1(CanvasDom* this, CanvasJPanel* canvasJPanel);
double CanvasDom_getAngle(CanvasDom* this);
HashMap* CanvasDom_getGraphicItemHashMap(CanvasDom* this);
void CanvasDom_setAngle(CanvasDom* this, double angle);
void CanvasDom_setWorkArea(CanvasDom* this, int32_t x, int32_t y);
void CanvasDom_setGrid(CanvasDom* this, int32_t gridX, int32_t gridY);
static Node* CanvasDom_getPointNode(CanvasDom* this, GPoint* point, const char* pointName);
Node* CanvasDom_toDom(CanvasDom* this);
IntegerDimension* CanvasDom_getDimension(CanvasDom* this);
void CanvasDom_setDimension(CanvasDom* this, IntegerDimension* dimension);
Grid* CanvasDom_getGrid(CanvasDom* this);

static void CanvasDom_initFields(CanvasDom* this) {
    this->graphicsStrings = GraphicsStrings_getInstance();
    
    
    
    
}


void CanvasDom_init(CanvasDom* this, Node* canvasNode) {
    CanvasDom_initFields(this);
        this->grid = Grid_new();
        this->grid->grid = PointFactory_createXY(PointFactory_getInstance(), 0, 0);
        this->dimension = IntegerDimension_new(0, 0);
        const char* name = Node_getNodeName(canvasNode);
        if (strcmp(name, CanvasDom_FRAME) == 0) {
            this->graphicItemHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            Node* angleNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_ROTATE, Node_getChildNodes(canvasNode));
            Node* angleTextNode = Node_getFirstChild(angleNode);
            double angle = Double_doubleValue(Node_getNodeValue(angleTextNode));
            CanvasDom_setAngle(this, angle);
            Node* sizeNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_SIZE, Node_getChildNodes(canvasNode));
            Node* xNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_X, Node_getChildNodes(sizeNode));
            Node* xTextNode = Node_getFirstChild(xNode);
            int32_t x = Integer_intValue(Node_getNodeValue(xTextNode));
            Node* yNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_Y, Node_getChildNodes(sizeNode));
            Node* yTextNode = Node_getFirstChild(yNode);
            int32_t y = Integer_intValue(Node_getNodeValue(yTextNode));
            CanvasDom_setWorkArea(this, x, y);
            Node* zoomNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_ZOOM, Node_getChildNodes(canvasNode));
            Node* zoomTextNode = Node_getFirstChild(zoomNode);
            Grid_setZoom(this->grid, Integer_intValue(Node_getNodeValue(zoomTextNode)));
            Node* gridNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_GRID, Node_getChildNodes(canvasNode));
            Node* gridSizeNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_SIZE, Node_getChildNodes(gridNode));
            Node* gridXNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_X, Node_getChildNodes(gridSizeNode));
            Node* gridXTextNode = Node_getFirstChild(gridXNode);
            int32_t gridX = Integer_intValue(Node_getNodeValue(gridXTextNode));
            Node* gridYNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_Y, Node_getChildNodes(gridSizeNode));
            Node* gridYTextNode = Node_getFirstChild(gridYNode);
            int32_t gridY = Integer_intValue(Node_getNodeValue(gridYTextNode));
            CanvasDom_setGrid(this, gridX, gridY);
            Node* enableNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_ENABLED, Node_getChildNodes(gridNode));
            Node* enableTextNode = Node_getFirstChild(enableNode);
            Grid_showGrid(this->grid, Boolean_booleanValue(Node_getNodeValue(enableTextNode)));
            Node* possibleNode = DomHelper_searchNodeList(DomHelper_getInstance(), CanvasDom_POSSIBLE, Node_getChildNodes(gridNode));
            Node* possibleTextNode = Node_getFirstChild(possibleNode);
            this->grid->isGridPossible = Boolean_booleanValue(Node_getNodeValue(possibleTextNode));
            BasicArrayList* graphicItemNodeList = DomHelper_getChildrenWithoutTextNodes(DomHelper_getInstance(), CanvasDom_GRAPHICITEMS, Node_getChildNodes(canvasNode));
            if (graphicItemNodeList != nullptr) {
                this->graphicItemHashMap = GraphicItemFactory_getInstance(GraphicItemFactory_getInstance(), graphicItemNodeList);
            }
        } else {
            java_throw(java_exception_new("Exception", java_concat("Frame Element Not Found but Found: ", name)));
        }
}

CanvasDom* CanvasDom_new(Node* canvasNode) {
    CanvasDom* this = calloc(1, sizeof(CanvasDom));
    CanvasDom_init(this, canvasNode);
    return this;
}


void CanvasDom_init1(CanvasDom* this, CanvasJPanel* canvasJPanel) {
    CanvasDom_initFields(this);
        this->angle = CanvasJPanel_getAngle(canvasJPanel);
        this->graphicItemHashMap = CanvasJPanel_getGraphicItemHashMap(canvasJPanel);
        this->dimension = CanvasJPanel_getCanvasDimension(canvasJPanel);
        this->grid = Grid_new(CanvasJPanel_getGrid(canvasJPanel));
        this->angle = CanvasJPanel_getAngle(canvasJPanel);
}

CanvasDom* CanvasDom_new1(CanvasJPanel* canvasJPanel) {
    CanvasDom* this = calloc(1, sizeof(CanvasDom));
    CanvasDom_init1(this, canvasJPanel);
    return this;
}


double CanvasDom_getAngle(CanvasDom* this) {
        return this->angle;
}


HashMap* CanvasDom_getGraphicItemHashMap(CanvasDom* this) {
        return this->graphicItemHashMap;
}


void CanvasDom_setAngle(CanvasDom* this, double angle) {
        this->angle = angle;
}


// throws Exception
void CanvasDom_setWorkArea(CanvasDom* this, int32_t x, int32_t y) {
        CanvasDom_setDimension(this, IntegerDimension_new(x, y));
}


// throws Exception
void CanvasDom_setGrid(CanvasDom* this, int32_t gridX, int32_t gridY) {
        this->grid->grid = PointFactory_createXY(PointFactory_getInstance(), gridX, gridY);
}


static Node* CanvasDom_getPointNode(CanvasDom* this, GPoint* point, const char* pointName) {
        Document* document = WorkAreaJPanel_getDocument();
        Node* pointNode = ((Node*) Document_createElement(document, pointName));
        Node* xNode = ((Node*) Document_createElement(document, CanvasDom_X));
        Node* xTextNode = ((Node*) Document_createTextNode(document, java_string_of(GPoint_getX(point))));
        Node_appendChild(xNode, xTextNode);
        Node* yNode = ((Node*) Document_createElement(document, CanvasDom_Y));
        Node* yTextNode = ((Node*) Document_createTextNode(document, java_string_of(GPoint_getY(point))));
        Node_appendChild(yNode, yTextNode);
        Node_appendChild(pointNode, xNode);
        Node_appendChild(pointNode, yNode);
        return pointNode;
}


// throws Exception
Node* CanvasDom_toDom(CanvasDom* this) {
        Document* document = WorkAreaJPanel_getDocument();
        Node* frameNode = ((Node*) Document_createElement(document, CanvasDom_FRAME));
        Node* angleNode = ((Node*) Document_createElement(document, CanvasDom_ROTATE));
        Node* angleTextNode = ((Node*) Document_createTextNode(document, Double_toString(CanvasDom_getAngle(this))));
        Node_appendChild(angleNode, angleTextNode);
        Node* sizeNode = ((Node*) CanvasDom_getPointNode(this, PointFactory_createXY(PointFactory_getInstance(), JAVA_CALL(CanvasDom_getDimension(this), getWidth), JAVA_CALL(CanvasDom_getDimension(this), getHeight)), CanvasDom_SIZE));
        Node* zoomNode = ((Node*) Document_createElement(document, CanvasDom_ZOOM));
        Node* zoomTextNode = ((Node*) Document_createTextNode(document, Integer_toString(JAVA_CALL(CanvasDom_getGrid(this), getZoom))));
        Node_appendChild(zoomNode, zoomTextNode);
        Node* gridNode = ((Node*) Document_createElement(document, CanvasDom_GRID));
        Node* gridSizeNode = ((Node*) CanvasDom_getPointNode(this, CanvasDom_getGrid(this)->grid, CanvasDom_SIZE));
        Node_appendChild(gridNode, gridSizeNode);
        Node* enableNode = ((Node*) Document_createElement(document, CanvasDom_ENABLED));
        Node* enableTextNode = ((Node*) Document_createTextNode(document, Boolean_toString(JAVA_CALL(CanvasDom_getGrid(this), isGridOn))));
        Node_appendChild(enableNode, enableTextNode);
        Node_appendChild(gridNode, enableNode);
        Node* possibleNode = ((Node*) Document_createElement(document, CanvasDom_POSSIBLE));
        Node* possibleTextNode = ((Node*) Document_createTextNode(document, Boolean_toString(JAVA_CALL(CanvasDom_getGrid(this), isGridPossible))));
        Node_appendChild(possibleNode, possibleTextNode);
        Node_appendChild(gridNode, possibleNode);
        Node* realSizeNode = ((Node*) Document_createElement(document, CanvasDom_REAL_SIZE));
        VectorCenterGenerator* vectorCenterGenerator = VectorCenterGenerator_new();
        VectorCenterGenerator_calculate(vectorCenterGenerator, CanvasDom_getGraphicItemHashMap(this));
        Node* widthNode = ((Node*) Document_createElement(document, this->graphicsStrings->WIDTH));
        Node* widthTextNode = ((Node*) Document_createTextNode(document, java_string_of(VectorCenterGenerator_getWidth(vectorCenterGenerator))));
        Node_appendChild(widthNode, widthTextNode);
        Node_appendChild(realSizeNode, widthNode);
        Node* heightNode = ((Node*) Document_createElement(document, this->graphicsStrings->HEIGHT));
        Node* heightTextNode = ((Node*) Document_createTextNode(document, java_string_of(VectorCenterGenerator_getHeight(vectorCenterGenerator))));
        Node_appendChild(heightNode, heightTextNode);
        Node_appendChild(realSizeNode, heightNode);
        Node_appendChild(frameNode, angleNode);
        Node_appendChild(frameNode, sizeNode);
        Node_appendChild(frameNode, zoomNode);
        Node_appendChild(frameNode, gridNode);
        Node_appendChild(frameNode, realSizeNode);
        Node* graphicItemNode = ((Node*) Document_createElement(document, CanvasDom_GRAPHICITEMS));
        Any** graphicItemArray = JAVA_CALL(JAVA_CALL(CanvasDom_getGraphicItemHashMap(this), keySet), toArray);
        int32_t size = java_array_length(graphicItemArray);
        for (int32_t index = 0; index < size; index++) {
            GraphicItemInterface* item = ((GraphicItemInterface*) HashMap_get(this->graphicItemHashMap, graphicItemArray[index]));
            if (GraphicItemInterface_getName(item) == LinesGraphicItem_getStaticName()) {
                if (GraphicItemInterface_isValid(item)) {
                    Node_appendChild(graphicItemNode, GraphicItemInterface_toDom(item, this));
                }
            }
        }
        Node_appendChild(frameNode, graphicItemNode);
        return frameNode;
}


IntegerDimension* CanvasDom_getDimension(CanvasDom* this) {
        return this->dimension;
}


void CanvasDom_setDimension(CanvasDom* this, IntegerDimension* dimension) {
        this->dimension = dimension;
}


Grid* CanvasDom_getGrid(CanvasDom* this) {
        return this->grid;
}

