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
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct DestroyEventFactory DestroyEventFactory;
struct DestroyEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
    AllBinaryGameCanvas* combatGameCanvas;
};


DestroyEventFactory* DestroyEventFactory_new(AllBinaryGameCanvas* combatGameCanvas);

void DestroyEventFactory_init(DestroyEventFactory* this, AllBinaryGameCanvas* combatGameCanvas);
AllBinaryEventObject* DestroyEventFactory_getInstance(DestroyEventFactory* this);

static void DestroyEventFactory_initFields(DestroyEventFactory* this) {
    
}


void DestroyEventFactory_init(DestroyEventFactory* this, AllBinaryGameCanvas* combatGameCanvas) {
    DestroyEventFactory_initFields(this);
        this->combatGameCanvas = combatGameCanvas;
}

DestroyEventFactory* DestroyEventFactory_new(AllBinaryGameCanvas* combatGameCanvas) {
    DestroyEventFactory* this = calloc(1, sizeof(DestroyEventFactory));
    DestroyEventFactory_init(this, combatGameCanvas);
    return this;
}


AllBinaryEventObject* DestroyEventFactory_getInstance(DestroyEventFactory* this) {
        return DestroyedEvent_new(this->combatGameCanvas);
}

