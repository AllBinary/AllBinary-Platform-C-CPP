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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/media/image/InputImageType.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct ImageTypes ImageTypes;
struct ImageTypes {
    BasicArrayList* vector;
};


ImageTypes* ImageTypes_new(void);

void ImageTypes_init(ImageTypes* this);

ImageTypes* ImageTypes_new1(Node* node);
void ImageTypes_init1(ImageTypes* this, Node* node);
ImageTypes* ImageTypes_valueOf(Any** anyType);
BasicArrayList* ImageTypes_getVector(ImageTypes* this);
Node* ImageTypes_toXmlNode(ImageTypes* this, Document* document);
const char* ImageTypes_toString(ImageTypes* this);

static void ImageTypes_initFields(ImageTypes* this) {
    this->vector = BasicArrayListD_new();
}


void ImageTypes_init(ImageTypes* this) {
    ImageTypes_initFields(this);
}

ImageTypes* ImageTypes_new(void) {
    ImageTypes* this = calloc(1, sizeof(ImageTypes));
    ImageTypes_init(this);
    return this;
}


void ImageTypes_init1(ImageTypes* this, Node* node) {
    ImageTypes_initFields(this);
        NodeList* nodeList = Node_getChildNodes(node);
        for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
            Node* childNode = NodeList_item(nodeList, index);
            if (JAVA_CALL(Node_getNodeName(childNode), compareTo, ImageActionScriptOutputData_TYPE) == 0) {
                const char* nextImageTypeString = DomNodeHelper_getTextNodeValue(childNode);
                JAVA_CALL(ImageTypes_getVector(this), add, InputImageType_getInstance(nextImageTypeString));
            } else {
                java_throw(java_exception_new("Exception", "ImageTypes Unknown Node"));
            }
        }
}

ImageTypes* ImageTypes_new1(Node* node) {
    ImageTypes* this = calloc(1, sizeof(ImageTypes));
    ImageTypes_init1(this, node);
    return this;
}


ImageTypes* ImageTypes_valueOf(Any** anyType) {
        ImageTypes* imageTypes = ImageTypes_new();
        for (int32_t index = 0; index < java_array_length(anyType); index++) {
            InputImageType* imageType = InputImageType_getInstance(((const char*) anyType[index]));
            JAVA_CALL(ImageTypes_getVector(imageTypes), add, imageType);
        }
        return imageTypes;
}


BasicArrayList* ImageTypes_getVector(ImageTypes* this) {
        return this->vector;
}


// throws Exception
Node* ImageTypes_toXmlNode(ImageTypes* this, Document* document) {
        Node* newNode = Document_createElement(document, ImageActionScriptOutputData_TYPES);
        int32_t size = BasicArrayList_size(this->vector);
        for (int32_t index = 0; index < size; index++) {
            InputImageType* imageType = ((InputImageType*) BasicArrayList_get(this->vector, index));
            Node_appendChild(newNode, ModDomHelper_createTextNode(document, ImageActionScriptOutputData_TYPE, InputImageType_getName(imageType)));
        }
        return newNode;
}


const char* ImageTypes_toString(ImageTypes* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "ImageTypes: ");
        int32_t size = BasicArrayList_size(this->vector);
        for (int32_t index = 0; index < size; index++) {
            InputImageType* imageType = ((InputImageType*) BasicArrayList_get(this->vector, index));
            StringMaker_append(stringBuffer, InputImageType_getName(imageType));
            if (index < size - 1) {
                StringMaker_append(stringBuffer, ", ");
            }
        }
        return StringMaker_toString(stringBuffer);
}

