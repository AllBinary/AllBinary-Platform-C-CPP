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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/RTSGameStrings.h"
#include "org/allbinary/game/layer/RTSInterface.h"
#include "org/allbinary/game/layer/RTSPlayerLayerInterface.h"
#include "org/allbinary/game/layer/TechnologyRTSInterfaceImageItem.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/game/rts/technology/event/TechEventHandler.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/media/audio/BuildingSound.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEvent.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/audio/ErrorSound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"

typedef struct TechRTSFormInput TechRTSFormInput;
struct TechRTSFormInput {
    RTSFormInput base;
    AllBinaryEventObject* EVENT;
    GameNotificationEvent* noMoneyGameNotificationEvent;
};


TechRTSFormInput* TechRTSFormInput_new(Group** groupInterface);

void TechRTSFormInput_init(TechRTSFormInput* this, Group** groupInterface);
void TechRTSFormInput_setAllBinaryGameLayerManager(TechRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void TechRTSFormInput_processGameSpecific(TechRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex);

static void TechRTSFormInput_initFields(TechRTSFormInput* this) {
    this->EVENT = AllBinaryEventObject_new(this);
    
}


void TechRTSFormInput_init(TechRTSFormInput* this, Group** groupInterface) {
        RTSFormInput_init(&this->base, groupInterface);
        TechRTSFormInput_initFields(this);
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        this->noMoneyGameNotificationEvent = GameNotificationEvent_new(this, RTSGameStrings_getInstance()->NO_MONEY, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2), basicColorFactory->WHITE, BooleanFactory_getInstance()->FALSE);
}

TechRTSFormInput* TechRTSFormInput_new(Group** groupInterface) {
    TechRTSFormInput* this = calloc(1, sizeof(TechRTSFormInput));
    TechRTSFormInput_init(this, groupInterface);
    return this;
}


// throws Exception
void TechRTSFormInput_setAllBinaryGameLayerManager(TechRTSFormInput* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        RTSFormInput_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        GameNotificationEvent_setBasicColorP(this->noMoneyGameNotificationEvent, BasicGeographicMap_getForegroundBasicColor(geographicMapInterface));
}


// throws Exception
void TechRTSFormInput_processGameSpecific(TechRTSFormInput* this, CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t itemIndex) {
        RTSFormInput_process((&this->base), layerManager);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        StringMaker* stringMaker = StringMaker_new();
        TechnologyRTSInterfaceImageItem* technologyRTSInterfaceImageItem = ((TechnologyRTSInterfaceImageItem*) item);
        RTSInterface* rtsInterface = TechnologyRTSInterfaceImageItem_getRtsInterface(technologyRTSInterfaceImageItem);
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "isUpgradeable: "), appendboolean, RTSInterface_isUpgradeable(rtsInterface)), toString), this, commonStrings->PROCESS);
        if (RTSInterface_isUpgradeable(rtsInterface)) {
            int32_t cost = RTSInterface_getUpgradeCost(rtsInterface);
            Capital* capital = RTSPlayerLayerInterface_getCapital(rtsPlayerLayerInterface);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(stringMaker, cost), append, "<="), appendint, ((int32_t) Capital_getTotalMoney(capital))), toString), this, commonStrings->PROCESS);
            if (cost <= Capital_getTotalMoney(capital)) {
                RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, BuildingSound_getInstance());
                Capital_removeMoney(capital, cost);
                RTSInterface_upgrade(rtsInterface);
                TechnologyRTSInterfaceImageItem_update(technologyRTSInterfaceImageItem);
                TechEventHandler_fireEvent(TechEventHandler_getInstance(), this->EVENT);
            } else {
                RTSPlayerLayerInterface_add(rtsPlayerLayerInterface, ErrorSound_getInstance());
                if (!RTSPlayerLayerInterface_implmentsArtificialIntelligenceCompositeInterface(rtsPlayerLayerInterface)) {
                    GameNotificationEventHandler_fireEvent(GameNotificationEventHandler_getInstance(), this->noMoneyGameNotificationEvent);
                }
            }
        }
}

