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

typedef struct PCGameInputMapping PCGameInputMapping;
struct PCGameInputMapping {
    PersistentInputMapping base;
};


PCGameInputMapping* PCGameInputMapping_new(void);

void PCGameInputMapping_init(PCGameInputMapping* this);
void PCGameInputMapping_init(PCGameInputMapping* this, AbeClientInformationInterface* abeClientInformation);
bool PCGameInputMapping_isDelete(PCGameInputMapping* this, Input* input);
bool PCGameInputMapping_isSystemInput(PCGameInputMapping* this, Input* input);


void PCGameInputMapping_init(PCGameInputMapping* this) {
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
}

PCGameInputMapping* PCGameInputMapping_new(void) {
    PCGameInputMapping* this = calloc(1, sizeof(PCGameInputMapping));
    PCGameInputMapping_init(this);
    return this;
}


// throws Exception
void PCGameInputMapping_init(PCGameInputMapping* this, AbeClientInformationInterface* abeClientInformation) {
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->INIT);
        PCKeyFactory_getInstance();
        PersistentInputMapping_init((&this->base), abeClientInformation);
        if (PCGameInputMapping_getTotalMapped(this) == 0 || PCGameInputMapping_isDefaultNew(this)) {
            JAVA_CALL(PCGameInputMapping_getInputMapping(this), addMapping, PCGameInputMapping_getDefault(this));
            PCGameInputMapping_save(this, abeClientInformation);
        }
}


bool PCGameInputMapping_isDelete(PCGameInputMapping* this, Input* input) {
        if (input == PCKeyFactory_getInstance()->DEL) {
            return true;
        } else {
            return false;
        }
}


bool PCGameInputMapping_isSystemInput(PCGameInputMapping* this, Input* input) {
        return false;
}

