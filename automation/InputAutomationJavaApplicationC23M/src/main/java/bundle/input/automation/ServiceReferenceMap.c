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
// package bundle.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Collection.h"
// #include "java/util/Map.h"
// #include "java/util/Set.h"
#include "org/osgi/framework/ServiceReference.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct ServiceReferenceMap ServiceReferenceMap;
struct ServiceReferenceMap {
    Map Map_interface;
    ServiceReference* serviceReference;
};


ServiceReferenceMap* ServiceReferenceMap_new(ServiceReference* serviceReference);

void ServiceReferenceMap_init(ServiceReferenceMap* this, ServiceReference* serviceReference);
int32_t ServiceReferenceMap_size(ServiceReferenceMap* this);
bool ServiceReferenceMap_isEmpty(ServiceReferenceMap* this);
bool ServiceReferenceMap_containsKey(ServiceReferenceMap* this, Any* key);
bool ServiceReferenceMap_containsValue(ServiceReferenceMap* this, Any* value);
Any* ServiceReferenceMap_get(ServiceReferenceMap* this, Any* key);
Any* ServiceReferenceMap_put(ServiceReferenceMap* this, Any* key, Any* value);
Any* ServiceReferenceMap_remove(ServiceReferenceMap* this, Any* key);
void ServiceReferenceMap_putAll(ServiceReferenceMap* this, Map* m);
void ServiceReferenceMap_clear(ServiceReferenceMap* this);
Set* ServiceReferenceMap_keySet(ServiceReferenceMap* this);
Collection* ServiceReferenceMap_values(ServiceReferenceMap* this);
Set* ServiceReferenceMap_entrySet(ServiceReferenceMap* this);
const char* ServiceReferenceMap_toString(Map* map);

static void ServiceReferenceMap_initFields(ServiceReferenceMap* this) {
    
}


void ServiceReferenceMap_init(ServiceReferenceMap* this, ServiceReference* serviceReference) {
    ServiceReferenceMap_initFields(this);
        this->serviceReference = serviceReference;
}

ServiceReferenceMap* ServiceReferenceMap_new(ServiceReference* serviceReference) {
    ServiceReferenceMap* this = calloc(1, sizeof(ServiceReferenceMap));
    ServiceReferenceMap_init(this, serviceReference);
    return this;
}


int32_t ServiceReferenceMap_size(ServiceReferenceMap* this) {
        return -1;
}


bool ServiceReferenceMap_isEmpty(ServiceReferenceMap* this) {
        return false;
}


bool ServiceReferenceMap_containsKey(ServiceReferenceMap* this, Any* key) {
        return false;
}


bool ServiceReferenceMap_containsValue(ServiceReferenceMap* this, Any* value) {
        return false;
}


Any* ServiceReferenceMap_get(ServiceReferenceMap* this, Any* key) {
        return ServiceReference_getProperty(this->serviceReference, ((const char*) key));
}


Any* ServiceReferenceMap_put(ServiceReferenceMap* this, Any* key, Any* value) {
        return nullptr;
}


Any* ServiceReferenceMap_remove(ServiceReferenceMap* this, Any* key) {
        return nullptr;
}


void ServiceReferenceMap_putAll(ServiceReferenceMap* this, Map* m) {
}


void ServiceReferenceMap_clear(ServiceReferenceMap* this) {
}


Set* ServiceReferenceMap_keySet(ServiceReferenceMap* this) {
        const char** keyStringArray = ServiceReference_getPropertyKeys(this->serviceReference);
        return nullptr;
}


Collection* ServiceReferenceMap_values(ServiceReferenceMap* this) {
        return nullptr;
}


Set* ServiceReferenceMap_entrySet(ServiceReferenceMap* this) {
        return nullptr;
}


const char* ServiceReferenceMap_toString(Map* map) {
        StringMaker* stringBuffer = StringMaker_new();
        return StringMaker_toString(stringBuffer);
}

