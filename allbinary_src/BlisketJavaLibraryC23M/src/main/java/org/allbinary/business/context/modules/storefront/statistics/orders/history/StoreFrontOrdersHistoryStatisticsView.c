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
// package org.allbinary.business.context.modules.storefront.statistics.orders.history

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

typedef struct StoreFrontOrdersHistoryStatisticsView StoreFrontOrdersHistoryStatisticsView;
struct StoreFrontOrdersHistoryStatisticsView {
    DomNodeInterface DomNodeInterface_interface;
    StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface;
};


StoreFrontOrdersHistoryStatisticsView* StoreFrontOrdersHistoryStatisticsView_new(StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface);

void StoreFrontOrdersHistoryStatisticsView_init(StoreFrontOrdersHistoryStatisticsView* this, StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface);
Node* StoreFrontOrdersHistoryStatisticsView_toXmlNode(StoreFrontOrdersHistoryStatisticsView* this, Document* document);

static void StoreFrontOrdersHistoryStatisticsView_initFields(StoreFrontOrdersHistoryStatisticsView* this) {
    
}


void StoreFrontOrdersHistoryStatisticsView_init(StoreFrontOrdersHistoryStatisticsView* this, StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface) {
    StoreFrontOrdersHistoryStatisticsView_initFields(this);
        this->storeFrontOrdersHistoryStatisticsInterface = storeFrontOrdersHistoryStatisticsInterface;
}

StoreFrontOrdersHistoryStatisticsView* StoreFrontOrdersHistoryStatisticsView_new(StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrdersHistoryStatisticsInterface) {
    StoreFrontOrdersHistoryStatisticsView* this = calloc(1, sizeof(StoreFrontOrdersHistoryStatisticsView));
    StoreFrontOrdersHistoryStatisticsView_init(this, storeFrontOrdersHistoryStatisticsInterface);
    return this;
}


// throws Exception
Node* StoreFrontOrdersHistoryStatisticsView_toXmlNode(StoreFrontOrdersHistoryStatisticsView* this, Document* document) {
        HashMap* hashMap = StoreFrontOrdersHistoryStatisticsInterface_toHashMap(this->storeFrontOrdersHistoryStatisticsInterface);
        Node* node = ModDomHelper_createNameValueNodes(document, StoreFrontOrdersHistoryStatisticsData_getInstance()->NAME, hashMap);
        return node;
}

