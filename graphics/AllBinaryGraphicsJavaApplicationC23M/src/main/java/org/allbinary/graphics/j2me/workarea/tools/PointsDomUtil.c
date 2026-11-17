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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Node.h"

typedef struct PointsDomUtil PointsDomUtil;
struct PointsDomUtil {
    const char* LINES;
    const char* POINTONE;
    const char* POINTTWO;
    const char* ROTATEDPOINTONE;
    const char* ROTATEDPOINTTWO;
    const char* LINE;
};

static PointsDomUtil* PointsDomUtil_instance;

PointsDomUtil* PointsDomUtil_new(void);
PointsDomUtil* PointsDomUtil_getInstance(void);
Node* PointsDomUtil_toDom(PointsDomUtil* this, CanvasDom* canvasDom, BasicArrayList* pointVector);
static Node* PointsDomUtil_getPointNode(PointsDomUtil* this, GPoint* point, const char* pointName);

// Static fields with runtime initializers: call this once at startup
void PointsDomUtil_staticInit(void) {
    PointsDomUtil_instance = PointsDomUtil_new();
}

static void PointsDomUtil_initFields(PointsDomUtil* this) {
    this->LINES = "lines";
    this->POINTONE = "pointOne";
    this->POINTTWO = "pointTwo";
    this->ROTATEDPOINTONE = "rotatedPointOne";
    this->ROTATEDPOINTTWO = "rotatedPointTwo";
    this->LINE = "line";
}

void PointsDomUtil_init(PointsDomUtil* this) {
    PointsDomUtil_initFields(this);
}

PointsDomUtil* PointsDomUtil_new(void) {
    PointsDomUtil* this = calloc(1, sizeof(PointsDomUtil));
    PointsDomUtil_init(this);
    return this;
}


PointsDomUtil* PointsDomUtil_getInstance(void) {
        return PointsDomUtil_instance;
}


// throws Exception
Node* PointsDomUtil_toDom(PointsDomUtil* this, CanvasDom* canvasDom, BasicArrayList* pointVector) {
        BasicArrayList* tempPointVector = PointsUtil_doTransforms(PointsUtil_getInstance(), pointVector, CanvasDom_getAngle(canvasDom), PointFactory_createXY(PointFactory_getInstance(), JAVA_CALL(CanvasDom_getDimension(canvasDom), getWidth), JAVA_CALL(CanvasDom_getDimension(canvasDom), getHeight)));
        Document* document = WorkAreaJPanel_getDocument();
        Node* linesNode = ((Node*) Document_createElement(document, this->LINES));
        int32_t size2 = BasicArrayList_size(tempPointVector);
        int32_t size = BasicArrayList_size(pointVector);
        GPoint* firstPoint = nullptr;
        GPoint* rotatedFirstPoint = nullptr;
        int32_t index = 0;
        if (index < size && index < size2) {
            rotatedFirstPoint = ((GPoint*) BasicArrayList_get(tempPointVector, index));
            firstPoint = ((GPoint*) BasicArrayList_get(pointVector, index));
            index++;
        }
        while (index < size && index < size2) {
            Node* lineNode = ((Node*) Document_createElement(document, this->LINE));
            GPoint* rotatedSecondPoint = ((GPoint*) BasicArrayList_get(tempPointVector, index));
            GPoint* secondPoint = ((GPoint*) BasicArrayList_get(pointVector, index));
            Node* pointOneNode = PointsDomUtil_getPointNode(this, firstPoint, this->POINTONE);
            Node* pointTwoNode = PointsDomUtil_getPointNode(this, secondPoint, this->POINTTWO);
            Node* rotatedPointOneNode = PointsDomUtil_getPointNode(this, rotatedFirstPoint, this->ROTATEDPOINTONE);
            Node* rotatedPointTwoNode = PointsDomUtil_getPointNode(this, rotatedSecondPoint, this->ROTATEDPOINTTWO);
            Node_appendChild(lineNode, pointOneNode);
            Node_appendChild(lineNode, pointTwoNode);
            Node_appendChild(lineNode, rotatedPointOneNode);
            Node_appendChild(lineNode, rotatedPointTwoNode);
            firstPoint = secondPoint;
            rotatedFirstPoint = rotatedSecondPoint;
            Node_appendChild(linesNode, lineNode);
            index++;
        }
        return linesNode;
}


static Node* PointsDomUtil_getPointNode(PointsDomUtil* this, GPoint* point, const char* pointName) {
        Document* document = WorkAreaJPanel_getDocument();
        Node* pointNode = ((Node*) Document_createElement(document, pointName));
        Node* xNode = ((Node*) Document_createElement(document, PositionStrings_getInstance()->X));
        Node* xTextNode = ((Node*) Document_createTextNode(document, java_string_of(GPoint_getX(point))));
        Node_appendChild(xNode, xTextNode);
        Node* yNode = ((Node*) Document_createElement(document, PositionStrings_getInstance()->Y));
        Node* yTextNode = ((Node*) Document_createTextNode(document, java_string_of(GPoint_getY(point))));
        Node_appendChild(yNode, yTextNode);
        Node_appendChild(pointNode, xNode);
        Node_appendChild(pointNode, yNode);
        return pointNode;
}

