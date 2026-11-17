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

typedef struct TestClientInformation TestClientInformation;
struct TestClientInformation {
    AbeClientInformation base;
};


TestClientInformation* TestClientInformation_new(void);

void TestClientInformation_init(TestClientInformation* this);


void TestClientInformation_init(TestClientInformation* this) {
        AbeClientInformation_init(&this->base, "Test App Name", "0.0.1", "Test App Name 0.0.1", "TA");
}

TestClientInformation* TestClientInformation_new(void) {
    TestClientInformation* this = calloc(1, sizeof(TestClientInformation));
    TestClientInformation_init(this);
    return this;
}

