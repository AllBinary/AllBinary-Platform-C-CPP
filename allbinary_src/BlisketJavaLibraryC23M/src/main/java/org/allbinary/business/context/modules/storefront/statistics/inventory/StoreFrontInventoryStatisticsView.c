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
// package org.allbinary.business.context.modules.storefront.statistics.inventory

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

typedef struct StoreFrontInventoryStatisticsView StoreFrontInventoryStatisticsView;
struct StoreFrontInventoryStatisticsView {
    DomNodeInterface DomNodeInterface_interface;
    StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface;
};


StoreFrontInventoryStatisticsView* StoreFrontInventoryStatisticsView_new(StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface);

void StoreFrontInventoryStatisticsView_init(StoreFrontInventoryStatisticsView* this, StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface);
Node* StoreFrontInventoryStatisticsView_toXmlNode(StoreFrontInventoryStatisticsView* this, Document* document);

static void StoreFrontInventoryStatisticsView_initFields(StoreFrontInventoryStatisticsView* this) {
    
}


void StoreFrontInventoryStatisticsView_init(StoreFrontInventoryStatisticsView* this, StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface) {
    StoreFrontInventoryStatisticsView_initFields(this);
        this->storeFrontInventoryStatisticsInterface = storeFrontInventoryStatisticsInterface;
}

StoreFrontInventoryStatisticsView* StoreFrontInventoryStatisticsView_new(StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface) {
    StoreFrontInventoryStatisticsView* this = calloc(1, sizeof(StoreFrontInventoryStatisticsView));
    StoreFrontInventoryStatisticsView_init(this, storeFrontInventoryStatisticsInterface);
    return this;
}


// throws Exception
Node* StoreFrontInventoryStatisticsView_toXmlNode(StoreFrontInventoryStatisticsView* this, Document* document) {
        HashMap* hashMap = StoreFrontInventoryStatisticsInterface_toHashMap(this->storeFrontInventoryStatisticsInterface);
        Node* node = ModDomHelper_createNameValueNodes(document, StoreFrontInventoryStatisticsData_getInstance()->NAME, hashMap);
        return node;
}

