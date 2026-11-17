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
// package views.generic.order

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderItemsEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/validate/ValidationComponentInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/generic/order/OrderView.h"

typedef struct ValidationView ValidationView;
struct ValidationView {
    OrderView base;
    ValidationComponentInterface ValidationComponentInterface_interface;
    LogUtil* logUtil;
};


ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface);

void ValidationView_init(ValidationView* this, TransformInfoInterface* transformInfoInterface);
bool ValidationView_isValid(ValidationView* this);
const char* ValidationView_validationInfo(ValidationView* this);
Document* ValidationView_toValidationInfoDoc(ValidationView* this);
Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document);
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this);

static void ValidationView_initFields(ValidationView* this) {
    this->logUtil = LogUtil_getInstance();
}


void ValidationView_init(ValidationView* this, TransformInfoInterface* transformInfoInterface) {
        OrderView_init(&this->base, transformInfoInterface);
        ValidationView_initFields(this);
}

ValidationView* ValidationView_new(TransformInfoInterface* transformInfoInterface) {
    ValidationView* this = calloc(1, sizeof(ValidationView));
    ValidationView_init(this, transformInfoInterface);
    return this;
}


bool ValidationView_isValid(ValidationView* this) {
        JAVA_TRY {
            bool valid = true;
            if (JAVA_CALL(this->order, isIdValid) == false) {
                return false;
            } else {
                this->orderHistory = OrderHistoryFactory_getInstance(JAVA_CALL(this->order, getId));
                if (this->orderHistory == nullptr || JAVA_CALL(this->orderHistory, isValid) == false) {
                    return false;
                }
                OrderItemsEntity* orderItems = OrderItemsEntity_new();
                this->basketReview = OrderItemsEntity_getBasketReview(orderItems, JAVA_CALL(this->order, getId));
                if (this->basketReview == nullptr || JAVA_CALL(this->basketReview, isValid) == false) {
                    return false;
                }
            }
            return valid;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to validate form", this, this->commonStrings->IS_VALID, e);
            }
            return false;
        } JAVA_END_TRY;
}


const char* ValidationView_validationInfo(ValidationView* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            if (JAVA_CALL(this->order, isIdValid) == false) {
                StringMaker_append(stringBuffer, JAVA_CALL(this->order, getIdValidationInfo));
            } else {
                this->orderHistory = OrderHistoryFactory_getInstance(JAVA_CALL(this->order, getId));
                if (this->orderHistory == nullptr || JAVA_CALL(this->orderHistory, isValid) == false) {
                    StringMaker_append(stringBuffer, "Order History data error for: ");
                    StringMaker_append(stringBuffer, JAVA_CALL(this->order, getId));
                    StringMaker_append(stringBuffer, "<br />");
                }
                OrderItemsEntity* orderItems = OrderItemsEntity_new();
                this->basketReview = OrderItemsEntity_getBasketReview(orderItems, JAVA_CALL(this->order, getId));
                if (this->basketReview == nullptr) {
                    StringMaker_append(stringBuffer, "Order Items data error - does not exist for: ");
                    StringMaker_append(stringBuffer, JAVA_CALL(this->order, getId));
                    StringMaker_append(stringBuffer, "<br />");
                } else if (JAVA_CALL(this->basketReview, isValid) == false) {
                    StringMaker_append(stringBuffer, "Order Items data error - not valid for: ");
                    StringMaker_append(stringBuffer, JAVA_CALL(this->order, getId));
                    StringMaker_append(stringBuffer, "<br />");
                }
            }
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, "Failed to generate validation error info", this, "validationInfo()", e);
            }
            return "Error Validating Form";
        } JAVA_END_TRY;
}


Document* ValidationView_toValidationInfoDoc(ValidationView* this) {
        return nullptr;
}


Node* ValidationView_toValidationInfoNode(ValidationView* this, Document* document) {
        return nullptr;
}


// throws Exception
TransformInfoInterface* ValidationView_getTransformInfoInterface(ValidationView* this) {
        return OrderView_getTransformInfoInterface((&this->base));
}

