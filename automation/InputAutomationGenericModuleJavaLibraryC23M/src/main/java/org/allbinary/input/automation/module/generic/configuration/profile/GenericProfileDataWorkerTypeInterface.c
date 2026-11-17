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
// package org.allbinary.input.automation.module.generic.configuration.profile

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct GenericProfileDataWorkerTypeInterface GenericProfileDataWorkerTypeInterface;
struct GenericProfileDataWorkerTypeInterface {
    const char* (*getName)(void* this);
    void (*setName)(void* this, const char* name);
    const char* (*toString)(void* this);
    Node* (*toXmlNode)(void* this, Document* document);
};


