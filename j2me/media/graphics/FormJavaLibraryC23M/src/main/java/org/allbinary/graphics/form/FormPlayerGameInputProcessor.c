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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"

typedef struct FormPlayerGameInputProcessor FormPlayerGameInputProcessor;
struct FormPlayerGameInputProcessor {
    Processor base;
    PlayerGameInputCompositeInterface* playerGameInputCompositeInterface;
};


FormPlayerGameInputProcessor* FormPlayerGameInputProcessor_new(PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);

void FormPlayerGameInputProcessor_init(FormPlayerGameInputProcessor* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);
void FormPlayerGameInputProcessor_process(FormPlayerGameInputProcessor* this);

static void FormPlayerGameInputProcessor_initFields(FormPlayerGameInputProcessor* this) {
    
}


void FormPlayerGameInputProcessor_init(FormPlayerGameInputProcessor* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) {
    Processor_init(&this->base);
    FormPlayerGameInputProcessor_initFields(this);
        this->playerGameInputCompositeInterface = playerGameInputCompositeInterface;
}

FormPlayerGameInputProcessor* FormPlayerGameInputProcessor_new(PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) {
    FormPlayerGameInputProcessor* this = calloc(1, sizeof(FormPlayerGameInputProcessor));
    FormPlayerGameInputProcessor_init(this, playerGameInputCompositeInterface);
    return this;
}


// throws Exception
void FormPlayerGameInputProcessor_process(FormPlayerGameInputProcessor* this) {
        JAVA_CALL(PlayerGameInputCompositeInterface_getPlayerGameInput(this->playerGameInputCompositeInterface), update);
}

