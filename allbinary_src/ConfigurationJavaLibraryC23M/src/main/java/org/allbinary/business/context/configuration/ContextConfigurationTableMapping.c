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
// package org.allbinary.business.context.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct ContextConfigurationTableMapping ContextConfigurationTableMapping;
struct ContextConfigurationTableMapping {
    TableMappingInterface TableMappingInterface_interface;
    ContextConfigurationInterface* contextConfigurationInterface;
};


ContextConfigurationTableMapping* ContextConfigurationTableMapping_new(ContextConfigurationInterface* contextConfigurationInterface);

void ContextConfigurationTableMapping_init(ContextConfigurationTableMapping* this, ContextConfigurationInterface* contextConfigurationInterface);
HashMap* ContextConfigurationTableMapping_toHashMap(ContextConfigurationTableMapping* this);
Any* ContextConfigurationTableMapping_getKey(ContextConfigurationTableMapping* this);
BasicArrayList* ContextConfigurationTableMapping_toVector(ContextConfigurationTableMapping* this);

static void ContextConfigurationTableMapping_initFields(ContextConfigurationTableMapping* this) {
    
}


void ContextConfigurationTableMapping_init(ContextConfigurationTableMapping* this, ContextConfigurationInterface* contextConfigurationInterface) {
    ContextConfigurationTableMapping_initFields(this);
        this->contextConfigurationInterface = contextConfigurationInterface;
}

ContextConfigurationTableMapping* ContextConfigurationTableMapping_new(ContextConfigurationInterface* contextConfigurationInterface) {
    ContextConfigurationTableMapping* this = calloc(1, sizeof(ContextConfigurationTableMapping));
    ContextConfigurationTableMapping_init(this, contextConfigurationInterface);
    return this;
}


HashMap* ContextConfigurationTableMapping_toHashMap(ContextConfigurationTableMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return hashMap;
}


// throws Exception
Any* ContextConfigurationTableMapping_getKey(ContextConfigurationTableMapping* this) {
        return ContextConfigurationData_getInstance()->NAME;
}


// throws Exception
BasicArrayList* ContextConfigurationTableMapping_toVector(ContextConfigurationTableMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        return vector;
}

