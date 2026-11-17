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
// package org.allbinary.business.user.modules.customer.affiliate

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

typedef struct AffiliateUserFactory AffiliateUserFactory;
struct AffiliateUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


AffiliateUserFactory* AffiliateUserFactory_new(void);

void AffiliateUserFactory_init(AffiliateUserFactory* this);
UserInterface* AffiliateUserFactory_getInstance(AffiliateUserFactory* this);
UserInterface* AffiliateUserFactory_getInstance(AffiliateUserFactory* this, HashMap* hashMap);


void AffiliateUserFactory_init(AffiliateUserFactory* this) {
}

AffiliateUserFactory* AffiliateUserFactory_new(void) {
    AffiliateUserFactory* this = calloc(1, sizeof(AffiliateUserFactory));
    AffiliateUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* AffiliateUserFactory_getInstance(AffiliateUserFactory* this) {
        return AffiliateUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* AffiliateUserFactory_getInstance(AffiliateUserFactory* this, HashMap* hashMap) {
        return AffiliateUser_new(hashMap);
}

