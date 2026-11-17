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
// package views.generic.basket.mini

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketData.h"
#include "org/allbinary/business/user/commerce/inventory/basket/BasketInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/search/SearchData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct MiniBasketView MiniBasketView;
struct MiniBasketView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
};


MiniBasketView* MiniBasketView_new(TransformInfoInterface* transformInfoInterface);

void MiniBasketView_init(MiniBasketView* this, TransformInfoInterface* transformInfoInterface);
Node* MiniBasketView_toXmlNode(MiniBasketView* this, Document* document);
void MiniBasketView_addDomNodeInterfaces(MiniBasketView* this);
const char* MiniBasketView_view(MiniBasketView* this);

static void MiniBasketView_initFields(MiniBasketView* this) {
    this->logUtil = LogUtil_getInstance();
}


void MiniBasketView_init(MiniBasketView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        MiniBasketView_initFields(this);
}

MiniBasketView* MiniBasketView_new(TransformInfoInterface* transformInfoInterface) {
    MiniBasketView* this = calloc(1, sizeof(MiniBasketView));
    MiniBasketView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* MiniBasketView_toXmlNode(MiniBasketView* this, Document* document) {
        JAVA_TRY {
            BasketInterface* basketInterface = JAVA_CALL(JAVA_CALL(MiniBasketView_getWeblisketSession(this), getOrder), getBasket);
            Node* basketNode = Document_createElement(document, BasketData_BASKET);
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


void MiniBasketView_addDomNodeInterfaces(MiniBasketView* this) {
        MiniBasketView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* MiniBasketView_view(MiniBasketView* this) {
        JAVA_TRY {
            MiniBasketView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

