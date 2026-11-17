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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/BasicProfileActionScriptOutput.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"

typedef struct ImageActionScriptOutput ImageActionScriptOutput;
struct ImageActionScriptOutput {
    BasicProfileActionScriptOutput base;
    ImageActionScriptOutputInterface ImageActionScriptOutputInterface_interface;
    LogUtil* logUtil;
    bool saved;
    bool display;
    ImageTypes* imageTypes;
    ImageActionScriptOutputJPanel* actionScriptOutputJPanel;
};

static const char* ImageActionScriptOutput_NAME = "Captures";

ImageActionScriptOutput* ImageActionScriptOutput_new(Node* node);

void ImageActionScriptOutput_init(ImageActionScriptOutput* this, Node* node);

ImageActionScriptOutput* ImageActionScriptOutput_new0();
void ImageActionScriptOutput_init0(ImageActionScriptOutput* this);
ImageActionScriptOutputJPanel* ImageActionScriptOutput_getActionScriptOutputJPanel(ImageActionScriptOutput* this);
HashMap* ImageActionScriptOutput_toHashMap(ImageActionScriptOutput* this);
Node* ImageActionScriptOutput_toXmlNode(ImageActionScriptOutput* this, Document* document);
void ImageActionScriptOutput_process(ImageActionScriptOutput* this, int64_t frame);
void ImageActionScriptOutput_showDialog(ImageActionScriptOutput* this);
bool ImageActionScriptOutput_isSaved(ImageActionScriptOutput* this);
void ImageActionScriptOutput_setSaved(ImageActionScriptOutput* this, bool saved);
bool ImageActionScriptOutput_isDisplay(ImageActionScriptOutput* this);
void ImageActionScriptOutput_setDisplay(ImageActionScriptOutput* this, bool display);
const char* ImageActionScriptOutput_future_toString(ImageActionScriptOutput* this);
void ImageActionScriptOutput_log(ImageActionScriptOutput* this);
ImageTypes* ImageActionScriptOutput_getImageTypes(ImageActionScriptOutput* this);
void ImageActionScriptOutput_setImageTypes(ImageActionScriptOutput* this, ImageTypes* imageTypes);

static void ImageActionScriptOutput_initFields(ImageActionScriptOutput* this) {
    this->logUtil = LogUtil_getInstance();
    this->saved = false;
    this->display = false;
    this->imageTypes = nullptr;
    
}


void ImageActionScriptOutput_init(ImageActionScriptOutput* this, Node* node) {
        BasicProfileActionScriptOutput_init(&this->base, ImageActionScriptOutput_NAME, node);
        ImageActionScriptOutput_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        Node* actionNode = DomSearchHelper_getNode(ImageActionScriptOutputData_NAME, Node_getChildNodes(node));
        if (actionNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* childNode = NodeList_item(nodeList, index);
                if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ImageActionScriptOutputData_SAVE) == 0) {
                    const char* booleanString = DomNodeHelper_getTextNodeValue(childNode);
                    ImageActionScriptOutput_setSaved(this, Boolean_booleanValue(booleanString));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ImageActionScriptOutputData_DISPLAY) == 0) {
                    const char* booleanString = DomNodeHelper_getTextNodeValue(childNode);
                    ImageActionScriptOutput_setSaved(this, Boolean_booleanValue(booleanString));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ImageActionScriptOutputData_TYPES) == 0) {
                    ImageActionScriptOutput_setImageTypes(this, ImageTypes_new(childNode));
                } else {
                    java_throw(java_exception_new("Exception", "Action Script Output Unknown Node"));
                }
            }
        } else {
            java_throw(java_exception_new("Exception", "Action Script Output Node Null"));
        }
        ImageActionScriptOutput_setAllowsChildren(this, false);
        this->actionScriptOutputJPanel = ImageActionScriptOutputJPanel_new(this);
}

ImageActionScriptOutput* ImageActionScriptOutput_new(Node* node) {
    ImageActionScriptOutput* this = calloc(1, sizeof(ImageActionScriptOutput));
    ImageActionScriptOutput_init(this, node);
    return this;
}


void ImageActionScriptOutput_init0(ImageActionScriptOutput* this) {
        BasicProfileActionScriptOutput_init(&this->base, ImageActionScriptOutput_NAME);
        ImageActionScriptOutput_initFields(this);
        ImageActionScriptOutput_setImageTypes(this, ImageTypes_new());
        ImageActionScriptOutput_setAllowsChildren(this, false);
        this->actionScriptOutputJPanel = ImageActionScriptOutputJPanel_new(this);
}

ImageActionScriptOutput* ImageActionScriptOutput_new0(void) {
    ImageActionScriptOutput* this = calloc(1, sizeof(ImageActionScriptOutput));
    ImageActionScriptOutput_init0(this);
    return this;
}


ImageActionScriptOutputJPanel* ImageActionScriptOutput_getActionScriptOutputJPanel(ImageActionScriptOutput* this) {
        return this->actionScriptOutputJPanel;
}


HashMap* ImageActionScriptOutput_toHashMap(ImageActionScriptOutput* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, ImageActionScriptOutputData_DISPLAY, java_string_of(ImageActionScriptOutput_isDisplay(this)));
        HashMap_put(hashMap, ImageActionScriptOutputData_SAVE, java_string_of(ImageActionScriptOutput_isSaved(this)));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* ImageActionScriptOutput_toXmlNode(ImageActionScriptOutput* this, Document* document) {
        Node* node = BasicProfileActionScriptOutput_toXmlNode((&this->base), document);
        Node* newNode = ModDomHelper_createNodeWithValueNodes(document, ImageActionScriptOutputData_NAME, ImageActionScriptOutput_toHashMap(this));
        Node_appendChild(newNode, JAVA_CALL(ImageActionScriptOutput_getImageTypes(this), toXmlNode, document));
        Node_appendChild(node, newNode);
        return node;
}


// throws Exception
void ImageActionScriptOutput_process(ImageActionScriptOutput* this, int64_t frame) {
        ImageActionScriptOutputProcessor_process(this, frame);
}


void ImageActionScriptOutput_showDialog(ImageActionScriptOutput* this) {
        JAVA_CALL(ImageActionScriptOutputJPanel_getCapturedImageActionJDialog(this->actionScriptOutputJPanel), setVisible, true);
}


bool ImageActionScriptOutput_isSaved(ImageActionScriptOutput* this) {
        return this->saved;
}


void ImageActionScriptOutput_setSaved(ImageActionScriptOutput* this, bool saved) {
        this->saved = saved;
}


bool ImageActionScriptOutput_isDisplay(ImageActionScriptOutput* this) {
        return this->display;
}


void ImageActionScriptOutput_setDisplay(ImageActionScriptOutput* this, bool display) {
        this->display = display;
}


const char* ImageActionScriptOutput_future_toString(ImageActionScriptOutput* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, " Is Save: ");
        StringMaker_appendboolean(stringBuffer, ImageActionScriptOutput_isSaved(this));
        StringMaker_append(stringBuffer, " Is Display: ");
        StringMaker_appendboolean(stringBuffer, ImageActionScriptOutput_isDisplay(this));
        StringMaker_append(stringBuffer, " ");
        StringMaker_append(stringBuffer, JAVA_CALL(ImageActionScriptOutput_getImageTypes(this), toString));
        return StringMaker_toString(stringBuffer);
}


void ImageActionScriptOutput_log(ImageActionScriptOutput* this) {
        LogUtil_putF(this->logUtil, ImageActionScriptOutput_future_toString(this), this, "log");
}


ImageTypes* ImageActionScriptOutput_getImageTypes(ImageActionScriptOutput* this) {
        return this->imageTypes;
}


void ImageActionScriptOutput_setImageTypes(ImageActionScriptOutput* this, ImageTypes* imageTypes) {
        this->imageTypes = imageTypes;
}

