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
// package org.allbinary.business.user.modules

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

typedef struct UserFactory UserFactory;
struct UserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


UserFactory* UserFactory_new(void);

void UserFactory_init(UserFactory* this);
UserInterface* UserFactory_getInstance(UserFactory* this, HashMap* hashMap);


void UserFactory_init(UserFactory* this) {
}

UserFactory* UserFactory_new(void) {
    UserFactory* this = calloc(1, sizeof(UserFactory));
    UserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* UserFactory_getInstance(UserFactory* this, HashMap* hashMap) {
        return User_new(hashMap);
}

