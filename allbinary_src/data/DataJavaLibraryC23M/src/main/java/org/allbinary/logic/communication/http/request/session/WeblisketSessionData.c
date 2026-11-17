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
// package org.allbinary.logic.communication.http.request.session

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct WeblisketSessionData WeblisketSessionData;
struct WeblisketSessionData {
    char unused;
};

const char* WeblisketSessionData_INVALIDATESESSION = "SESSION_INVALIDATE_SESSION";
const char* WeblisketSessionData_ATTEMPTS = "SESSION_ATTEMPTS";
const char* WeblisketSessionData_TIMEOUT = "SESSION_TIMEOUT";
const char* WeblisketSessionData_REMOVABLEUSERNAME = "SESSION_REMOVABLE_USER_NAME";
const char* WeblisketSessionData_REMOVABLEPASSWORD = "SESSION_REMOVABLE_PASSWORD";
const char* WeblisketSessionData_REMOVABLENEWPASSWORD = "SESSION_REMOVABLE_NEW_PASSWORD";
const char* WeblisketSessionData_REMOVABLEREENTERNEWPASSWORD = "SESSION_REMOVABLE_REENTER_NEW_PASSWORD";
const char* WeblisketSessionData_AUTHENTICATED = "SESSION_AUTHENTICATED";

WeblisketSessionData* WeblisketSessionData_new(void);

void WeblisketSessionData_init(WeblisketSessionData* this);


void WeblisketSessionData_init(WeblisketSessionData* this) {
}

WeblisketSessionData* WeblisketSessionData_new(void) {
    WeblisketSessionData* this = calloc(1, sizeof(WeblisketSessionData));
    WeblisketSessionData_init(this);
    return this;
}

