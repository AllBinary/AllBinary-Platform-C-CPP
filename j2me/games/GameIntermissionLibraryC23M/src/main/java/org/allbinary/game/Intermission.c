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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/game/IntermissionInterface.h"

typedef struct Intermission Intermission;
struct Intermission {
    IntermissionInterface IntermissionInterface_interface;
    bool enabled;
    TimeDelayHelper* timeElapsedHelper;
    IntermissionEnableListenerInterface* intermissionEnableListener;
};


Intermission* Intermission_new(void);

void Intermission_init(Intermission* this);
void Intermission_setListener(Intermission* this, IntermissionEnableListenerInterface* enableListener);
TimeDelayHelper* Intermission_getTimeDelayHelper(Intermission* this);
void Intermission_setEnabled(Intermission* this, bool enabled);
bool Intermission_isEnabled(Intermission* this);

static void Intermission_initFields(Intermission* this) {
    this->enabled = false;
    this->timeElapsedHelper = TimeDelayHelper_new(0);
    this->intermissionEnableListener = NullIntermissionEnableListener_getInstance();
}


void Intermission_init(Intermission* this) {
    Intermission_initFields(this);
}

Intermission* Intermission_new(void) {
    Intermission* this = calloc(1, sizeof(Intermission));
    Intermission_init(this);
    return this;
}


void Intermission_setListener(Intermission* this, IntermissionEnableListenerInterface* enableListener) {
        this->intermissionEnableListener = enableListener;
}


TimeDelayHelper* Intermission_getTimeDelayHelper(Intermission* this) {
        return this->timeElapsedHelper;
}


void Intermission_setEnabled(Intermission* this, bool enabled) {
        this->enabled = enabled;
        if (Intermission_isEnabled(this)) {
            JAVA_CALL(Intermission_getTimeDelayHelper(this), setStartTimeTNT);
        }
        IntermissionEnableListenerInterface_notifyIntermission(this->intermissionEnableListener, enabled);
}


bool Intermission_isEnabled(Intermission* this) {
        return this->enabled;
}

