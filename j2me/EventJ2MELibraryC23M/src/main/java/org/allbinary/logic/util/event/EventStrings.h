#ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H
#define ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H
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
// package org.allbinary.logic.util.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct EventStrings EventStrings;
struct EventStrings {
    const char* PERFORMANCE_MESSAGE;
    const char* TOTAL_LISTENERS;
    const char* LISTENER_LABEL;
    const char* FIRE_EVENT;
};


EventStrings* EventStrings_new(void);
void EventStrings_init(EventStrings* this);

EventStrings* EventStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EventStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EventStrings_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H
