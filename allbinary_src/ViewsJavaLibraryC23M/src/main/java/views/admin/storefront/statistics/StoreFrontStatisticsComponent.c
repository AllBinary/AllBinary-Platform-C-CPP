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
// package views.admin.storefront.statistics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/RealTimeStoreFrontStatistics.h"
#include "org/allbinary/business/context/modules/storefront/statistics/RealTimeStoreFrontStatisticsView.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct StoreFrontStatisticsComponent StoreFrontStatisticsComponent;
struct StoreFrontStatisticsComponent {
    HttpStoreComponentView base;
    LogUtil* logUtil;
    StoreFrontInterface* newStoreFrontInterface;
    DomNodeInterface* domNodeInterface;
};


StoreFrontStatisticsComponent* StoreFrontStatisticsComponent_new(TransformInfoInterface* transformInfoInterface);

void StoreFrontStatisticsComponent_init(StoreFrontStatisticsComponent* this, TransformInfoInterface* transformInfoInterface);
void StoreFrontStatisticsComponent_addDomNodeInterfaces(StoreFrontStatisticsComponent* this);
const char* StoreFrontStatisticsComponent_view(StoreFrontStatisticsComponent* this);

static void StoreFrontStatisticsComponent_initFields(StoreFrontStatisticsComponent* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void StoreFrontStatisticsComponent_init(StoreFrontStatisticsComponent* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        StoreFrontStatisticsComponent_initFields(this);
        this->newStoreFrontInterface = ((StoreFrontInterface*) StoreFrontFactory_getInstance(TransformInfoInterface_getStoreName(transformInfoInterface)));
        this->domNodeInterface = RealTimeStoreFrontStatisticsView_new(RealTimeStoreFrontStatistics_new(this->newStoreFrontInterface), JAVA_CALL(StoreFrontStatisticsComponent_getWeblisketSession(this), getRole));
}

StoreFrontStatisticsComponent* StoreFrontStatisticsComponent_new(TransformInfoInterface* transformInfoInterface) {
    StoreFrontStatisticsComponent* this = calloc(1, sizeof(StoreFrontStatisticsComponent));
    StoreFrontStatisticsComponent_init(this, transformInfoInterface);
    return this;
}


void StoreFrontStatisticsComponent_addDomNodeInterfaces(StoreFrontStatisticsComponent* this) {
        StoreFrontStatisticsComponent_addDomNodeInterface(this, ((DomNodeInterface*) this->domNodeInterface));
}


// throws Exception
const char* StoreFrontStatisticsComponent_view(StoreFrontStatisticsComponent* this) {
        JAVA_TRY {
            StoreFrontStatisticsComponent_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

