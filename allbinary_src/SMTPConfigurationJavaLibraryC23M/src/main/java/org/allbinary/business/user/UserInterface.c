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
// package org.allbinary.business.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"

typedef struct UserInterface UserInterface;
struct UserInterface {
    void (*setUserName)(void* this, const char* value);
    void (*setPrefixName)(void* this, const char* value);
    void (*setFirstName)(void* this, const char* value);
    void (*setLastName)(void* this, const char* value);
    void (*setMiddleName)(void* this, const char* value);
    void (*setSuffixName)(void* this, const char* value);
    void (*setCompany)(void* this, const char* value);
    void (*setPositionAtCompany)(void* this, const char* value);
    void (*setMainEmail)(void* this, const char* value);
    void (*setSecondaryEmail)(void* this, const char* value);
    void (*setHomePhone)(void* this, const char* value);
    void (*setCellPhone)(void* this, const char* value);
    void (*setWorkPhone)(void* this, const char* value);
    void (*setOtherContact)(void* this, const char* value);
    void (*setElectronicContact)(void* this, const char* value);
    void (*setFax)(void* this, const char* value);
    void (*setRole)(void* this, UserRole* aRole);
    void (*setEncryption)(void* this, const char* value);
    void (*setSecret)(void* this, const char* value);
    void (*setPassword)(void* this, const char* value);
    void (*setPermissions)(void* this, const char* value);
    void (*enable)(void* this);
    void (*setEnable)(void* this, const char* enable);
    const char* (*getUserName)(void* this);
    const char* (*getPrefixName)(void* this);
    const char* (*getFirstName)(void* this);
    const char* (*getLastName)(void* this);
    const char* (*getMiddleName)(void* this);
    const char* (*getSuffixName)(void* this);
    const char* (*getCompany)(void* this);
    const char* (*getPositionAtCompany)(void* this);
    const char* (*getMainEmail)(void* this);
    const char* (*getSecondaryEmail)(void* this);
    const char* (*getHomePhone)(void* this);
    const char* (*getCellPhone)(void* this);
    const char* (*getWorkPhone)(void* this);
    const char* (*getOtherContact)(void* this);
    const char* (*getElectronicContact)(void* this);
    const char* (*getFax)(void* this);
    UserRole* (*getRole)(void* this);
    const char* (*getEncryption)(void* this);
    const char* (*getSecret)(void* this);
    const char* (*getPassword)(void* this);
    const char* (*getPermissions)(void* this);
    UserConfigurationInterface* (*getUserConfigurationInterface)(void* this);
    void (*setUserConfigurationInterface)(void* this, UserConfigurationInterface* userConfigurationInterface);
    HashMap* (*toPasswordHashMap)(void* this);
    void (*validateSession)(void* this, WeblisketSessionInterface* weblisketSession);
    void (*updateSession)(void* this, WeblisketSessionInterface* weblisketSession);
    bool (*isSessionValid)(void* this);
};


