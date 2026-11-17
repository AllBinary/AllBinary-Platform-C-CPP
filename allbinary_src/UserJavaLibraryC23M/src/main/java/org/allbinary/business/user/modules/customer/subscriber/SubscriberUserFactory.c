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
// package org.allbinary.business.user.modules.customer.subscriber

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

typedef struct SubscriberUserFactory SubscriberUserFactory;
struct SubscriberUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


SubscriberUserFactory* SubscriberUserFactory_new(void);

void SubscriberUserFactory_init(SubscriberUserFactory* this);
UserInterface* SubscriberUserFactory_getInstance(SubscriberUserFactory* this);
UserInterface* SubscriberUserFactory_getInstance(SubscriberUserFactory* this, HashMap* hashMap);


void SubscriberUserFactory_init(SubscriberUserFactory* this) {
}

SubscriberUserFactory* SubscriberUserFactory_new(void) {
    SubscriberUserFactory* this = calloc(1, sizeof(SubscriberUserFactory));
    SubscriberUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* SubscriberUserFactory_getInstance(SubscriberUserFactory* this) {
        return SubscriberUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* SubscriberUserFactory_getInstance(SubscriberUserFactory* this, HashMap* hashMap) {
        return SubscriberUser_new(hashMap);
}

