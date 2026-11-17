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
// package org.allbinary.input.automation.module.generic.configuration.profile

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
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/media/image/InputImageType.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerTypeInterface.h"

typedef struct GenericProfileDataWorkerType GenericProfileDataWorkerType;
struct GenericProfileDataWorkerType {
    GenericProfileDataWorkerTypeInterface GenericProfileDataWorkerTypeInterface_interface;
    const char* name;
};

static HashMap* GenericProfileDataWorkerType_hashMap;
GenericProfileDataWorkerType* GenericProfileDataWorkerType_SAVED_CAPTURE;
GenericProfileDataWorkerType* GenericProfileDataWorkerType_SCREEN_CAPTURE;
GenericProfileDataWorkerType* GenericProfileDataWorkerType_COMPARISON;
GenericProfileDataWorkerType* GenericProfileDataWorkerType_MOTION;

GenericProfileDataWorkerType* GenericProfileDataWorkerType_new(const char* name);

void GenericProfileDataWorkerType_init(GenericProfileDataWorkerType* this, const char* name);
const char* GenericProfileDataWorkerType_getName(GenericProfileDataWorkerType* this);
void GenericProfileDataWorkerType_setName(GenericProfileDataWorkerType* this, const char* name);
Node* GenericProfileDataWorkerType_toXmlNode(GenericProfileDataWorkerType* this, Document* document);
const char* GenericProfileDataWorkerType_toString(GenericProfileDataWorkerType* this);
GenericProfileDataWorkerType* GenericProfileDataWorkerType_getInstance(Node* node);

// Static fields with runtime initializers: call this once at startup
void GenericProfileDataWorkerType_staticInit(void) {
    GenericProfileDataWorkerType_hashMap = StdUtil_createHashMap(StdUtil_getInstance());
    GenericProfileDataWorkerType_SAVED_CAPTURE = SavedCaptureGenericProfileDataWorkerType_SAVED_CAPTURE;
    GenericProfileDataWorkerType_SCREEN_CAPTURE = GenericProfileDataWorkerType_new(java_concat("Screen ", JAVA_CALL(InputImageType_CAPTURE, getName)));
    GenericProfileDataWorkerType_COMPARISON = GenericProfileDataWorkerType_new(JAVA_CALL(InputImageType_COMPARISON, getName));
    GenericProfileDataWorkerType_MOTION = GenericProfileDataWorkerType_new(JAVA_CALL(InputImageType_MOTION, getName));
}

static void GenericProfileDataWorkerType_initFields(GenericProfileDataWorkerType* this) {
    this->name = nullptr;
}


void GenericProfileDataWorkerType_init(GenericProfileDataWorkerType* this, const char* name) {
    GenericProfileDataWorkerType_initFields(this);
        GenericProfileDataWorkerType_setName(this, name);
        JAVA_CALL(GenericProfileDataWorkerType_hashMap, put, GenericProfileDataWorkerType_getName(this), this);
}

GenericProfileDataWorkerType* GenericProfileDataWorkerType_new(const char* name) {
    GenericProfileDataWorkerType* this = calloc(1, sizeof(GenericProfileDataWorkerType));
    GenericProfileDataWorkerType_init(this, name);
    return this;
}


const char* GenericProfileDataWorkerType_getName(GenericProfileDataWorkerType* this) {
        return this->name;
}


void GenericProfileDataWorkerType_setName(GenericProfileDataWorkerType* this, const char* name) {
        this->name = name;
}


// throws Exception
Node* GenericProfileDataWorkerType_toXmlNode(GenericProfileDataWorkerType* this, Document* document) {
        Node* node = ModDomHelper_createTextNode(document, GenericProfileDataWorkerData_NAME, this->name);
        return node;
}


const char* GenericProfileDataWorkerType_toString(GenericProfileDataWorkerType* this) {
        return java_concat("GenericProfileDataWorkerType: ", GenericProfileDataWorkerType_getName(this));
}


GenericProfileDataWorkerType* GenericProfileDataWorkerType_getInstance(Node* node) {
        const char* name = DomNodeHelper_getTextNodeValue(node);
        return ((GenericProfileDataWorkerType*) JAVA_CALL(GenericProfileDataWorkerType_hashMap, get, name));
}

