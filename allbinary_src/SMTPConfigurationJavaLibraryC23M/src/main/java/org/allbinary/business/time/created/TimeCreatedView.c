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
// package org.allbinary.business.time.created

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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct TimeCreatedView TimeCreatedView;
struct TimeCreatedView {
    DomNodeInterface DomNodeInterface_interface;
    TimeCreated* timeCreated;
};


TimeCreatedView* TimeCreatedView_new(TimeCreated* timeCreated);

void TimeCreatedView_init(TimeCreatedView* this, TimeCreated* timeCreated);

TimeCreatedView* TimeCreatedView_new1(Node* node);
void TimeCreatedView_init1(TimeCreatedView* this, Node* node);
Node* TimeCreatedView_toXmlNode(TimeCreatedView* this, Document* document);
TimeCreated* TimeCreatedView_getTimeCreated(TimeCreatedView* this);
void TimeCreatedView_setTimeCreated(TimeCreatedView* this, TimeCreated* timeCreated);

static void TimeCreatedView_initFields(TimeCreatedView* this) {
    this->timeCreated = nullptr;
}


void TimeCreatedView_init(TimeCreatedView* this, TimeCreated* timeCreated) {
    TimeCreatedView_initFields(this);
        TimeCreatedView_setTimeCreated(this, timeCreated);
}

TimeCreatedView* TimeCreatedView_new(TimeCreated* timeCreated) {
    TimeCreatedView* this = calloc(1, sizeof(TimeCreatedView));
    TimeCreatedView_init(this, timeCreated);
    return this;
}


void TimeCreatedView_init1(TimeCreatedView* this, Node* node) {
    TimeCreatedView_initFields(this);
        TimeCreatedView_setTimeCreated(this, TimeCreated_new(DomNodeHelper_getTextNodeValue(node)));
}

TimeCreatedView* TimeCreatedView_new1(Node* node) {
    TimeCreatedView* this = calloc(1, sizeof(TimeCreatedView));
    TimeCreatedView_init1(this, node);
    return this;
}


// throws Exception
Node* TimeCreatedView_toXmlNode(TimeCreatedView* this, Document* document) {
        return ModDomHelper_createTextNode(document, EntryData_getInstance()->TIMECREATED, JAVA_CALL(TimeCreatedView_getTimeCreated(this), toString));
}


TimeCreated* TimeCreatedView_getTimeCreated(TimeCreatedView* this) {
        return this->timeCreated;
}


void TimeCreatedView_setTimeCreated(TimeCreatedView* this, TimeCreated* timeCreated) {
        this->timeCreated = timeCreated;
}

