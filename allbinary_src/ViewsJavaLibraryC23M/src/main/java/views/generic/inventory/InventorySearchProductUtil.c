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
// package views.generic.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/StoreTransformer.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InventorySearchProductUtil InventorySearchProductUtil;
struct InventorySearchProductUtil {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* ITEM_NOT_FOUND;
};

static InventorySearchProductUtil* InventorySearchProductUtil_instance;

InventorySearchProductUtil* InventorySearchProductUtil_new(void);
InventorySearchProductUtil* InventorySearchProductUtil_getInstance(void);
const char* InventorySearchProductUtil_getProduct(InventorySearchProductUtil* this, AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, const char* product);

// Static fields with runtime initializers: call this once at startup
void InventorySearchProductUtil_staticInit(void) {
    InventorySearchProductUtil_instance = InventorySearchProductUtil_new();
}

static void InventorySearchProductUtil_initFields(InventorySearchProductUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->ITEM_NOT_FOUND = "Item Not Found.";
}

void InventorySearchProductUtil_init(InventorySearchProductUtil* this) {
    InventorySearchProductUtil_initFields(this);
}

InventorySearchProductUtil* InventorySearchProductUtil_new(void) {
    InventorySearchProductUtil* this = calloc(1, sizeof(InventorySearchProductUtil));
    InventorySearchProductUtil_init(this);
    return this;
}


InventorySearchProductUtil* InventorySearchProductUtil_getInstance(void) {
        return InventorySearchProductUtil_instance;
}


// throws Exception
const char* InventorySearchProductUtil_getProduct(InventorySearchProductUtil* this, AbeClientInformationInterface* abeClientInformation, SearchRequest* searchRequest, const char* product) {
        JAVA_TRY {
            InventoryEntity* inventoryEntityInterface = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            ItemInterface* itemInterface = InventoryEntity_getItem(inventoryEntityInterface, product);
            if (itemInterface != nullptr) {
                TransformDocumentInterface* viewDocumentInterface = TransformStoreDocumentFactory_getInstance(searchRequest);
                JAVA_CALL(TransformDocumentInterface_getBaseNode(viewDocumentInterface), appendChild, BasicItemView_toXmlNode(BasicItemView_new(itemInterface, BasicArrayListD_new()), TransformDocumentInterface_getDoc(viewDocumentInterface)));
                const char* success = XmlDocumentHelper_toString(TransformDocumentInterface_getDoc(viewDocumentInterface));
                const char* outputStr = StoreTransformer_translate(StoreTransformer_new(abeClientInformation, ((TransformInfoInterface*) TransformInfoHttpSearch_new(searchRequest))), success);
                return outputStr;
            } else {
                return this->ITEM_NOT_FOUND;
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "getProduct", e);
            }
            java_throw(java_exception_new("Exception", "Failed to getProduct"));
        } JAVA_END_TRY;
}

