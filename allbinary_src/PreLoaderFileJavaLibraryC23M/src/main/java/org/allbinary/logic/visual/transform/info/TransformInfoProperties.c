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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TransformInfoProperties TransformInfoProperties;
struct TransformInfoProperties {
    const char* name;
    const char* label;
    const char* description;
    const char* objectFileName;
    const char* objectConfigFileName;
    const char* templateFileName;
};


TransformInfoProperties* TransformInfoProperties_new(const char* name, const char* label, const char* description, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName);

void TransformInfoProperties_init(TransformInfoProperties* this, const char* name, const char* label, const char* description, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName);
void TransformInfoProperties_setName(TransformInfoProperties* this, const char* value);
void TransformInfoProperties_setDescription(TransformInfoProperties* this, const char* value);
void TransformInfoProperties_setViewFile(TransformInfoProperties* this, const char* value);
void TransformInfoProperties_setTemplateFile(TransformInfoProperties* this, const char* value);
void TransformInfoProperties_setObjectConfigFile(TransformInfoProperties* this, const char* value);
const char* TransformInfoProperties_getName(TransformInfoProperties* this);
const char* TransformInfoProperties_getLabel(TransformInfoProperties* this);
const char* TransformInfoProperties_getDescription(TransformInfoProperties* this);
const char* TransformInfoProperties_getViewFile(TransformInfoProperties* this);
const char* TransformInfoProperties_getTemplateFile(TransformInfoProperties* this);
const char* TransformInfoProperties_getObjectConfigFile(TransformInfoProperties* this);

static void TransformInfoProperties_initFields(TransformInfoProperties* this) {
    
    
    
    
    
    
}


void TransformInfoProperties_init(TransformInfoProperties* this, const char* name, const char* label, const char* description, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName) {
    TransformInfoProperties_initFields(this);
        this->name = name;
        this->label = label;
        this->description = description;
        this->objectFileName = objectFileName;
        this->templateFileName = templateFileName;
        this->objectConfigFileName = objectConfigFileName;
}

TransformInfoProperties* TransformInfoProperties_new(const char* name, const char* label, const char* description, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName) {
    TransformInfoProperties* this = calloc(1, sizeof(TransformInfoProperties));
    TransformInfoProperties_init(this, name, label, description, objectFileName, objectConfigFileName, templateFileName);
    return this;
}


void TransformInfoProperties_setName(TransformInfoProperties* this, const char* value) {
        this->name = value;
}


void TransformInfoProperties_setDescription(TransformInfoProperties* this, const char* value) {
        this->description = value;
}


void TransformInfoProperties_setViewFile(TransformInfoProperties* this, const char* value) {
        this->objectFileName = value;
}


void TransformInfoProperties_setTemplateFile(TransformInfoProperties* this, const char* value) {
        this->templateFileName = value;
}


void TransformInfoProperties_setObjectConfigFile(TransformInfoProperties* this, const char* value) {
        this->objectConfigFileName = value;
}


const char* TransformInfoProperties_getName(TransformInfoProperties* this) {
        return this->name;
}


const char* TransformInfoProperties_getLabel(TransformInfoProperties* this) {
        return this->label;
}


const char* TransformInfoProperties_getDescription(TransformInfoProperties* this) {
        return this->description;
}


const char* TransformInfoProperties_getViewFile(TransformInfoProperties* this) {
        return this->objectFileName;
}


const char* TransformInfoProperties_getTemplateFile(TransformInfoProperties* this) {
        return this->templateFileName;
}


const char* TransformInfoProperties_getObjectConfigFile(TransformInfoProperties* this) {
        return this->objectConfigFileName;
}

