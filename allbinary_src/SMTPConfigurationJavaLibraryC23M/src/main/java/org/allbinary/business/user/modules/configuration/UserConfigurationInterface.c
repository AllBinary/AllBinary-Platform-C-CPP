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
// package org.allbinary.business.user.modules.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/time/created/TimeCreated.h"
#include "org/allbinary/business/time/modified/TimeLastModified.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"

typedef struct UserConfigurationInterface UserConfigurationInterface;
struct UserConfigurationInterface {
    UserEmailConfigurationInterface* (*getUserEmailConfigurationInterface)(void* this);
    void (*setUserEmailConfigurationInterface)(void* this, UserEmailConfigurationInterface* userEmailConfigurationInterface);
    TimeCreated* (*getTimeCreated)(void* this);
    TimeLastModified* (*getTimeLastModified)(void* this);
    void (*setTimeCreated)(void* this, TimeCreated* timeCreated);
    void (*setTimeLastModified)(void* this, TimeLastModified* timeLastModified);
};


