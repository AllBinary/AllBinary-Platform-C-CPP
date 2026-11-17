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
// package org.allbinary.game.combat.destroy.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct DestroyedEventHandler DestroyedEventHandler;
struct DestroyedEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static DestroyedEventHandler* DestroyedEventHandler_instance;

DestroyedEventHandler* DestroyedEventHandler_new(void);
DestroyedEventHandler* DestroyedEventHandler_getInstance(void);

void DestroyedEventHandler_init(DestroyedEventHandler* this);
void DestroyedEventHandler_addListener(DestroyedEventHandler* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer);
void DestroyedEventHandler_removeAllListeners(DestroyedEventHandler* this);
void DestroyedEventHandler_removeListener(DestroyedEventHandler* this, EventListenerInterface* eventListenerInterface);
void DestroyedEventHandler_fireEvent(DestroyedEventHandler* this, AllBinaryEventObject* eventObject);
void DestroyedEventHandler_process(DestroyedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void DestroyedEventHandler_staticInit(void) {
    DestroyedEventHandler_instance = DestroyedEventHandler_new();
}

static void DestroyedEventHandler_initFields(DestroyedEventHandler* this) {
    this->list = BasicArrayListD_new();
}


// synchronized
DestroyedEventHandler* DestroyedEventHandler_getInstance(void) {
        return DestroyedEventHandler_instance;
}


void DestroyedEventHandler_init(DestroyedEventHandler* this) {
    BasicEventHandler_init(&this->base);
    DestroyedEventHandler_initFields(this);
}

DestroyedEventHandler* DestroyedEventHandler_new(void) {
    DestroyedEventHandler* this = calloc(1, sizeof(DestroyedEventHandler));
    DestroyedEventHandler_init(this);
    return this;
}


void DestroyedEventHandler_addListener(DestroyedEventHandler* this, CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) {
        if (!BasicArrayList_contains(this->list, collidableDestroyableDamageableLayer)) {
            BasicArrayList_add(this->list, collidableDestroyableDamageableLayer);
        }
}


// synchronized
void DestroyedEventHandler_removeAllListeners(DestroyedEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


// synchronized
void DestroyedEventHandler_removeListener(DestroyedEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void DestroyedEventHandler_fireEvent(DestroyedEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) this->list->objectArray[index]);
                CollidableDestroyableDamageableLayer_onDestroyed(collidableDestroyableDamageableLayer, ((DestroyedEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void DestroyedEventHandler_process(DestroyedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DestroyedEventListenerInterface* destroyedEventListenerInterface = ((DestroyedEventListenerInterface*) eventListenerInterface);
        DestroyedEventListenerInterface_onDestroyed(destroyedEventListenerInterface, ((DestroyedEvent*) eventObject));
}

