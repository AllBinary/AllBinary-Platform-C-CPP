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
#include "org/allbinary/graphics/CustomGPoint.h"

typedef struct AnalogLocationInput AnalogLocationInput;
struct AnalogLocationInput {
    int32_t playerId;
    CustomGPoint* customGPoint;
    int32_t rz;
    int32_t rightTrigger;
    int32_t leftTrigger;
};

AnalogLocationInput* AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT;

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

// Static fields with runtime initializers: call this once at startup
void AnalogLocationInput_staticInit(void) {
    AnalogLocationInput_NULL_ANALOG_LOCATION_INPUT = AnalogLocationInput_new(-1);
}

static void AnalogLocationInput_initFields(AnalogLocationInput* this) {
    
    
    this->rz = 0;
    this->rightTrigger = 0;
    this->leftTrigger = 0;
}


void AnalogLocationInput_init(AnalogLocationInput* this, int32_t playerId) {
    AnalogLocationInput_initFields(this);
        this->playerId = playerId;
        this->customGPoint = CustomGPoint_new(0, 0, 0);
}

AnalogLocationInput* AnalogLocationInput_new(int32_t playerId) {
    AnalogLocationInput* this = calloc(1, sizeof(AnalogLocationInput));
    AnalogLocationInput_init(this, playerId);
    return this;
}


int32_t AnalogLocationInput_getPlayerId(AnalogLocationInput* this) {
        return this->playerId;
}


CustomGPoint* AnalogLocationInput_getCustomGPoint(AnalogLocationInput* this) {
        return this->customGPoint;
}


int32_t AnalogLocationInput_getRz(AnalogLocationInput* this) {
        return this->rz;
}


void AnalogLocationInput_setRz(AnalogLocationInput* this, int32_t rz) {
        this->rz = rz;
}


int32_t AnalogLocationInput_getRightTrigger(AnalogLocationInput* this) {
        return this->rightTrigger;
}


void AnalogLocationInput_setRightTrigger(AnalogLocationInput* this, int32_t rightTrigger) {
        this->rightTrigger = rightTrigger;
}


int32_t AnalogLocationInput_getLeftTrigger(AnalogLocationInput* this) {
        return this->leftTrigger;
}


void AnalogLocationInput_setLeftTrigger(AnalogLocationInput* this, int32_t leftTrigger) {
        this->leftTrigger = leftTrigger;
}

