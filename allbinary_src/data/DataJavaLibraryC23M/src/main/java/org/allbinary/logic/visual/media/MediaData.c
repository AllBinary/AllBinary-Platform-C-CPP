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
// package org.allbinary.logic.visual.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct MediaData MediaData;
struct MediaData {
    const char* name;
    const char* type;
    const char* extension;
};

static HashMap* MediaData_hashMap;

MediaData* MediaData_new(const char* a_Name);

void MediaData_init(MediaData* this, const char* a_Name);
const char* MediaData_getName(MediaData* this);
const char* MediaData_getType(MediaData* this);
const char* MediaData_getExtension(MediaData* this);
bool MediaData_isConvertableTo(MediaData* this, MediaData* mediaData);
const char* MediaData_toString(MediaData* this);
MediaData* MediaData_get(const char* a_Name);
MediaData* MediaData_getDefault(void);
HashMap* MediaData_toHashMap(void);

// Static fields with runtime initializers: call this once at startup
void MediaData_staticInit(void) {
    MediaData_hashMap = StdUtil_createHashMap(StdUtil_getInstance());
}

static void MediaData_initFields(MediaData* this) {
    
    
    
}


void MediaData_init(MediaData* this, const char* a_Name) {
    MediaData_initFields(this);
        this->name = a_Name;
        this->extension = java_concat(".", this->name);
        this->type = MediaTypeData_getInstance()->NOT_RESIZABLE_MEDIA;
        JAVA_CALL(MediaData_hashMap, put, a_Name, this);
}

MediaData* MediaData_new(const char* a_Name) {
    MediaData* this = calloc(1, sizeof(MediaData));
    MediaData_init(this, a_Name);
    return this;
}


const char* MediaData_getName(MediaData* this) {
        return this->name;
}


const char* MediaData_getType(MediaData* this) {
        return this->type;
}


const char* MediaData_getExtension(MediaData* this) {
        return this->extension;
}


bool MediaData_isConvertableTo(MediaData* this, MediaData* mediaData) {
        if (this == MediaDataFactory_getInstance()->GIF && mediaData == MediaDataFactory_getInstance()->JPG) {
            return true;
        }
        return false;
}


const char* MediaData_toString(MediaData* this) {
        return MediaData_getName(this);
}


// throws Exception
MediaData* MediaData_get(const char* a_Name) {
        MediaData* mediaData = ((MediaData*) JAVA_CALL(MediaData_hashMap, get, a_Name));
        if (mediaData != nullptr) {
            return mediaData;
        } else {
            java_throw(java_exception_new("Exception", "No Such MediaData"));
        }
}


MediaData* MediaData_getDefault(void) {
        return MediaDataFactory_getInstance()->JPG;
}


HashMap* MediaData_toHashMap(void) {
        return MediaData_hashMap;
}

