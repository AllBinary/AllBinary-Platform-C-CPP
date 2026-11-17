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
// package org.allbinary.business.time.modified

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

typedef struct TimeLastModifiedView TimeLastModifiedView;
struct TimeLastModifiedView {
    DomNodeInterface DomNodeInterface_interface;
    TimeLastModified* timeLastModified;
};


TimeLastModifiedView* TimeLastModifiedView_new(TimeLastModified* timeLastModified);

void TimeLastModifiedView_init(TimeLastModifiedView* this, TimeLastModified* timeLastModified);

TimeLastModifiedView* TimeLastModifiedView_new1(Node* node);
void TimeLastModifiedView_init1(TimeLastModifiedView* this, Node* node);
Node* TimeLastModifiedView_toXmlNode(TimeLastModifiedView* this, Document* document);
TimeLastModified* TimeLastModifiedView_getTimeLastModified(TimeLastModifiedView* this);
void TimeLastModifiedView_setTimeLastModified(TimeLastModifiedView* this, TimeLastModified* timeLastModified);

static void TimeLastModifiedView_initFields(TimeLastModifiedView* this) {
    this->timeLastModified = nullptr;
}


void TimeLastModifiedView_init(TimeLastModifiedView* this, TimeLastModified* timeLastModified) {
    TimeLastModifiedView_initFields(this);
        TimeLastModifiedView_setTimeLastModified(this, timeLastModified);
}

TimeLastModifiedView* TimeLastModifiedView_new(TimeLastModified* timeLastModified) {
    TimeLastModifiedView* this = calloc(1, sizeof(TimeLastModifiedView));
    TimeLastModifiedView_init(this, timeLastModified);
    return this;
}


void TimeLastModifiedView_init1(TimeLastModifiedView* this, Node* node) {
    TimeLastModifiedView_initFields(this);
        TimeLastModifiedView_setTimeLastModified(this, TimeLastModified_new(DomNodeHelper_getTextNodeValue(node)));
}

TimeLastModifiedView* TimeLastModifiedView_new1(Node* node) {
    TimeLastModifiedView* this = calloc(1, sizeof(TimeLastModifiedView));
    TimeLastModifiedView_init1(this, node);
    return this;
}


// throws Exception
Node* TimeLastModifiedView_toXmlNode(TimeLastModifiedView* this, Document* document) {
        return ModDomHelper_createTextNode(document, EntryData_getInstance()->TIMECREATED, JAVA_CALL(TimeLastModifiedView_getTimeLastModified(this), toString));
}


TimeLastModified* TimeLastModifiedView_getTimeLastModified(TimeLastModifiedView* this) {
        return this->timeLastModified;
}


void TimeLastModifiedView_setTimeLastModified(TimeLastModifiedView* this, TimeLastModified* timeLastModified) {
        this->timeLastModified = timeLastModified;
}

