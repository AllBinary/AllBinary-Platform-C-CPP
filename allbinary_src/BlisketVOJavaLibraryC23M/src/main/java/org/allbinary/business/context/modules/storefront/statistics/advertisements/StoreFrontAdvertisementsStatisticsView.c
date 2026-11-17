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
// package org.allbinary.business.context.modules.storefront.statistics.advertisements

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

typedef struct StoreFrontAdvertisementsStatisticsView StoreFrontAdvertisementsStatisticsView;
struct StoreFrontAdvertisementsStatisticsView {
    DomNodeInterface DomNodeInterface_interface;
    StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface;
};


StoreFrontAdvertisementsStatisticsView* StoreFrontAdvertisementsStatisticsView_new(StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface);

void StoreFrontAdvertisementsStatisticsView_init(StoreFrontAdvertisementsStatisticsView* this, StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface);
Node* StoreFrontAdvertisementsStatisticsView_toXmlNode(StoreFrontAdvertisementsStatisticsView* this, Document* document);

static void StoreFrontAdvertisementsStatisticsView_initFields(StoreFrontAdvertisementsStatisticsView* this) {
    
}


void StoreFrontAdvertisementsStatisticsView_init(StoreFrontAdvertisementsStatisticsView* this, StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface) {
    StoreFrontAdvertisementsStatisticsView_initFields(this);
        this->storeFrontAdvertisementsStatisticsInterface = storeFrontAdvertisementsStatisticsInterface;
}

StoreFrontAdvertisementsStatisticsView* StoreFrontAdvertisementsStatisticsView_new(StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface) {
    StoreFrontAdvertisementsStatisticsView* this = calloc(1, sizeof(StoreFrontAdvertisementsStatisticsView));
    StoreFrontAdvertisementsStatisticsView_init(this, storeFrontAdvertisementsStatisticsInterface);
    return this;
}


// throws Exception
Node* StoreFrontAdvertisementsStatisticsView_toXmlNode(StoreFrontAdvertisementsStatisticsView* this, Document* document) {
        HashMap* hashMap = StoreFrontAdvertisementsStatisticsInterface_toHashMap(this->storeFrontAdvertisementsStatisticsInterface);
        Node* node = ModDomHelper_createNameValueNodes(document, StoreFrontAdvertisementsStatisticsData_getInstance()->NAME, hashMap);
        return node;
}

