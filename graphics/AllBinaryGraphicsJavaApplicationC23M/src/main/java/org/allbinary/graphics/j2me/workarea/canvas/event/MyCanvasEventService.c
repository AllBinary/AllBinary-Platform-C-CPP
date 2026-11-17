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
// package org.allbinary.graphics.j2me.workarea.canvas.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MyCanvasEventService MyCanvasEventService;
struct MyCanvasEventService {
    char unused;
};

static EventListenerList* MyCanvasEventService_listenerList;
const char* MyCanvasEventService_DELETE = "delete";
const char* MyCanvasEventService_DUPLICATE = "duplicate";
const char* MyCanvasEventService_SELECT = "select";
const char* MyCanvasEventService_ROTATE = "rotate";
const char* MyCanvasEventService_EXPLODE = "explode";
const char* MyCanvasEventService_AUTOEXPLODE = "autoExplode";
const char* MyCanvasEventService_CENTER = "center";

MyCanvasEventService* MyCanvasEventService_new(void);

void MyCanvasEventService_init(MyCanvasEventService* this);
void MyCanvasEventService_addListener(MyCanvasEventListener* listener);
void MyCanvasEventService_removeListener(MyCanvasEventListener* listener);
void MyCanvasEventService_fire(MyCanvasEvent* evt);

// Static fields with runtime initializers: call this once at startup
void MyCanvasEventService_staticInit(void) {
    MyCanvasEventService_listenerList = EventListenerList_new();
}


void MyCanvasEventService_init(MyCanvasEventService* this) {
}

MyCanvasEventService* MyCanvasEventService_new(void) {
    MyCanvasEventService* this = calloc(1, sizeof(MyCanvasEventService));
    MyCanvasEventService_init(this);
    return this;
}


// synchronized
void MyCanvasEventService_addListener(MyCanvasEventListener* listener) {
        JAVA_CALL(MyCanvasEventService_listenerList, add, ((const char*) java_class_of(listener)), ((EventListener*) listener));
}


// synchronized
void MyCanvasEventService_removeListener(MyCanvasEventListener* listener) {
        JAVA_CALL(MyCanvasEventService_listenerList, remove, ((const char*) java_class_of(listener)), ((EventListener*) listener));
}


// throws Exception
// synchronized
void MyCanvasEventService_fire(MyCanvasEvent* evt) {
        Any** listeners = EventListenerList_getListenerList(MyCanvasEventService_listenerList);
        for (int32_t i = 0; i < java_array_length(listeners); i += 2) {
            if (listeners[i] == java_class_of(listeners[i + 1])) {
                if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_DELETE) == 0) {
                    MyCanvasEventListener_delete((((MyCanvasEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_DUPLICATE) == 0) {
                    MyCanvasEventListener_duplicate((((MyCanvasEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_SELECT) == 0) {
                    MyCanvasEventListener_select((((MyCanvasEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_ROTATE) == 0) {
                    MyCanvasEventListener_rotate((((MyCanvasEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_EXPLODE) == 0) {
                    MyCanvasEventListener_explode((((MyCanvasEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_AUTOEXPLODE) == 0) {
                    MyCanvasEventListener_autoExplode((((MyCanvasEventListener*) listeners[i + 1])), evt);
                } else if (JAVA_CALL(MyCanvasEvent_getCommand(evt), compareTo, MyCanvasEventService_CENTER) == 0) {
                    MyCanvasEventListener_center((((MyCanvasEventListener*) listeners[i + 1])), evt);
                }
            }
        }
}

