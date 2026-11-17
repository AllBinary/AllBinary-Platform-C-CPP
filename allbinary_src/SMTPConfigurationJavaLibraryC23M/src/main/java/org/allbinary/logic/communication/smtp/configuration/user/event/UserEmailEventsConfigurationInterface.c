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
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct UserEmailEventsConfigurationInterface UserEmailEventsConfigurationInterface;
struct UserEmailEventsConfigurationInterface {
    HashMap* (*getEventConfigurationHashMap)(void* this);
    void (*addUserEmailEventConfiguration)(void* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);
    UserEmailEventListenerInterface* (*getEventListener)(void* this, AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface);
};


