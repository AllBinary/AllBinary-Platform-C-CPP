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
// package org.allbinary.logic.communication.http

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AcceptableResponseFactory AcceptableResponseFactory;
struct AcceptableResponseFactory {
    AcceptableResponse* HTML;
    AcceptableResponse* WML;
    AcceptableResponse* VXML;
};

static AcceptableResponseFactory* AcceptableResponseFactory_instance;

AcceptableResponseFactory* AcceptableResponseFactory_new(void);
AcceptableResponseFactory* AcceptableResponseFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AcceptableResponseFactory_staticInit(void) {
    AcceptableResponseFactory_instance = AcceptableResponseFactory_new();
}

static void AcceptableResponseFactory_initFields(AcceptableResponseFactory* this) {
    this->HTML = AcceptableResponse_new("text/html", "html", 0);
    this->WML = AcceptableResponse_new("text/wml", "wml", 1);
    this->VXML = AcceptableResponse_new("text/vxml", "vxml", 2);
}

void AcceptableResponseFactory_init(AcceptableResponseFactory* this) {
    AcceptableResponseFactory_initFields(this);
}

AcceptableResponseFactory* AcceptableResponseFactory_new(void) {
    AcceptableResponseFactory* this = calloc(1, sizeof(AcceptableResponseFactory));
    AcceptableResponseFactory_init(this);
    return this;
}


AcceptableResponseFactory* AcceptableResponseFactory_getInstance(void) {
        return AcceptableResponseFactory_instance;
}

