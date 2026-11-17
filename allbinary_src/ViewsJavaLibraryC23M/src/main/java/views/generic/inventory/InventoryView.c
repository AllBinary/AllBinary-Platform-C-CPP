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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/user/commerce/inventory/InventoryData.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct InventoryView InventoryView;
struct InventoryView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


InventoryView* InventoryView_new(TransformInfoInterface* transformInfoInterface);

void InventoryView_init(InventoryView* this, TransformInfoInterface* transformInfoInterface);
Node* InventoryView_toXmlNode(InventoryView* this, Document* document);
void InventoryView_addDomNodeInterfaces(InventoryView* this);
const char* InventoryView_view(InventoryView* this);

static void InventoryView_initFields(InventoryView* this) {
    this->logUtil = LogUtil_getInstance();
}


void InventoryView_init(InventoryView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        InventoryView_initFields(this);
}

InventoryView* InventoryView_new(TransformInfoInterface* transformInfoInterface) {
    InventoryView* this = calloc(1, sizeof(InventoryView));
    InventoryView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* InventoryView_toXmlNode(InventoryView* this, Document* document) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, "Starting", this, "toXmlNode");
            }
            InventoryEntity* inventoryEntityInterface = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            Node* inventoryNode = Document_createElement(document, InventoryData_INVENTORY);
            BasicArrayList* itemVector = InventoryEntity_getItems(inventoryEntityInterface, StoreFrontFactory_getInstance(JAVA_CALL(InventoryView_getTransformInfoInterface(this), getStoreName)));
            Node_appendChild(inventoryNode, ModDomHelper_createNameValueNodes(document, SearchData_TOTAL_NUMBER_ITEMS_ON_THIS_PAGE, Integer_toString(BasicArrayList_size(itemVector))));
            int32_t size = BasicArrayList_size(itemVector);
            for (int32_t index = 0; index < size; index++) {
                ItemInterface* itemInterface = ((ItemInterface*) BasicArrayList_get(itemVector, index));
                if (itemInterface != nullptr) {
                    Node* node = BasicItemView_toXmlNode(BasicItemView_new(itemInterface, BasicArrayListD_new()), document);
                    Node_appendChild(inventoryNode, node);
                } else {
                    LogUtil_putF(this->logUtil, "Inventory", this, "toXmlNode");
                }
            }
            return inventoryNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void InventoryView_addDomNodeInterfaces(InventoryView* this) {
        InventoryView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


const char* InventoryView_view(InventoryView* this) {
        JAVA_TRY {
            InventoryView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view Inventory";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            return error;
        } JAVA_END_TRY;
}

