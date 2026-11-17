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
// package views.admin.customizers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Arrays.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/sort/StringComparator.h"
#include "org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizerData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/TransformTemplateCustomizersData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"
#include "org/allbinary/logic/visual/transform/template/util/TransformTemplateCustomizerUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct CustomizersView CustomizersView;
struct CustomizersView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* customizersVector;
};


CustomizersView* CustomizersView_new(TransformInfoInterface* transformInfoInterface);

void CustomizersView_init(CustomizersView* this, TransformInfoInterface* transformInfoInterface);
Node* CustomizersView_toXmlNode(CustomizersView* this, Document* document);
void CustomizersView_addDomNodeInterfaces(CustomizersView* this);
const char* CustomizersView_view(CustomizersView* this);

static void CustomizersView_initFields(CustomizersView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void CustomizersView_init(CustomizersView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        CustomizersView_initFields(this);
        this->customizersVector = TransformInfoEntityBuilder_getNames(TransformInfoEntityBuilder_getInstance(), JAVA_CALL(CustomizersView_getWeblisketSession(this), getStoreName));
}

CustomizersView* CustomizersView_new(TransformInfoInterface* transformInfoInterface) {
    CustomizersView* this = calloc(1, sizeof(CustomizersView));
    CustomizersView_init(this, transformInfoInterface);
    return this;
}


Node* CustomizersView_toXmlNode(CustomizersView* this, Document* document) {
        JAVA_TRY {
            Node* node = Document_createElement(document, TransformTemplateCustomizersData_NAME);
            BasicArrayList* unsortedCustomizerViewVector = BasicArrayListD_new();
            int32_t size = BasicArrayList_size(this->customizersVector);
            for (int32_t index = 0; index < size; index++) {
                const char* viewName = ((const char*) BasicArrayList_get(this->customizersVector, index));
                if (java_string_indexOf(viewName, CustomizerTransformInfoData_NAME) > 0 && java_string_indexOf(viewName, HttpStoreComponentView_GLOBALS2->EDIT) > 0 && java_string_indexOf(viewName, BodyData_getInstance()->VIEWNAMEKEY) > 0 && java_string_indexOf(viewName, TitleData_getInstance()->VIEWNAMEKEY) > 0) {
                    BasicArrayList_add(unsortedCustomizerViewVector, viewName);
                }
            }
            Any** objectArray = ((Any**) BasicArrayList_toArray(unsortedCustomizerViewVector));
            Arrays_sort(objectArray, StringComparator_new());
            for (int32_t index = 0; index < java_array_length(objectArray); index++) {
                const char* viewName = ((const char*) objectArray[index]);
                Node* viewNameNode = ModDomHelper_createNameValueNodes(document, TransformTemplateCustomizerData_NAME, viewName, TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil_getInstance(), viewName, JAVA_CALL(CustomizersView_getWeblisketSession(this), getStoreName)));
                Node_appendChild(node, viewNameNode);
            }
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void CustomizersView_addDomNodeInterfaces(CustomizersView* this) {
        CustomizersView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* CustomizersView_view(CustomizersView* this) {
        JAVA_TRY {
            CustomizersView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

