#ifndef ORG_ALLBINARY_INIT_INIT_H
#define ORG_ALLBINARY_INIT_INIT_H
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
// package org.allbinary.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct InitInterface InitInterface;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/init/InitInterface.h"

typedef struct Init Init;
struct Init {
    InitInterface InitInterface_interface;
    CommonStrings* commonStrings;
};


Init* Init_new(void);
void Init_init(Init* this);

void Init_initMethod(Init* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Init_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Init_register(void);


#endif // ORG_ALLBINARY_INIT_INIT_H
