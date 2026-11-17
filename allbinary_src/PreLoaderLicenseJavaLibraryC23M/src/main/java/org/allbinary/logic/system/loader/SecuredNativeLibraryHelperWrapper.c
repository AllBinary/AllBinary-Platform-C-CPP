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
// package org.allbinary.logic.system.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/security/AbKeys.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/system/loader/NativeLibraryHelperWrapper.h"

typedef struct SecuredNativeLibraryHelperWrapper SecuredNativeLibraryHelperWrapper;
struct SecuredNativeLibraryHelperWrapper {
    NativeLibraryHelperWrapper base;
    SecuredNativeLibraryInterface* securedNativeLibraryInterface;
};


SecuredNativeLibraryHelperWrapper* SecuredNativeLibraryHelperWrapper_new(SecuredNativeLibraryInterface* securedNativeLibraryInterface);

void SecuredNativeLibraryHelperWrapper_init(SecuredNativeLibraryHelperWrapper* this, SecuredNativeLibraryInterface* securedNativeLibraryInterface);
bool SecuredNativeLibraryHelperWrapper_unlock(SecuredNativeLibraryHelperWrapper* this, AbeClientInformationInterface* abeClientInformation);

static void SecuredNativeLibraryHelperWrapper_initFields(SecuredNativeLibraryHelperWrapper* this) {
    
}


void SecuredNativeLibraryHelperWrapper_init(SecuredNativeLibraryHelperWrapper* this, SecuredNativeLibraryInterface* securedNativeLibraryInterface) {
        NativeLibraryHelperWrapper_init(&this->base, SecuredNativeLibraryInterface_getLibraryName(securedNativeLibraryInterface));
        SecuredNativeLibraryHelperWrapper_initFields(this);
        this->securedNativeLibraryInterface = securedNativeLibraryInterface;
}

SecuredNativeLibraryHelperWrapper* SecuredNativeLibraryHelperWrapper_new(SecuredNativeLibraryInterface* securedNativeLibraryInterface) {
    SecuredNativeLibraryHelperWrapper* this = calloc(1, sizeof(SecuredNativeLibraryHelperWrapper));
    SecuredNativeLibraryHelperWrapper_init(this, securedNativeLibraryInterface);
    return this;
}


// throws LicensingException
bool SecuredNativeLibraryHelperWrapper_unlock(SecuredNativeLibraryHelperWrapper* this, AbeClientInformationInterface* abeClientInformation) {
        return SecuredNativeLibraryInterface_unlock(this->securedNativeLibraryInterface, AbKeys_getKey(AbKeys_getInstance(), abeClientInformation, SecuredNativeLibraryInterface_getName(this->securedNativeLibraryInterface)));
}

