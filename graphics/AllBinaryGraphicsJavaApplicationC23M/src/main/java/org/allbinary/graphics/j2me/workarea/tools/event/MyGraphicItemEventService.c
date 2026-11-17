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
// package org.allbinary.graphics.j2me.workarea.tools.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MyGraphicItemEventService MyGraphicItemEventService;
struct MyGraphicItemEventService {
    char unused;
};

static EventListenerList* MyGraphicItemEventService_listenerList;
const char* MyGraphicItemEventService_DELETE = "delete";
const char* MyGraphicItemEventService_DESELECT = "deselect";
const char* MyGraphicItemEventService_SELECT = "select";
const char* MyGraphicItemEventService_DUPLICATE = "duplicate";
const char* MyGraphicItemEventService_ROTATE = "rotate";

MyGraphicItemEventService* MyGraphicItemEventService_new(void);

void MyGraphicItemEventService_init(MyGraphicItemEventService* this);
void MyGraphicItemEventService_addListener(MyGraphicItemEventListener* listener);
void MyGraphicItemEventService_removeListener(MyGraphicItemEventListener* listener);
void MyGraphicItemEventService_fire(MyGraphicItemEvent* evt);

// Static fields with runtime initializers: call this once at startup
void MyGraphicItemEventService_staticInit(void) {
    MyGraphicItemEventService_listenerList = EventListenerList_new();
}


void MyGraphicItemEventService_init(MyGraphicItemEventService* this) {
}

MyGraphicItemEventService* MyGraphicItemEventService_new(void) {
    MyGraphicItemEventService* this = calloc(1, sizeof(MyGraphicItemEventService));
    MyGraphicItemEventService_init(this);
    return this;
}


// synchronized
void MyGraphicItemEventService_addListener(MyGraphicItemEventListener* listener) {
        JAVA_CALL(MyGraphicItemEventService_listenerList, add, ((const char*) java_class_of(listener)), ((EventListener*) listener));
}


// synchronized
void MyGraphicItemEventService_removeListener(MyGraphicItemEventListener* listener) {
        JAVA_CALL(MyGraphicItemEventService_listenerList, remove, ((const char*) java_class_of(listener)), ((EventListener*) listener));
}


// throws Exception
// synchronized
void MyGraphicItemEventService_fire(MyGraphicItemEvent* evt) {
        Any** listeners = EventListenerList_getListenerList(MyGraphicItemEventService_listenerList);
        for (int32_t i = 0; i < java_array_length(listeners); i += 2) {
            if (listeners[i] == java_class_of(listeners[i + 1])) {
                if (JAVA_CALL(MyGraphicItemEvent_getCommand(evt), compareTo, MyGraphicItemEventService_SELECT) == 0) {
                    MyGraphicItemEventListener_highlight((((MyGraphicItemEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyGraphicItemEvent_getCommand(evt), compareTo, MyGraphicItemEventService_DESELECT) == 0) {
                    MyGraphicItemEventListener_deselect((((MyGraphicItemEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyGraphicItemEvent_getCommand(evt), compareTo, MyGraphicItemEventService_DELETE) == 0) {
                    MyGraphicItemEventListener_delete((((MyGraphicItemEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyGraphicItemEvent_getCommand(evt), compareTo, MyGraphicItemEventService_DUPLICATE) == 0) {
                    MyGraphicItemEventListener_duplicate((((MyGraphicItemEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyGraphicItemEvent_getCommand(evt), compareTo, MyGraphicItemEventService_ROTATE) == 0) {
                    MyGraphicItemEventListener_rotate((((MyGraphicItemEventListener*) listeners[i + 1])), evt);
                }
            }
        }
}

