#ifndef ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H
#define ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HealthListenerInterface HealthListenerInterface;
#include "org/allbinary/game/health/HealthListenerInterface.h"

typedef struct NullHealthListener NullHealthListener;
struct NullHealthListener {
    HealthListenerInterface HealthListenerInterface_interface;
};

extern NullHealthListener* NullHealthListener_NULL_HEALTH_LISTENER;

NullHealthListener* NullHealthListener_new(void);
void NullHealthListener_init(NullHealthListener* this);

void NullHealthListener_onHealthChange(NullHealthListener* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullHealthListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullHealthListener_register(void);


#endif // ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H
