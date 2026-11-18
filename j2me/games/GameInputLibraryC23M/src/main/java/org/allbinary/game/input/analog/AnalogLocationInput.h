#ifndef ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
#define ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
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
typedef struct CustomGPoint CustomGPoint;
#if __has_include("org/allbinary/graphics/CustomGPoint.h")
#include "org/allbinary/graphics/CustomGPoint.h"
#endif

typedef struct AnalogLocationInput AnalogLocationInput;
struct AnalogLocationInput {
    int32_t playerId;
    CustomGPoint* customGPoint;
    int32_t rz;
    int32_t rightTrigger;
    int32_t leftTrigger;
};

extern AnalogLocationInput* AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT;

AnalogLocationInput* AnalogLocationInput_new(int32_t playerId);

void AnalogLocationInput_init(AnalogLocationInput* this, int32_t playerId);

int32_t AnalogLocationInput_getPlayerId(AnalogLocationInput* this);

CustomGPoint* AnalogLocationInput_getCustomGPoint(AnalogLocationInput* this);

int32_t AnalogLocationInput_getRz(AnalogLocationInput* this);

void AnalogLocationInput_setRz(AnalogLocationInput* this, int32_t rz);

int32_t AnalogLocationInput_getRightTrigger(AnalogLocationInput* this);

void AnalogLocationInput_setRightTrigger(AnalogLocationInput* this, int32_t rightTrigger);

int32_t AnalogLocationInput_getLeftTrigger(AnalogLocationInput* this);

void AnalogLocationInput_setLeftTrigger(AnalogLocationInput* this, int32_t leftTrigger);
#define AnalogLocationInput_new1 AnalogLocationInput_new
#define AnalogLocationInput_init1 AnalogLocationInput_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnalogLocationInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnalogLocationInput_register(void);

#if __has_include("org/allbinary/graphics/CustomGPoint.h")
#include "org/allbinary/graphics/CustomGPoint.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_ANALOG_ANALOGLOCATIONINPUT_H
