#ifndef ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_H
#define ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_H
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
// package org.allbinary.logic.java.character

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CharArrayFactory CharArrayFactory;
struct CharArrayFactory {
    uint16_t* zeroCharArray;
};


CharArrayFactory* CharArrayFactory_new(void);
void CharArrayFactory_init(CharArrayFactory* this);

CharArrayFactory* CharArrayFactory_getInstance(void);

uint16_t* CharArrayFactory_getZeroCharArray(CharArrayFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CharArrayFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CharArrayFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARARRAYFACTORY_H
