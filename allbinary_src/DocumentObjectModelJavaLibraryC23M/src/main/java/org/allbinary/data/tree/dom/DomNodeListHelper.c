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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/w3c/dom/NodeList.h"

typedef struct DomNodeListHelper DomNodeListHelper;
struct DomNodeListHelper {
    char unused;
};


DomNodeListHelper* DomNodeListHelper_new(void);
BasicArrayList* DomNodeListHelper_getVector(NodeList* nodeList);

void DomNodeListHelper_init(DomNodeListHelper* this) {
}

DomNodeListHelper* DomNodeListHelper_new(void) {
    DomNodeListHelper* this = calloc(1, sizeof(DomNodeListHelper));
    DomNodeListHelper_init(this);
    return this;
}


BasicArrayList* DomNodeListHelper_getVector(NodeList* nodeList) {
        BasicArrayList* vector = BasicArrayListD_new();
        int32_t size = NodeList_getLength(nodeList);
        for (int32_t index = 0; index < size; index++) {
            BasicArrayList_add(vector, DomNodeHelper_getTextNodeValue(NodeList_item(nodeList, index)));
        }
        return vector;
}

