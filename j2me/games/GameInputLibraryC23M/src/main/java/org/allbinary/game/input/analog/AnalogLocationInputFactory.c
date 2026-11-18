// Generated Code Do Not Modify
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"


static AnalogLocationInputFactory* AnalogLocationInputFactory_instance;






void AnalogLocationInputFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnalogLocationInputFactory_instance = AnalogLocationInputFactory_new();
}

void AnalogLocationInputFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnalogLocationInputFactory", nullptr);
    java_register_method("AnalogLocationInputFactory", "addPlayer", (void*) AnalogLocationInputFactory_addPlayer);
    java_register_method("AnalogLocationInputFactory", "getInstanceForPlayer", (void*) AnalogLocationInputFactory_getInstanceForPlayer);
    java_register_method("AnalogLocationInputFactory", "getList", (void*) AnalogLocationInputFactory_getList);
}

static void AnalogLocationInputFactory_initFields(AnalogLocationInputFactory* this) {
    this->list = BasicArrayListD_new();
}


AnalogLocationInputFactory* AnalogLocationInputFactory_getInstance(void) {
        return (AnalogLocationInputFactory_staticInit(), AnalogLocationInputFactory_instance);
}


void AnalogLocationInputFactory_init(AnalogLocationInputFactory* this) {
    AnalogLocationInputFactory_register();
    AnalogLocationInputFactory_initFields(this);
}

AnalogLocationInputFactory* AnalogLocationInputFactory_new(void) {
    AnalogLocationInputFactory* this = java_object_alloc(sizeof(AnalogLocationInputFactory), "AnalogLocationInputFactory");
    AnalogLocationInputFactory_init(this);
    return this;
}


void AnalogLocationInputFactory_addPlayer(AnalogLocationInputFactory* this, int32_t playerInputId) {
        AnalogLocationInput* analogLocationInput = (AnalogLocationInput_staticInit(), AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT);
        if (playerInputId < BasicArrayList_size(this->list)) {
            analogLocationInput = ((AnalogLocationInput*) BasicArrayList_get(this->list, playerInputId));
        }
        if (analogLocationInput == (AnalogLocationInput_staticInit(), AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT)) {
            analogLocationInput = AnalogLocationInput_new(playerInputId);
            BasicArrayList_add(this->list, analogLocationInput);
        }
}


AnalogLocationInput* AnalogLocationInputFactory_getInstanceForPlayer(AnalogLocationInputFactory* this, int32_t playerInputId) {
        return ((AnalogLocationInput*) BasicArrayList_get(this->list, playerInputId));
}


BasicArrayList* AnalogLocationInputFactory_getList(AnalogLocationInputFactory* this) {
        return this->list;
}

