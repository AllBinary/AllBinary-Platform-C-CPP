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
// package org.allbinary.business.context.modules.storefront.statistics.users

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

typedef struct StoreFrontUsersStatisticsView StoreFrontUsersStatisticsView;
struct StoreFrontUsersStatisticsView {
    DomNodeInterface DomNodeInterface_interface;
    StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface;
};


StoreFrontUsersStatisticsView* StoreFrontUsersStatisticsView_new(StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface);

void StoreFrontUsersStatisticsView_init(StoreFrontUsersStatisticsView* this, StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface);
Node* StoreFrontUsersStatisticsView_toXmlNode(StoreFrontUsersStatisticsView* this, Document* document);

static void StoreFrontUsersStatisticsView_initFields(StoreFrontUsersStatisticsView* this) {
    
}


void StoreFrontUsersStatisticsView_init(StoreFrontUsersStatisticsView* this, StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface) {
    StoreFrontUsersStatisticsView_initFields(this);
        this->storeFrontUsersStatisticsInterface = storeFrontUsersStatisticsInterface;
}

StoreFrontUsersStatisticsView* StoreFrontUsersStatisticsView_new(StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface) {
    StoreFrontUsersStatisticsView* this = calloc(1, sizeof(StoreFrontUsersStatisticsView));
    StoreFrontUsersStatisticsView_init(this, storeFrontUsersStatisticsInterface);
    return this;
}


// throws Exception
Node* StoreFrontUsersStatisticsView_toXmlNode(StoreFrontUsersStatisticsView* this, Document* document) {
        HashMap* hashMap = StoreFrontUsersStatisticsInterface_toHashMap(this->storeFrontUsersStatisticsInterface);
        Node* node = ModDomHelper_createNameValueNodes(document, StoreFrontUsersStatisticsData_getInstance()->NAME, hashMap);
        return node;
}

