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
#include "org/allbinary/input/media/image/InputImageType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"

typedef struct SavedCaptureGenericProfileDataWorkerType SavedCaptureGenericProfileDataWorkerType;
struct SavedCaptureGenericProfileDataWorkerType {
    GenericProfileDataWorkerType base;
    const char* path;
    int32_t lastFrame;
};

SavedCaptureGenericProfileDataWorkerType* SavedCaptureGenericProfileDataWorkerType_SAVED_CAPTURE;

SavedCaptureGenericProfileDataWorkerType* SavedCaptureGenericProfileDataWorkerType_new(const char* name, const char* path, int32_t lastFrame);

void SavedCaptureGenericProfileDataWorkerType_init(SavedCaptureGenericProfileDataWorkerType* this, const char* name, const char* path, int32_t lastFrame);
const char* SavedCaptureGenericProfileDataWorkerType_getPath(SavedCaptureGenericProfileDataWorkerType* this);
void SavedCaptureGenericProfileDataWorkerType_setPath(SavedCaptureGenericProfileDataWorkerType* this, const char* path);
int32_t SavedCaptureGenericProfileDataWorkerType_getLastFrame(SavedCaptureGenericProfileDataWorkerType* this);
void SavedCaptureGenericProfileDataWorkerType_setLastFrame(SavedCaptureGenericProfileDataWorkerType* this, int32_t lastFrame);

// Static fields with runtime initializers: call this once at startup
void SavedCaptureGenericProfileDataWorkerType_staticInit(void) {
    SavedCaptureGenericProfileDataWorkerType_SAVED_CAPTURE = SavedCaptureGenericProfileDataWorkerType_new(java_concat("Saved ", JAVA_CALL(InputImageType_CAPTURE, getName)), "c:\\share\\captures\\2\\", 100);
}

static void SavedCaptureGenericProfileDataWorkerType_initFields(SavedCaptureGenericProfileDataWorkerType* this) {
    this->path = nullptr;
    this->lastFrame = 0;
}


void SavedCaptureGenericProfileDataWorkerType_init(SavedCaptureGenericProfileDataWorkerType* this, const char* name, const char* path, int32_t lastFrame) {
        GenericProfileDataWorkerType_init(&this->base, name);
        SavedCaptureGenericProfileDataWorkerType_initFields(this);
        SavedCaptureGenericProfileDataWorkerType_setPath(this, path);
        SavedCaptureGenericProfileDataWorkerType_setLastFrame(this, lastFrame);
}

SavedCaptureGenericProfileDataWorkerType* SavedCaptureGenericProfileDataWorkerType_new(const char* name, const char* path, int32_t lastFrame) {
    SavedCaptureGenericProfileDataWorkerType* this = calloc(1, sizeof(SavedCaptureGenericProfileDataWorkerType));
    SavedCaptureGenericProfileDataWorkerType_init(this, name, path, lastFrame);
    return this;
}


const char* SavedCaptureGenericProfileDataWorkerType_getPath(SavedCaptureGenericProfileDataWorkerType* this) {
        return this->path;
}


void SavedCaptureGenericProfileDataWorkerType_setPath(SavedCaptureGenericProfileDataWorkerType* this, const char* path) {
        this->path = path;
}


int32_t SavedCaptureGenericProfileDataWorkerType_getLastFrame(SavedCaptureGenericProfileDataWorkerType* this) {
        return this->lastFrame;
}


void SavedCaptureGenericProfileDataWorkerType_setLastFrame(SavedCaptureGenericProfileDataWorkerType* this, int32_t lastFrame) {
        this->lastFrame = lastFrame;
}

