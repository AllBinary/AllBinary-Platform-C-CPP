// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif


static DestroyedEventHandler* DestroyedEventHandler_instance;








void DestroyedEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DestroyedEventHandler_instance = DestroyedEventHandler_new();
}

void DestroyedEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyedEventHandler", "BasicEventHandler");
    java_register_method("DestroyedEventHandler", "addListener", (void*) DestroyedEventHandler_addListener);
    java_register_method("DestroyedEventHandler", "removeAllListeners", (void*) DestroyedEventHandler_removeAllListeners);
    java_register_method("DestroyedEventHandler", "removeListener", (void*) DestroyedEventHandler_removeListener);
    java_register_method("DestroyedEventHandler", "fireEvent", (void*) DestroyedEventHandler_fireEvent);
    java_register_method("DestroyedEventHandler", "process", (void*) DestroyedEventHandler_process);
}

static void DestroyedEventHandler_initFields(DestroyedEventHandler* this) {
    this->list = BasicArrayListD_new();
}


// synchronized
DestroyedEventHandler* DestroyedEventHandler_getInstance(void) {
        return (DestroyedEventHandler_staticInit(), DestroyedEventHandler_instance);
}


void DestroyedEventHandler_init(DestroyedEventHandler* this) {
    DestroyedEventHandler_register();
    BasicEventHandler_init(&this->base);
    DestroyedEventHandler_initFields(this);
}

DestroyedEventHandler* DestroyedEventHandler_new(void) {
    DestroyedEventHandler* this = java_object_alloc(sizeof(DestroyedEventHandler), "DestroyedEventHandler");
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
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void DestroyedEventHandler_process(DestroyedEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DestroyedEventListenerInterface* destroyedEventListenerInterface = ((DestroyedEventListenerInterface*) eventListenerInterface);
        DestroyedEventListenerInterface_onDestroyed(destroyedEventListenerInterface, ((DestroyedEvent*) eventObject));
}

