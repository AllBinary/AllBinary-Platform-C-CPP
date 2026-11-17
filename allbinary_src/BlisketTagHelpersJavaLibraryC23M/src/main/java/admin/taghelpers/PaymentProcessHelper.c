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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "views/admin/payment/PaymentProcessorComponent.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct PaymentProcessHelper PaymentProcessHelper;
struct PaymentProcessHelper {
    TagHelper base;
    PaymentProcessorComponent* paymentProcessorComponent;
};


PaymentProcessHelper* PaymentProcessHelper_new(HashMap* propertiesHashMap, PageContext* pageContext);

void PaymentProcessHelper_init(PaymentProcessHelper* this, HashMap* propertiesHashMap, PageContext* pageContext);
const char* PaymentProcessHelper_process(PaymentProcessHelper* this);

static void PaymentProcessHelper_initFields(PaymentProcessHelper* this) {
    
}


void PaymentProcessHelper_init(PaymentProcessHelper* this, HashMap* propertiesHashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    PaymentProcessHelper_initFields(this);
        TransformInfoHttpInterface* transformInfoInterface = ((TransformInfoHttpInterface*) TransformInfoHttpFactory_getInstance(propertiesHashMap, pageContext));
        this->paymentProcessorComponent = PaymentProcessorComponent_new(transformInfoInterface);
}

PaymentProcessHelper* PaymentProcessHelper_new(HashMap* propertiesHashMap, PageContext* pageContext) {
    PaymentProcessHelper* this = calloc(1, sizeof(PaymentProcessHelper));
    PaymentProcessHelper_init(this, propertiesHashMap, pageContext);
    return this;
}


// throws Exception
const char* PaymentProcessHelper_process(PaymentProcessHelper* this) {
        return PaymentProcessorComponent_view(this->paymentProcessorComponent);
}

