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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"

typedef struct InputAutomationClientInformation InputAutomationClientInformation;
struct InputAutomationClientInformation {
    AbeClientInformation base;
};


InputAutomationClientInformation* InputAutomationClientInformation_new(void);

void InputAutomationClientInformation_init(InputAutomationClientInformation* this);


void InputAutomationClientInformation_init(InputAutomationClientInformation* this) {
        AbeClientInformation_init(&this->base, "InputAutomationTool", "0.0.1", "InputAutomationTool 0.0.1", "IA");
}

InputAutomationClientInformation* InputAutomationClientInformation_new(void) {
    InputAutomationClientInformation* this = calloc(1, sizeof(InputAutomationClientInformation));
    InputAutomationClientInformation_init(this);
    return this;
}

