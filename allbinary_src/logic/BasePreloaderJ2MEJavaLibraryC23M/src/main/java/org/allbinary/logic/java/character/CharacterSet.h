#ifndef ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARACTERSET_H
#define ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARACTERSET_H
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

//import java.nio.charset.Charset;
typedef struct CharacterSet CharacterSet;
struct CharacterSet {
    char unused;
};


CharacterSet* CharacterSet_new(void);

void CharacterSet_init(CharacterSet* this);

const char* CharacterSet_toString(CharacterSet* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CharacterSet_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CharacterSet_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_CHARACTER_CHARACTERSET_H
