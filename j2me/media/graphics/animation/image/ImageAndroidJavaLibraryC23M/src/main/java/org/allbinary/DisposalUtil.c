/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/eclipse/swt/graphics/Resource.h"

typedef struct DisposalUtil DisposalUtil;
struct DisposalUtil {
    char unused;
};

static DisposalUtil* DisposalUtil_instance;

DisposalUtil* DisposalUtil_new(void);
DisposalUtil* DisposalUtil_getInstance(void);
void DisposalUtil_disposeImage(DisposalUtil* this, Image* image);
void DisposalUtil_disposeResource(DisposalUtil* this, Resource* resource);

// Static fields with runtime initializers: call this once at startup
void DisposalUtil_staticInit(void) {
    DisposalUtil_instance = DisposalUtil_new();
}

void DisposalUtil_init(DisposalUtil* this) {
}

DisposalUtil* DisposalUtil_new(void) {
    DisposalUtil* this = calloc(1, sizeof(DisposalUtil));
    DisposalUtil_init(this);
    return this;
}


DisposalUtil* DisposalUtil_getInstance(void) {
        return DisposalUtil_instance;
}


void DisposalUtil_disposeImage(DisposalUtil* this, Image* image) {
}


void DisposalUtil_disposeResource(DisposalUtil* this, Resource* resource) {
        if (!Resource_isDisposed(resource)) {
            Resource_dispose(resource);
        }
}

