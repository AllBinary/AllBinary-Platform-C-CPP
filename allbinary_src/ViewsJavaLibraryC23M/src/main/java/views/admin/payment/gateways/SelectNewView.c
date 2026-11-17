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
// package views.admin.payment.gateways

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
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/admin/payment/gateway/PaymentGatewayViewAbstract.h"

typedef struct SelectNewView SelectNewView;
struct SelectNewView {
    PaymentGatewayViewAbstract base;
    LogUtil* logUtil;
};


SelectNewView* SelectNewView_new(TransformInfoInterface* transformInfoInterface);

void SelectNewView_init(SelectNewView* this, TransformInfoInterface* transformInfoInterface);
const char* SelectNewView_view(SelectNewView* this);

static void SelectNewView_initFields(SelectNewView* this) {
    this->logUtil = LogUtil_getInstance();
}


void SelectNewView_init(SelectNewView* this, TransformInfoInterface* transformInfoInterface) {
        PaymentGatewayViewAbstract_init(&this->base, transformInfoInterface);
        SelectNewView_initFields(this);
}

SelectNewView* SelectNewView_new(TransformInfoInterface* transformInfoInterface) {
    SelectNewView* this = calloc(1, sizeof(SelectNewView));
    SelectNewView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* SelectNewView_view(SelectNewView* this) {
        JAVA_TRY {
            PaymentGatewayEntityInterface* paymentGatewayEntityInterface = PaymentGatewayEntityFactory_getInstance();
            BasicArrayList* existingGateways = PaymentGatewayEntityInterface_findPaymentTypeVectorByStore(paymentGatewayEntityInterface, JAVA_CALL(SelectNewView_getPaymentGatewayPrimaryKey(this), getStoreName));
            BasicArrayList* allGatewaysLessExisting = BasicPaymentTypeUtil_difference(BasicPaymentTypeUtil_getInstance(), existingGateways);
            return PaymentGatewaysView_view(PaymentGatewaysView_new(SelectNewView_getTransformInfoInterface(this), allGatewaysLessExisting));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

