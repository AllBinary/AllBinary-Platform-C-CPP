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
// #include "javax/swing/tree/MutableTreeNode.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/EventObject.h"

typedef struct MyGraphicItemEvent MyGraphicItemEvent;
struct MyGraphicItemEvent {
    EventObject base;
};


MyGraphicItemEvent* MyGraphicItemEvent_new(Any* source);

void MyGraphicItemEvent_init(MyGraphicItemEvent* this, Any* source);
Any* MyGraphicItemEvent_getSource(MyGraphicItemEvent* this);
const char* MyGraphicItemEvent_toString(MyGraphicItemEvent* this);
const char* MyGraphicItemEvent_getCommand(MyGraphicItemEvent* this);
MutableTreeNode* MyGraphicItemEvent_getTreeNode(MyGraphicItemEvent* this);
double MyGraphicItemEvent_getAngle(MyGraphicItemEvent* this);


void MyGraphicItemEvent_init(MyGraphicItemEvent* this, Any* source) {
        EventObject_init(&this->base, source);
}

MyGraphicItemEvent* MyGraphicItemEvent_new(Any* source) {
    MyGraphicItemEvent* this = calloc(1, sizeof(MyGraphicItemEvent));
    MyGraphicItemEvent_init(this, source);
    return this;
}


Any* MyGraphicItemEvent_getSource(MyGraphicItemEvent* this) {
        return EventObject_getSource((&this->base));
}


const char* MyGraphicItemEvent_toString(MyGraphicItemEvent* this) {
        return EventObject_toString((&this->base));
}


const char* MyGraphicItemEvent_getCommand(MyGraphicItemEvent* this) {
        MyGraphicItemEventSource* myEventSource = ((MyGraphicItemEventSource*) MyGraphicItemEvent_getSource(this));
        return MyGraphicItemEventSource_getCommand(myEventSource);
}


MutableTreeNode* MyGraphicItemEvent_getTreeNode(MyGraphicItemEvent* this) {
        MyGraphicItemEventSource* myEventSource = ((MyGraphicItemEventSource*) MyGraphicItemEvent_getSource(this));
        return MyGraphicItemEventSource_getTreeNode(myEventSource);
}


double MyGraphicItemEvent_getAngle(MyGraphicItemEvent* this) {
        MyGraphicItemEventSource* myEventSource = ((MyGraphicItemEventSource*) MyGraphicItemEvent_getSource(this));
        return MyGraphicItemEventSource_getAngle(myEventSource);
}

