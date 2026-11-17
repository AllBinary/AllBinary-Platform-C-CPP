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
// package org.allbinary.business.user.modules.customer.subscriber

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/modules/User.h"
#include "org/allbinary/business/user/subscription/Subscription.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"

typedef struct SubscriberUser SubscriberUser;
struct SubscriberUser {
    User base;
    Subscription* subscription;
};


SubscriberUser* SubscriberUser_new(void);

void SubscriberUser_init(SubscriberUser* this);

SubscriberUser* SubscriberUser_new1(HashMap* userHashMap);
void SubscriberUser_init1(SubscriberUser* this, HashMap* userHashMap);
void SubscriberUser_validateSession(SubscriberUser* this, WeblisketSessionInterface* weblisketSession);
void SubscriberUser_updateSession(SubscriberUser* this, WeblisketSessionInterface* weblisketSession);
bool SubscriberUser_isSessionValid(SubscriberUser* this);

static void SubscriberUser_initFields(SubscriberUser* this) {
    
}


void SubscriberUser_init(SubscriberUser* this) {
        User_init(&this->base);
        SubscriberUser_initFields(this);
        this->subscription = Subscription_new();
}

SubscriberUser* SubscriberUser_new(void) {
    SubscriberUser* this = calloc(1, sizeof(SubscriberUser));
    SubscriberUser_init(this);
    return this;
}


void SubscriberUser_init1(SubscriberUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
        SubscriberUser_initFields(this);
        this->subscription = Subscription_new();
}

SubscriberUser* SubscriberUser_new1(HashMap* userHashMap) {
    SubscriberUser* this = calloc(1, sizeof(SubscriberUser));
    SubscriberUser_init1(this, userHashMap);
    return this;
}


void SubscriberUser_validateSession(SubscriberUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        SubscriberUser_updateSession(this, weblisketSession);
}


void SubscriberUser_updateSession(SubscriberUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, SubscriberUser_getPermissions(this));
}


bool SubscriberUser_isSessionValid(SubscriberUser* this) {
        return Subscription_isSubscribed(this->subscription);
}

