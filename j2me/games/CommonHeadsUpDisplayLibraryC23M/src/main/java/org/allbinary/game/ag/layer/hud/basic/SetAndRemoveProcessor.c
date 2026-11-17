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
// package org.allbinary.game.ag.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"

typedef struct SetAndRemoveProcessor SetAndRemoveProcessor;
struct SetAndRemoveProcessor {
    Processor base;
    PlayerGameNotificationHud* updateMeasurementProcessor;
};


SetAndRemoveProcessor* SetAndRemoveProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor);

void SetAndRemoveProcessor_init(SetAndRemoveProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor);
void SetAndRemoveProcessor_process(SetAndRemoveProcessor* this);

static void SetAndRemoveProcessor_initFields(SetAndRemoveProcessor* this) {
    
}


void SetAndRemoveProcessor_init(SetAndRemoveProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor) {
    Processor_init(&this->base);
    SetAndRemoveProcessor_initFields(this);
        this->updateMeasurementProcessor = updateMeasurementProcessor;
}

SetAndRemoveProcessor* SetAndRemoveProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor) {
    SetAndRemoveProcessor* this = calloc(1, sizeof(SetAndRemoveProcessor));
    SetAndRemoveProcessor_init(this, updateMeasurementProcessor);
    return this;
}


// throws Exception
void SetAndRemoveProcessor_process(SetAndRemoveProcessor* this) {
        PlayerGameNotificationHud_setAndRemoveProcess(this->updateMeasurementProcessor);
}

