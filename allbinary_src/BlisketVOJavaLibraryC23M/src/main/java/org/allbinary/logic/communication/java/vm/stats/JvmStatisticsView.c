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
// package org.allbinary.logic.communication.java.vm.stats

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/communication/java/vm/stats/JvmStatisticsMapping.h"

typedef struct JvmStatisticsView JvmStatisticsView;
struct JvmStatisticsView {
    JvmStatisticsMapping base;
    DomNodeInterface DomNodeInterface_interface;
};


JvmStatisticsView* JvmStatisticsView_new(void);

void JvmStatisticsView_init(JvmStatisticsView* this);
Node* JvmStatisticsView_toXmlNode(JvmStatisticsView* this, Document* document);


void JvmStatisticsView_init(JvmStatisticsView* this) {
        JvmStatisticsMapping_init(&this->base);
}

JvmStatisticsView* JvmStatisticsView_new(void) {
    JvmStatisticsView* this = calloc(1, sizeof(JvmStatisticsView));
    JvmStatisticsView_init(this);
    return this;
}


// throws Exception
Node* JvmStatisticsView_toXmlNode(JvmStatisticsView* this, Document* document) {
        HashMap* hashMap = JvmStatisticsView_toHashMap(this);
        Node* node = ModDomHelper_createNameValueNodes(document, JvmStatisticsData_NAME, hashMap);
        return node;
}

