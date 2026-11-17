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
// package org.allbinary.business.context.modules.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct StoreFrontView StoreFrontView;
struct StoreFrontView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    StoreFrontInterface* storeFrontInterface;
};


StoreFrontView* StoreFrontView_new(StoreFrontInterface* storeFrontInterface);

void StoreFrontView_init(StoreFrontView* this, StoreFrontInterface* storeFrontInterface);
Node* StoreFrontView_toXmlNode(StoreFrontView* this, Document* document);

static void StoreFrontView_initFields(StoreFrontView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void StoreFrontView_init(StoreFrontView* this, StoreFrontInterface* storeFrontInterface) {
    StoreFrontView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, java_concat("Constructing: StoreFrontView for: ", StoreFrontInterface_getName(storeFrontInterface)), this, commonStrings->GET_INSTANCE);
        }
        this->storeFrontInterface = storeFrontInterface;
}

StoreFrontView* StoreFrontView_new(StoreFrontInterface* storeFrontInterface) {
    StoreFrontView* this = calloc(1, sizeof(StoreFrontView));
    StoreFrontView_init(this, storeFrontInterface);
    return this;
}


// throws Exception
Node* StoreFrontView_toXmlNode(StoreFrontView* this, Document* document) {
        HashMap* hashMap = StoreFrontInterface_toHashMap(this->storeFrontInterface);
        StoreFrontData* storeFrontData = StoreFrontData_getInstance();
        HashMap_put(hashMap, storeFrontData->CURRENTHOMEHOSTNAME, StoreFrontInterface_getCurrentHomeHostName(this->storeFrontInterface));
        HashMap_put(hashMap, storeFrontData->CURRENTHOMEHOSTNAMEPATH, StoreFrontInterface_getCurrentHomeHostNamePath(this->storeFrontInterface));
        HashMap_put(hashMap, storeFrontData->CURRENTHOSTNAME, StoreFrontInterface_getCurrentHostName(this->storeFrontInterface));
        HashMap_put(hashMap, storeFrontData->CURRENTHOSTNAMEPATH, StoreFrontInterface_getCurrentHostNamePath(this->storeFrontInterface));
        HashMap_put(hashMap, BasketData_NAME, StoreFrontInterface_getBasketName(this->storeFrontInterface));
        Node* node = ModDomHelper_createNameValueNodes(document, storeFrontData->NAME, hashMap);
        return node;
}

