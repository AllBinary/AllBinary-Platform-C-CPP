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

typedef struct NextUnremoveableProcessor NextUnremoveableProcessor;
struct NextUnremoveableProcessor {
    Processor base;
    PlayerGameNotificationHud* updateMeasurementProcessor;
};


NextUnremoveableProcessor* NextUnremoveableProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor);

void NextUnremoveableProcessor_init(NextUnremoveableProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor);
void NextUnremoveableProcessor_process(NextUnremoveableProcessor* this);

static void NextUnremoveableProcessor_initFields(NextUnremoveableProcessor* this) {
    
}


void NextUnremoveableProcessor_init(NextUnremoveableProcessor* this, PlayerGameNotificationHud* updateMeasurementProcessor) {
    Processor_init(&this->base);
    NextUnremoveableProcessor_initFields(this);
        this->updateMeasurementProcessor = updateMeasurementProcessor;
}

NextUnremoveableProcessor* NextUnremoveableProcessor_new(PlayerGameNotificationHud* updateMeasurementProcessor) {
    NextUnremoveableProcessor* this = calloc(1, sizeof(NextUnremoveableProcessor));
    NextUnremoveableProcessor_init(this, updateMeasurementProcessor);
    return this;
}


// throws Exception
void NextUnremoveableProcessor_process(NextUnremoveableProcessor* this) {
        PlayerGameNotificationHud_setNextUnremoveableProcess(this->updateMeasurementProcessor);
}

