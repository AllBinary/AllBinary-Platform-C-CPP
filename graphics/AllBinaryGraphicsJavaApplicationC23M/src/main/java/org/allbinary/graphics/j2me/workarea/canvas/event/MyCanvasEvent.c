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
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/EventObject.h"

typedef struct MyCanvasEvent MyCanvasEvent;
struct MyCanvasEvent {
    EventObject base;
};


MyCanvasEvent* MyCanvasEvent_new(Any* source);

void MyCanvasEvent_init(MyCanvasEvent* this, Any* source);
Any* MyCanvasEvent_getSource(MyCanvasEvent* this);
const char* MyCanvasEvent_toString(MyCanvasEvent* this);
const char* MyCanvasEvent_getCommand(MyCanvasEvent* this);
MutableTreeNode* MyCanvasEvent_getTreeNode(MyCanvasEvent* this);
double MyCanvasEvent_getAngle(MyCanvasEvent* this);


void MyCanvasEvent_init(MyCanvasEvent* this, Any* source) {
        EventObject_init(&this->base, source);
}

MyCanvasEvent* MyCanvasEvent_new(Any* source) {
    MyCanvasEvent* this = calloc(1, sizeof(MyCanvasEvent));
    MyCanvasEvent_init(this, source);
    return this;
}


Any* MyCanvasEvent_getSource(MyCanvasEvent* this) {
        return EventObject_getSource((&this->base));
}


const char* MyCanvasEvent_toString(MyCanvasEvent* this) {
        return EventObject_toString((&this->base));
}


const char* MyCanvasEvent_getCommand(MyCanvasEvent* this) {
        MyCanvasEventSource* myEventSource = ((MyCanvasEventSource*) MyCanvasEvent_getSource(this));
        return MyCanvasEventSource_getCommand(myEventSource);
}


MutableTreeNode* MyCanvasEvent_getTreeNode(MyCanvasEvent* this) {
        MyCanvasEventSource* myEventSource = ((MyCanvasEventSource*) MyCanvasEvent_getSource(this));
        return MyCanvasEventSource_getTreeNode(myEventSource);
}


double MyCanvasEvent_getAngle(MyCanvasEvent* this) {
        MyCanvasEventSource* myEventSource = ((MyCanvasEventSource*) MyCanvasEvent_getSource(this));
        return MyCanvasEventSource_getAngle(myEventSource);
}

