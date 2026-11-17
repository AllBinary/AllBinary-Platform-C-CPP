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
// package views.generic.advertisement.area

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaData.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h"
#include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityFactory.h"
#include "org/allbinary/data/tables/advertisement/areas/AdvertisementAreasEntityInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct AdvertisementAreaView AdvertisementAreaView;
struct AdvertisementAreaView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* advertisementAreaName;
};


AdvertisementAreaView* AdvertisementAreaView_new(TransformInfoInterface* transformInfoInterface);

void AdvertisementAreaView_init(AdvertisementAreaView* this, TransformInfoInterface* transformInfoInterface);
Node* AdvertisementAreaView_toXmlNode(AdvertisementAreaView* this, Document* document);
void AdvertisementAreaView_addDomNodeInterfaces(AdvertisementAreaView* this);
const char* AdvertisementAreaView_view(AdvertisementAreaView* this);

static void AdvertisementAreaView_initFields(AdvertisementAreaView* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void AdvertisementAreaView_init(AdvertisementAreaView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        AdvertisementAreaView_initFields(this);
        this->advertisementAreaName = ((const char*) JAVA_CALL(AdvertisementAreaView_getPropertiesHashMap(this), get, AdvertisementAreaData_getInstance()->NAME));
}

AdvertisementAreaView* AdvertisementAreaView_new(TransformInfoInterface* transformInfoInterface) {
    AdvertisementAreaView* this = calloc(1, sizeof(AdvertisementAreaView));
    AdvertisementAreaView_init(this, transformInfoInterface);
    return this;
}


// throws Exception
Node* AdvertisementAreaView_toXmlNode(AdvertisementAreaView* this, Document* document) {
        JAVA_TRY {
            AdvertisementAreasEntityInterface* advertisementAreasEntityInterface = AdvertisementAreasEntityFactory_getInstance();
            AdvertisementAreaInterface* advertisementAreaInterface = AdvertisementAreasEntityInterface_get(advertisementAreasEntityInterface, JAVA_CALL(AdvertisementAreaView_getTransformInfoInterface(this), getStoreName), this->advertisementAreaName);
            return nullptr;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


void AdvertisementAreaView_addDomNodeInterfaces(AdvertisementAreaView* this) {
        AdvertisementAreaView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* AdvertisementAreaView_view(AdvertisementAreaView* this) {
        JAVA_TRY {
            AdvertisementAreaView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

