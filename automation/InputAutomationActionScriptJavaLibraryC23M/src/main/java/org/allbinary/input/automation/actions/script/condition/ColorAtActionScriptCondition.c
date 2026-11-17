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
// package org.allbinary.input.automation.actions.script.condition

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/Color.h"
// #include "java/awt/Point.h"
// #include "java/awt/image/BufferedImage.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/graphics/color/ColorCacheFactory.h"
#include "org/allbinary/graphics/color/ColorCacheable.h"
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/media/image/analysis/ColorRange.h"
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#include "org/allbinary/media/image/cache/BufferedImageFrameCacheable.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h"

typedef struct ColorAtActionScriptCondition ColorAtActionScriptCondition;
struct ColorAtActionScriptCondition {
    BasicProfileActionScriptCondition base;
    ColorAtActionScriptConditionInterface ColorAtActionScriptConditionInterface_interface;
    LogUtil* logUtil;
    ColorAtActionScriptConditionJPanel* colorAtActionScriptConditionJPanel;
    Point* point;
    ColorRangeInterface* colorRangeInterface;
};

static const char* ColorAtActionScriptCondition_NAME = "If Color At";

ColorAtActionScriptCondition* ColorAtActionScriptCondition_new(Node* node);

void ColorAtActionScriptCondition_init(ColorAtActionScriptCondition* this, Node* node);

ColorAtActionScriptCondition* ColorAtActionScriptCondition_new0();
void ColorAtActionScriptCondition_init0(ColorAtActionScriptCondition* this);
static void ColorAtActionScriptCondition_init(ColorAtActionScriptCondition* this);
Point* ColorAtActionScriptCondition_getPoint(ColorAtActionScriptCondition* this);
void ColorAtActionScriptCondition_setPoint(ColorAtActionScriptCondition* this, Point* point);
void ColorAtActionScriptCondition_showDialog(ColorAtActionScriptCondition* this);
HashMap* ColorAtActionScriptCondition_toHashMap(ColorAtActionScriptCondition* this);
Node* ColorAtActionScriptCondition_toXmlNode(ColorAtActionScriptCondition* this, Document* document);
bool ColorAtActionScriptCondition_shouldProcess(ColorAtActionScriptCondition* this, int64_t frame);
void ColorAtActionScriptCondition_log(ColorAtActionScriptCondition* this);
ColorRangeInterface* ColorAtActionScriptCondition_getColorRangeInterface(ColorAtActionScriptCondition* this);
void ColorAtActionScriptCondition_setColorRangeInterface(ColorAtActionScriptCondition* this, ColorRangeInterface* colorRangeInterface);

static void ColorAtActionScriptCondition_initFields(ColorAtActionScriptCondition* this) {
    this->logUtil = LogUtil_getInstance();
    this->colorAtActionScriptConditionJPanel = nullptr;
    
    this->colorRangeInterface = ((ColorRangeInterface*) ColorRange_new());
}


void ColorAtActionScriptCondition_init(ColorAtActionScriptCondition* this, Node* node) {
        BasicProfileActionScriptCondition_init(&this->base, ColorAtActionScriptCondition_NAME, node);
        ColorAtActionScriptCondition_initFields(this);
        this->point = Point_new(0, 0);
        Node* actionNode = DomSearchHelper_getNode(ColorAtActionScriptConditionData_NAME, Node_getChildNodes(node));
        if (actionNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* childNode = NodeList_item(nodeList, index);
                if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_LOCATION_X) == 0) {
                    const char* locationX = DomNodeHelper_getTextNodeValue(childNode);
                    this->point->x = java_string_of(locationX);
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_LOCATION_Y) == 0) {
                    const char* locationY = DomNodeHelper_getTextNodeValue(childNode);
                    this->point->y = java_string_of(locationY);
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_MIN_RED) == 0) {
                    const char* string = DomNodeHelper_getTextNodeValue(childNode);
                    JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), setMinRed, java_string_of(string));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_MAX_RED) == 0) {
                    const char* string = DomNodeHelper_getTextNodeValue(childNode);
                    JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), setMaxRed, java_string_of(string));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_MIN_GREEN) == 0) {
                    const char* string = DomNodeHelper_getTextNodeValue(childNode);
                    JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), setMinGreen, java_string_of(string));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_MAX_GREEN) == 0) {
                    const char* string = DomNodeHelper_getTextNodeValue(childNode);
                    JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), setMaxGreen, java_string_of(string));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_MIN_BLUE) == 0) {
                    const char* string = DomNodeHelper_getTextNodeValue(childNode);
                    JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), setMinBlue, java_string_of(string));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ColorAtActionScriptConditionData_MAX_BLUE) == 0) {
                    const char* string = DomNodeHelper_getTextNodeValue(childNode);
                    JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), setMaxBlue, java_string_of(string));
                }
            }
        } else {
            java_throw(java_exception_new("Exception", "Color At Action Script Condition Node Null"));
        }
        ColorAtActionScriptCondition_init(this);
}

ColorAtActionScriptCondition* ColorAtActionScriptCondition_new(Node* node) {
    ColorAtActionScriptCondition* this = calloc(1, sizeof(ColorAtActionScriptCondition));
    ColorAtActionScriptCondition_init(this, node);
    return this;
}


void ColorAtActionScriptCondition_init0(ColorAtActionScriptCondition* this) {
        BasicProfileActionScriptCondition_init(&this->base, ColorAtActionScriptCondition_NAME);
        ColorAtActionScriptCondition_initFields(this);
        this->point = Point_new(0, 0);
        ColorAtActionScriptCondition_init(this);
}

ColorAtActionScriptCondition* ColorAtActionScriptCondition_new0(void) {
    ColorAtActionScriptCondition* this = calloc(1, sizeof(ColorAtActionScriptCondition));
    ColorAtActionScriptCondition_init0(this);
    return this;
}


static void ColorAtActionScriptCondition_init(ColorAtActionScriptCondition* this) {
        this->colorAtActionScriptConditionJPanel = ColorAtActionScriptConditionJPanel_new(this);
}


Point* ColorAtActionScriptCondition_getPoint(ColorAtActionScriptCondition* this) {
        return this->point;
}


void ColorAtActionScriptCondition_setPoint(ColorAtActionScriptCondition* this, Point* point) {
        this->point = point;
}


void ColorAtActionScriptCondition_showDialog(ColorAtActionScriptCondition* this) {
        JAVA_CALL(ColorAtActionScriptConditionJPanel_getColorAtActionJDialog(this->colorAtActionScriptConditionJPanel), setVisible, true);
}


HashMap* ColorAtActionScriptCondition_toHashMap(ColorAtActionScriptCondition* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, ColorAtActionScriptConditionData_LOCATION_X, java_string_of(ColorAtActionScriptCondition_getPoint(this)->x));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_LOCATION_Y, java_string_of(ColorAtActionScriptCondition_getPoint(this)->y));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_MIN_RED, java_string_of(JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), getMinRed)));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_MAX_RED, java_string_of(JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), getMaxRed)));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_MIN_GREEN, java_string_of(JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), getMinGreen)));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_MAX_GREEN, java_string_of(JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), getMaxGreen)));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_MIN_BLUE, java_string_of(JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), getMinBlue)));
        HashMap_put(hashMap, ColorAtActionScriptConditionData_MAX_BLUE, java_string_of(JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), getMaxBlue)));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* ColorAtActionScriptCondition_toXmlNode(ColorAtActionScriptCondition* this, Document* document) {
        Node* node = BasicProfileActionScriptCondition_toXmlNode((&this->base), document);
        Node_appendChild(node, ModDomHelper_createNodeWithValueNodes(document, ColorAtActionScriptConditionData_NAME, ColorAtActionScriptCondition_toHashMap(this)));
        return node;
}


// throws Exception
bool ColorAtActionScriptCondition_shouldProcess(ColorAtActionScriptCondition* this, int64_t frame) {
        BufferedImageFrameCacheable* capturedBufferedImageCacheable = ((BufferedImageFrameCacheable*) AutomaticCacheInterface_get((((AutomaticCacheInterface*) CapturedBufferedImagesCacheSingleton_getInstance())), java_string_of(frame)));
        BufferedImage* bufferedImage = BufferedImageFrameCacheable_getBufferedImage(capturedBufferedImageCacheable);
        AutomaticCacheInterface* automaticCacheInterface = ColorCacheFactory_getInstance();
        int32_t colorInteger = java_string_of(BufferedImage_getRGB(bufferedImage, ColorAtActionScriptCondition_getPoint(this)->x, ColorAtActionScriptCondition_getPoint(this)->y));
        ColorCacheable* colorCacheable = ((ColorCacheable*) AutomaticCacheInterface_get(automaticCacheInterface, colorInteger));
        Color* color = ColorCacheable_getColor(colorCacheable);
        if (ColorRangeInterface_isInRange(this->colorRangeInterface, color)) {
            return BasicProfileActionScriptCondition_shouldProcess((&this->base), frame);
        }
        return false;
}


void ColorAtActionScriptCondition_log(ColorAtActionScriptCondition* this) {
        const char* message = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "getPoint(): "), append, JAVA_CALL(ColorAtActionScriptCondition_getPoint(this), toString)), append, CommonSeps_getInstance()->NEW_LINE), append, JAVA_CALL(ColorAtActionScriptCondition_getColorRangeInterface(this), toString)), toString);
        LogUtil_putF(this->logUtil, message, this, "log");
}


ColorRangeInterface* ColorAtActionScriptCondition_getColorRangeInterface(ColorAtActionScriptCondition* this) {
        return this->colorRangeInterface;
}


void ColorAtActionScriptCondition_setColorRangeInterface(ColorAtActionScriptCondition* this, ColorRangeInterface* colorRangeInterface) {
        this->colorRangeInterface = colorRangeInterface;
}

