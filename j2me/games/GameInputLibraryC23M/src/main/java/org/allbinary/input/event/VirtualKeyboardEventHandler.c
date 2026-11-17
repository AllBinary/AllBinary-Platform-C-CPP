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
// package org.allbinary.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct VirtualKeyboardEventHandler VirtualKeyboardEventHandler;
struct VirtualKeyboardEventHandler {
    BasicEventHandler base;
    VirtualKeyboardEvent* SHOW_EVENT;
    VirtualKeyboardEvent* HIDE_EVENT;
};

static VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_gameKeyEventHandler;

VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_new(void);

void VirtualKeyboardEventHandler_init(VirtualKeyboardEventHandler* this);
VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_getInstance(void);
void VirtualKeyboardEventHandler_process(VirtualKeyboardEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
void VirtualKeyboardEventHandler_open(VirtualKeyboardEventHandler* this);
void VirtualKeyboardEventHandler_close(VirtualKeyboardEventHandler* this);

// Static fields with runtime initializers: call this once at startup
void VirtualKeyboardEventHandler_staticInit(void) {
    VirtualKeyboardEventHandler_gameKeyEventHandler = VirtualKeyboardEventHandler_new();
}

static void VirtualKeyboardEventHandler_initFields(VirtualKeyboardEventHandler* this) {
    this->SHOW_EVENT = VirtualKeyboardEvent_new(BooleanFactory_getInstance()->TRUE);
    this->HIDE_EVENT = VirtualKeyboardEvent_new(BooleanFactory_getInstance()->FALSE);
}


void VirtualKeyboardEventHandler_init(VirtualKeyboardEventHandler* this) {
    BasicEventHandler_init(&this->base);
    VirtualKeyboardEventHandler_initFields(this);
}

VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_new(void) {
    VirtualKeyboardEventHandler* this = calloc(1, sizeof(VirtualKeyboardEventHandler));
    VirtualKeyboardEventHandler_init(this);
    return this;
}


VirtualKeyboardEventHandler* VirtualKeyboardEventHandler_getInstance(void) {
        return VirtualKeyboardEventHandler_gameKeyEventHandler;
}


// throws Exception
void VirtualKeyboardEventHandler_process(VirtualKeyboardEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        VirtualKeyboardEventListenerInterface* virtualKeyboardEventListenerInterface = ((VirtualKeyboardEventListenerInterface*) eventListenerInterface);
        VirtualKeyboardEventListenerInterface_onVirtualKeyboardEvent(virtualKeyboardEventListenerInterface, ((VirtualKeyboardEvent*) eventObject));
}


void VirtualKeyboardEventHandler_open(VirtualKeyboardEventHandler* this) {
        JAVA_TRY {
            java_sleep(120);
            VirtualKeyboardEventHandler_fireEvent(this, this->SHOW_EVENT);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "open", e);
        } JAVA_END_TRY;
}


// throws Exception
void VirtualKeyboardEventHandler_close(VirtualKeyboardEventHandler* this) {
        JAVA_TRY {
            java_sleep(120);
            VirtualKeyboardEventHandler_fireEvent(this, this->HIDE_EVENT);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, e);
        } JAVA_END_TRY;
}

