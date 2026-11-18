#ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMDATA_H
#define ORG_ALLBINARY_DATA_TREE_DOM_DOMDATA_H
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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DomData DomData;
struct DomData {
    char unused;
};

extern const char* DomData_ID;
extern const char* DomData_CHILD;
extern const char* DomData_NAME;
extern const char* DomData_VALUE;
extern const char* DomData_INDEX;

DomData* DomData_new(void);

void DomData_init(DomData* this);
#define DomData_new0 DomData_new
#define DomData_init0 DomData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DomData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DomData_register(void);


#endif // ORG_ALLBINARY_DATA_TREE_DOM_DOMDATA_H
