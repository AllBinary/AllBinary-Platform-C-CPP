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
// package org.allbinary.business.user.modules.customer.wholesale

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/UserFactoryInterface.h"
#include "org/allbinary/business/user/UserInterface.h"

typedef struct WholesaleUserFactory WholesaleUserFactory;
struct WholesaleUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


WholesaleUserFactory* WholesaleUserFactory_new(void);

void WholesaleUserFactory_init(WholesaleUserFactory* this);
UserInterface* WholesaleUserFactory_getInstance(WholesaleUserFactory* this);
UserInterface* WholesaleUserFactory_getInstance(WholesaleUserFactory* this, HashMap* hashMap);


void WholesaleUserFactory_init(WholesaleUserFactory* this) {
}

WholesaleUserFactory* WholesaleUserFactory_new(void) {
    WholesaleUserFactory* this = calloc(1, sizeof(WholesaleUserFactory));
    WholesaleUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* WholesaleUserFactory_getInstance(WholesaleUserFactory* this) {
        return WholesaleUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* WholesaleUserFactory_getInstance(WholesaleUserFactory* this, HashMap* hashMap) {
        return WholesaleUser_new(hashMap);
}

