#ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
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
typedef struct AnalogLocationInput AnalogLocationInput;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct AnalogLocationInputFactory AnalogLocationInputFactory;
struct AnalogLocationInputFactory {
    BasicArrayList* list;
};


AnalogLocationInputFactory* AnalogLocationInputFactory_new(void);

AnalogLocationInputFactory* AnalogLocationInputFactory_getInstance(void);

void AnalogLocationInputFactory_init(AnalogLocationInputFactory* this);

void AnalogLocationInputFactory_addPlayer(AnalogLocationInputFactory* this, int32_t playerInputId);

AnalogLocationInput* AnalogLocationInputFactory_getInstanceForPlayer(AnalogLocationInputFactory* this, int32_t playerInputId);

BasicArrayList* AnalogLocationInputFactory_getList(AnalogLocationInputFactory* this);
#define AnalogLocationInputFactory_new0 AnalogLocationInputFactory_new
#define AnalogLocationInputFactory_init0 AnalogLocationInputFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogLocationInputFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogLocationInputFactory_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUTFACTORY_H
