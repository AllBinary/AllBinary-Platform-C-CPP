/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/RTSLayerFormFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h"

typedef struct AdvancedRTSLayerFormFactory AdvancedRTSLayerFormFactory;
struct AdvancedRTSLayerFormFactory {
    RTSLayerFormFactory base;
    LogUtil* logUtil;
    ScrollSelectionForm* scrollSelectionForm;
};


AdvancedRTSLayerFormFactory* AdvancedRTSLayerFormFactory_new(const char* label, ItemArraySingletonFactoryInterface* itemArrayFactoryInterface);

void AdvancedRTSLayerFormFactory_init(AdvancedRTSLayerFormFactory* this, const char* label, ItemArraySingletonFactoryInterface* itemArrayFactoryInterface);
ScrollSelectionForm* AdvancedRTSLayerFormFactory_getInstance(AdvancedRTSLayerFormFactory* this, RTSLayer* rtsLayer);

static void AdvancedRTSLayerFormFactory_initFields(AdvancedRTSLayerFormFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void AdvancedRTSLayerFormFactory_init(AdvancedRTSLayerFormFactory* this, const char* label, ItemArraySingletonFactoryInterface* itemArrayFactoryInterface) {
    RTSLayerFormFactory_init(&this->base);
    AdvancedRTSLayerFormFactory_initFields(this);
        ScrollSelectionForm* scrollSelectionForm = ScrollSelectionForm_getNullScrollSelectionForm();
        JAVA_TRY {
            ABCustomItem** items = ItemArraySingletonFactoryInterface_getItems(itemArrayFactoryInterface);
            scrollSelectionForm = RTSScrollSelectionFormFactory_getInstance(label, items);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
        this->scrollSelectionForm = scrollSelectionForm;
}

AdvancedRTSLayerFormFactory* AdvancedRTSLayerFormFactory_new(const char* label, ItemArraySingletonFactoryInterface* itemArrayFactoryInterface) {
    AdvancedRTSLayerFormFactory* this = calloc(1, sizeof(AdvancedRTSLayerFormFactory));
    AdvancedRTSLayerFormFactory_init(this, label, itemArrayFactoryInterface);
    return this;
}


ScrollSelectionForm* AdvancedRTSLayerFormFactory_getInstance(AdvancedRTSLayerFormFactory* this, RTSLayer* rtsLayer) {
        return this->scrollSelectionForm;
}

