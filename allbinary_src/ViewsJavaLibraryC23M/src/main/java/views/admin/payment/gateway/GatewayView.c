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
// package views.admin.payment.gateway

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/admin/payment/gateway/PaymentGatewayViewAbstract.h"

typedef struct GatewayView GatewayView;
struct GatewayView {
    PaymentGatewayViewAbstract base;
    LogUtil* logUtil;
};


GatewayView* GatewayView_new(TransformInfoInterface* transformInfoInterface);

void GatewayView_init(GatewayView* this, TransformInfoInterface* transformInfoInterface);
void GatewayView_getFormData(GatewayView* this, HttpServletRequest* request);
const char* GatewayView_view(GatewayView* this);

static void GatewayView_initFields(GatewayView* this) {
    this->logUtil = LogUtil_getInstance();
}


void GatewayView_init(GatewayView* this, TransformInfoInterface* transformInfoInterface) {
        PaymentGatewayViewAbstract_init(&this->base, transformInfoInterface);
        GatewayView_initFields(this);
}

GatewayView* GatewayView_new(TransformInfoInterface* transformInfoInterface) {
    GatewayView* this = calloc(1, sizeof(GatewayView));
    GatewayView_init(this, transformInfoInterface);
    return this;
}


void GatewayView_getFormData(GatewayView* this, HttpServletRequest* request) {
        PaymentGatewayViewAbstract_getFormData((&this->base), request);
        if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), JAVA_CALL(GatewayView_getPaymentGatewayPrimaryKey(this), getName))) {
            JAVA_CALL(GatewayView_getPaymentGatewayPrimaryKey(this), setName, JAVA_CALL(GatewayView_getWeblisketSession(this), getPaymentMethod));
        }
}


// throws Exception
const char* GatewayView_view(GatewayView* this) {
        JAVA_TRY {
            PaymentGatewayInterface* paymentGatewayInterface = PaymentGatewayEntityFactory_getPaymentGatewayInterface(PaymentGatewayEntityFactory_getInstance(), JAVA_CALL(GatewayView_getPaymentGatewayPrimaryKey(this), getStoreName), BasicPaymentTypeUtil_get(BasicPaymentTypeUtil_getInstance(), JAVA_CALL(GatewayView_getPaymentGatewayPrimaryKey(this), getName)));
            return PaymentGatewayComponent_view(PaymentGatewayComponent_new(GatewayView_getTransformInfoInterface(this), paymentGatewayInterface));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "edit()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

