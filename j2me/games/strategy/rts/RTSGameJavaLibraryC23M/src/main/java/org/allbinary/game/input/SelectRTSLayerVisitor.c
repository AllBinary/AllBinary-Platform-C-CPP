/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct SelectRTSLayerVisitor SelectRTSLayerVisitor;
struct SelectRTSLayerVisitor {
    Visitor base;
};


SelectRTSLayerVisitor* SelectRTSLayerVisitor_new(void);

void SelectRTSLayerVisitor_init(SelectRTSLayerVisitor* this);


void SelectRTSLayerVisitor_init(SelectRTSLayerVisitor* this) {
    Visitor_init(&this->base);
}

SelectRTSLayerVisitor* SelectRTSLayerVisitor_new(void) {
    SelectRTSLayerVisitor* this = calloc(1, sizeof(SelectRTSLayerVisitor));
    SelectRTSLayerVisitor_init(this);
    return this;
}

