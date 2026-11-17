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
// package org.allbinary.logic.communication.smtp.configuration.server

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct EmailServerConfigurationInterface EmailServerConfigurationInterface;
struct EmailServerConfigurationInterface {
    void (*setSmtpServer)(void* this, const char* value);
    const char* (*getSmtpServer)(void* this);
    const char* (*getAccountName)(void* this);
    void (*setAccountName)(void* this, const char* accountName);
    const char* (*getPassword)(void* this);
    void (*setPassword)(void* this, const char* password);
    void (*log)(void* this);
    const char* (*toString)(void* this);
};


