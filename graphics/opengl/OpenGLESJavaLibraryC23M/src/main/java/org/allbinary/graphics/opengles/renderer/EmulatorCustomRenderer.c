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
// package org.allbinary.graphics.opengles.renderer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/egl/EGLConfig.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/emulator/InitEmulatorFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"

typedef struct EmulatorCustomRenderer EmulatorCustomRenderer;
struct EmulatorCustomRenderer {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    RendererStrings* renderStrings;
};


EmulatorCustomRenderer* EmulatorCustomRenderer_new(void);
void EmulatorCustomRenderer_onSurfaceCreated(EmulatorCustomRenderer* this, GL10* gl, EGLConfig* eglConfig);

static void EmulatorCustomRenderer_initFields(EmulatorCustomRenderer* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->renderStrings = RendererStrings_getInstance();
}

void EmulatorCustomRenderer_init(EmulatorCustomRenderer* this) {
    EmulatorCustomRenderer_initFields(this);
}

EmulatorCustomRenderer* EmulatorCustomRenderer_new(void) {
    EmulatorCustomRenderer* this = calloc(1, sizeof(EmulatorCustomRenderer));
    EmulatorCustomRenderer_init(this);
    return this;
}


void EmulatorCustomRenderer_onSurfaceCreated(EmulatorCustomRenderer* this, GL10* gl, EGLConfig* eglConfig) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->renderStrings->ON_SURFACE_CREATED);
        InitEmulatorFactory* initEmulatorFactory = InitEmulatorFactory_getInstance();
        if (!InitEmulatorFactory_isInitEmulator(initEmulatorFactory)) {
            JAVA_TRY {
                const char* WAIT_FOR_EMULATOR = "Waiting on Emulator Initialization";
                while (!InitEmulatorFactory_isInitEmulator(initEmulatorFactory)) {
                    PreLogUtil_put(WAIT_FOR_EMULATOR, this, this->renderStrings->ON_SURFACE_CREATED);
                    java_sleep(180);
                }
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->renderStrings->ON_SURFACE_CREATED, e);
            } JAVA_END_TRY;
        }
}

