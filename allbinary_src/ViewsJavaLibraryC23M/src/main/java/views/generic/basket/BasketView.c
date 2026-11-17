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
// package views.generic.basket

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemView.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
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

typedef struct BasketView BasketView;
struct BasketView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    HttpServletRequest* request;
};


BasketView* BasketView_new(TransformInfoInterface* transformInfoInterface);

void BasketView_init(BasketView* this, TransformInfoInterface* transformInfoInterface);
Node* BasketView_toXmlNode(BasketView* this, Document* document);
void BasketView_addDomNodeInterfaces(BasketView* this);
const char* BasketView_view(BasketView* this);

static void BasketView_initFields(BasketView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void BasketView_init(BasketView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        BasketView_initFields(this);
        this->request = ((HttpServletRequest*) JAVA_CALL(BasketView_getPageContext(this), getRequest));
}

BasketView* BasketView_new(TransformInfoInterface* transformInfoInterface) {
    BasketView* this = calloc(1, sizeof(BasketView));
    BasketView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* BasketView_toXmlNode(BasketView* this, Document* document) {
        JAVA_TRY {
            InventoryEntity* inventoryEntity = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
            BasketInterface* basketInterface = JAVA_CALL(JAVA_CALL(BasketView_getWeblisketSession(this), getOrder), getBasket);
            Node* basketNode = Document_createElement(document, BasketData_BASKET);
            HashMap* itemsAndNumberInBasket = BasketInterface_getItems(basketInterface);
            int32_t numberOfResults = 1;
            Set* items = HashMap_keySet(itemsAndNumberInBasket);
            Any** productArray = Set_toArray(items);
            int32_t size = java_array_length(productArray);
            for (int32_t index = 0; index < size; index++) {
                const char* product = java_string_new(((const char*) productArray[index]));
                ItemInterface* itemInterface = InventoryEntity_getItem(inventoryEntity, product);
                if (itemInterface != nullptr) {
                    BasicItemView* basicItemView = BasicItemView_new(itemInterface, BasicArrayListD_new());
                    Node* node = BasicItemView_toXmlNode(basicItemView, document);
                    const char* numberInBasket = JAVA_CALL(BasketInterface_getNumberOf(basketInterface, product), toString);
                    Node_appendChild(node, ModDomHelper_createNameValueNodes(document, BasketData_ITEMTOTALINBASKET, numberInBasket));
                    Money* itemPrice = ItemInterface_getPrice(itemInterface);
                    Money* itemTotal = Money_new(itemPrice);
                    Money_multiply(itemTotal, JAVA_CALL(BasketInterface_getNumberOf(basketInterface, product), intValue));
                    Node_appendChild(node, ModDomHelper_createNameValueNodes(document, BasketData_ITEMTOTAL, Money_toString(itemTotal)));
                    Node_appendChild(basketNode, node);
                } else {
                    LogUtil_putF(this->logUtil, java_concat("Product Failed: ", product), this, "toXmlNode");
                }
                numberOfResults++;
            }
            Node* totalNumberNode = Document_createElement(document, SearchData_TOTAL_NUMBER_ITEMS);
            Node* totalNumberTextNode = Document_createTextNode(document, JAVA_CALL(BasketInterface_getNumberOfItems(basketInterface), toString));
            Node_appendChild(totalNumberNode, totalNumberTextNode);
            Node* totalWeightNode = Document_createElement(document, BasketData_TOTALWEIGHT);
            Node* totalWeightTextNode = Document_createTextNode(document, JAVA_CALL(BasketInterface_getTotalWeight(basketInterface), toString));
            Node_appendChild(totalWeightNode, totalWeightTextNode);
            Node* subTotalNode = Document_createElement(document, BasketData_SUBTOTAL);
            Node* subTotalTextNode = Document_createTextNode(document, JAVA_CALL(BasketInterface_getSubTotal(basketInterface), toString));
            Node_appendChild(subTotalNode, subTotalTextNode);
            Node_appendChild(basketNode, totalNumberNode);
            Node_appendChild(basketNode, totalWeightNode);
            Node_appendChild(basketNode, subTotalNode);
            return basketNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void BasketView_addDomNodeInterfaces(BasketView* this) {
        BasketView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* BasketView_view(BasketView* this) {
        JAVA_TRY {
            BasketView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

