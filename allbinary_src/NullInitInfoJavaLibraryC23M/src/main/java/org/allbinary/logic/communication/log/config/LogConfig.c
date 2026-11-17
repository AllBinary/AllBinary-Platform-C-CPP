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
// package org.allbinary.logic.communication.log.config

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/java/bool/BooleanUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/w3c/dom/Node.h"

typedef struct LogConfig LogConfig;
struct LogConfig {
    bool isEnabled;
    const char* name;
    const char* description;
    const char* path;
    const char* fileName;
};


LogConfig* LogConfig_new(const char* aName, const char* aDescription, const char* aPath, const char* aFileName);

void LogConfig_init(LogConfig* this, const char* aName, const char* aDescription, const char* aPath, const char* aFileName);

LogConfig* LogConfig_new1(Node* node);
void LogConfig_init1(LogConfig* this, Node* node);
const char* LogConfig_getName(LogConfig* this);
bool LogConfig_isEnabled(LogConfig* this);
void LogConfig_enable(LogConfig* this);
void LogConfig_disable(LogConfig* this);
const char* LogConfig_getDescription(LogConfig* this);
const char* LogConfig_getFileName(LogConfig* this);
void LogConfig_setName(LogConfig* this, const char* value);
void LogConfig_setDescription(LogConfig* this, const char* value);
void LogConfig_setPath(LogConfig* this, const char* value);
void LogConfig_setFileName(LogConfig* this, const char* value);
BasicArrayList* LogConfig_getTypeVector(LogConfig* this);

static void LogConfig_initFields(LogConfig* this) {
    
    
    
    
    
}


void LogConfig_init(LogConfig* this, const char* aName, const char* aDescription, const char* aPath, const char* aFileName) {
    LogConfig_initFields(this);
        this->isEnabled = false;
        this->name = aName;
        this->description = aDescription;
        this->path = aPath;
        this->fileName = aFileName;
}

LogConfig* LogConfig_new(const char* aName, const char* aDescription, const char* aPath, const char* aFileName) {
    LogConfig* this = calloc(1, sizeof(LogConfig));
    LogConfig_init(this, aName, aDescription, aPath, aFileName);
    return this;
}


void LogConfig_init1(LogConfig* this, Node* node) {
    LogConfig_initFields(this);
        Node* enabledValueNode = DomSearchHelper_getNode(EntryData_getInstance()->ENABLE, Node_getChildNodes(node));
        const char* isEnabledString = DomNodeHelper_getTextNodeValue(enabledValueNode);
        this->isEnabled = BooleanUtil_getFromString(BooleanUtil_getInstance(), isEnabledString);
        LogConfigData* logConfigData = LogConfigData_getInstance();
        Node* nameValueNode = DomSearchHelper_getNode(logConfigData->NAME, Node_getChildNodes(node));
        this->name = DomNodeHelper_getTextNodeValue(nameValueNode);
        Node* descriptionValueNode = DomSearchHelper_getNode(logConfigData->DESCRIPTION, Node_getChildNodes(node));
        this->description = DomNodeHelper_getTextNodeValue(descriptionValueNode);
        Node* fileValueNode = DomSearchHelper_getNode(logConfigData->FILE, Node_getChildNodes(node));
        this->fileName = DomNodeHelper_getTextNodeValue(fileValueNode);
}

LogConfig* LogConfig_new1(Node* node) {
    LogConfig* this = calloc(1, sizeof(LogConfig));
    LogConfig_init1(this, node);
    return this;
}


const char* LogConfig_getName(LogConfig* this) {
        return this->name;
}


bool LogConfig_isEnabled(LogConfig* this) {
        return this->isEnabled;
}


void LogConfig_enable(LogConfig* this) {
        this->isEnabled = true;
}


void LogConfig_disable(LogConfig* this) {
        this->isEnabled = false;
}


const char* LogConfig_getDescription(LogConfig* this) {
        return this->description;
}


const char* LogConfig_getFileName(LogConfig* this) {
        return this->fileName;
}


void LogConfig_setName(LogConfig* this, const char* value) {
        this->name = value;
}


void LogConfig_setDescription(LogConfig* this, const char* value) {
        this->description = value;
}


void LogConfig_setPath(LogConfig* this, const char* value) {
        this->path = value;
}


void LogConfig_setFileName(LogConfig* this, const char* value) {
        this->fileName = value;
}


// throws Exception
BasicArrayList* LogConfig_getTypeVector(LogConfig* this) {
        BasicArrayList* logKeyVector = BasicArrayListD_new();
        return logKeyVector;
}

