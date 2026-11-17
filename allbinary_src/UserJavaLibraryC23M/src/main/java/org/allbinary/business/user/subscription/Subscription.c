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
// package org.allbinary.business.user.subscription

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Subscription Subscription;
struct Subscription {
    char unused;
};


Subscription* Subscription_new(void);

void Subscription_init(Subscription* this);
bool Subscription_isSubscribed(Subscription* this);


void Subscription_init(Subscription* this) {
}

Subscription* Subscription_new(void) {
    Subscription* this = calloc(1, sizeof(Subscription));
    Subscription_init(this);
    return this;
}


bool Subscription_isSubscribed(Subscription* this) {
        return true;
}

