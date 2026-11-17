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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Document.h"

typedef struct InitInfoDocument InitInfoDocument;
struct InitInfoDocument {
    Document* initInfoDocument;
};


InitInfoDocument* InitInfoDocument_new(void);

void InitInfoDocument_init(InitInfoDocument* this);

static void InitInfoDocument_initFields(InitInfoDocument* this) {
    this->initInfoDocument = nullptr;
}


void InitInfoDocument_init(InitInfoDocument* this) {
    InitInfoDocument_initFields(this);
}

InitInfoDocument* InitInfoDocument_new(void) {
    InitInfoDocument* this = calloc(1, sizeof(InitInfoDocument));
    InitInfoDocument_init(this);
    return this;
}

