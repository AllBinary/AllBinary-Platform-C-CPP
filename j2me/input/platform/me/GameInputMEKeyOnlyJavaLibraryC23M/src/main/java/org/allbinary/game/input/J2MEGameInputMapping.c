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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct J2MEGameInputMapping J2MEGameInputMapping;
struct J2MEGameInputMapping {
    PersistentInputMapping base;
};


J2MEGameInputMapping* J2MEGameInputMapping_new(void);

void J2MEGameInputMapping_init(J2MEGameInputMapping* this);
void J2MEGameInputMapping_init(J2MEGameInputMapping* this, AbeClientInformationInterface* abeClientInformation);
bool J2MEGameInputMapping_isDelete(J2MEGameInputMapping* this, Input* input);
bool J2MEGameInputMapping_isSystemInput(J2MEGameInputMapping* this, Input* input);


void J2MEGameInputMapping_init(J2MEGameInputMapping* this) {
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
}

J2MEGameInputMapping* J2MEGameInputMapping_new(void) {
    J2MEGameInputMapping* this = calloc(1, sizeof(J2MEGameInputMapping));
    J2MEGameInputMapping_init(this);
    return this;
}


// throws Exception
void J2MEGameInputMapping_init(J2MEGameInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->INIT);
        J2MEKeyFactory_init(J2MEKeyFactory_getInstance());
        PersistentInputMapping_init((&this->base), abeClientInformation);
        if (J2MEGameInputMapping_getTotalMapped(this) == 0 || J2MEGameInputMapping_isDefaultNew(this)) {
            JAVA_CALL(J2MEGameInputMapping_getInputMapping(this), addMapping, J2MEGameInputMapping_getDefault(this));
            J2MEGameInputMapping_save(this, abeClientInformation);
        }
}


bool J2MEGameInputMapping_isDelete(J2MEGameInputMapping* this, Input* input) {
        if (input == GameKeyFactory_getInstance()->GAME_D) {
            return true;
        } else {
            return false;
        }
}


bool J2MEGameInputMapping_isSystemInput(J2MEGameInputMapping* this, Input* input) {
        return false;
}

