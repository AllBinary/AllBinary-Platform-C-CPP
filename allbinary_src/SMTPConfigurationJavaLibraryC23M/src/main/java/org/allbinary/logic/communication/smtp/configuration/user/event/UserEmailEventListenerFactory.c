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
// package org.allbinary.logic.communication.smtp.configuration.user.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct UserEmailEventListenerFactory UserEmailEventListenerFactory;
struct UserEmailEventListenerFactory {
    char unused;
};


UserEmailEventListenerFactory* UserEmailEventListenerFactory_new(void);

void UserEmailEventListenerFactory_init(UserEmailEventListenerFactory* this);
UserEmailEventListenerInterface* UserEmailEventListenerFactory_getInstance(AbeClientInformationInterface* abeClientInformation, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface, UserInterface* userInterface);


void UserEmailEventListenerFactory_init(UserEmailEventListenerFactory* this) {
}

UserEmailEventListenerFactory* UserEmailEventListenerFactory_new(void) {
    UserEmailEventListenerFactory* this = calloc(1, sizeof(UserEmailEventListenerFactory));
    UserEmailEventListenerFactory_init(this);
    return this;
}


// throws Exception
UserEmailEventListenerInterface* UserEmailEventListenerFactory_getInstance(AbeClientInformationInterface* abeClientInformation, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface, UserInterface* userInterface) {
        Any** params = ((Any**) java_array_new(sizeof(Any*), 1));
        const char** classes = ((const char**) java_array_new(sizeof(const char*), 1));
        classes[0] = "UserInterface";
        params[0] = ((Any*) userInterface);
        return ((UserEmailEventListenerInterface*) AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, UserEmailEventConfigurationInterface_getEventListenerClassPath(userEmailEventConfigurationInterface), classes, params));
}

