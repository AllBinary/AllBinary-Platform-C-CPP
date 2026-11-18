#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENT_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENT_H
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
// package org.allbinary.logic.system.hardware.components

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Component Component;
struct Component {
    const char* name;
};


Component* Component_new(const char* componentName);

void Component_init(Component* this, const char* componentName);

const char* Component_toString(Component* this);
#define Component_new1 Component_new
#define Component_init1 Component_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Component_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Component_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_COMPONENT_H
