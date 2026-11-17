// Generated Code Do Not Modify
// package org.allbinary.game.input.analog

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct AnalogLocationInputFactory AnalogLocationInputFactory;
struct AnalogLocationInputFactory {
    BasicArrayList* list;
};

static AnalogLocationInputFactory* AnalogLocationInputFactory_instance;

AnalogLocationInputFactory* AnalogLocationInputFactory_new(void);
AnalogLocationInputFactory* AnalogLocationInputFactory_getInstance(void);

void AnalogLocationInputFactory_init(AnalogLocationInputFactory* this);
void AnalogLocationInputFactory_addPlayer(AnalogLocationInputFactory* this, int32_t playerInputId);
AnalogLocationInput* AnalogLocationInputFactory_getInstanceForPlayer(AnalogLocationInputFactory* this, int32_t playerInputId);
BasicArrayList* AnalogLocationInputFactory_getList(AnalogLocationInputFactory* this);

// Static fields with runtime initializers: call this once at startup
void AnalogLocationInputFactory_staticInit(void) {
    AnalogLocationInputFactory_instance = AnalogLocationInputFactory_new();
}

static void AnalogLocationInputFactory_initFields(AnalogLocationInputFactory* this) {
    this->list = BasicArrayListD_new();
}


AnalogLocationInputFactory* AnalogLocationInputFactory_getInstance(void) {
        return AnalogLocationInputFactory_instance;
}


void AnalogLocationInputFactory_init(AnalogLocationInputFactory* this) {
    AnalogLocationInputFactory_initFields(this);
}

AnalogLocationInputFactory* AnalogLocationInputFactory_new(void) {
    AnalogLocationInputFactory* this = calloc(1, sizeof(AnalogLocationInputFactory));
    AnalogLocationInputFactory_init(this);
    return this;
}


void AnalogLocationInputFactory_addPlayer(AnalogLocationInputFactory* this, int32_t playerInputId) {
        AnalogLocationInput* analogLocationInput = AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT;
        if (playerInputId < BasicArrayList_size(this->list)) {
            analogLocationInput = ((AnalogLocationInput*) BasicArrayList_get(this->list, playerInputId));
        }
        if (analogLocationInput == AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT) {
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

