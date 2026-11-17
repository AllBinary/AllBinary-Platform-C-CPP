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
#include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"

typedef struct SelectRTSLayerVisitorFactory SelectRTSLayerVisitorFactory;
struct SelectRTSLayerVisitorFactory {
    SelectRTSLayerVisitorFactoryInterface SelectRTSLayerVisitorFactoryInterface_interface;
};

static SelectRTSLayerVisitorFactory* SelectRTSLayerVisitorFactory_instance;

SelectRTSLayerVisitorFactory* SelectRTSLayerVisitorFactory_new(void);
SelectRTSLayerVisitorFactory* SelectRTSLayerVisitorFactory_getInstance(void);

void SelectRTSLayerVisitorFactory_init(SelectRTSLayerVisitorFactory* this);
Visitor* SelectRTSLayerVisitorFactory_create(SelectRTSLayerVisitorFactory* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

// Static fields with runtime initializers: call this once at startup
void SelectRTSLayerVisitorFactory_staticInit(void) {
    SelectRTSLayerVisitorFactory_instance = SelectRTSLayerVisitorFactory_new();
}


SelectRTSLayerVisitorFactory* SelectRTSLayerVisitorFactory_getInstance(void) {
        return SelectRTSLayerVisitorFactory_instance;
}


void SelectRTSLayerVisitorFactory_init(SelectRTSLayerVisitorFactory* this) {
}

SelectRTSLayerVisitorFactory* SelectRTSLayerVisitorFactory_new(void) {
    SelectRTSLayerVisitorFactory* this = calloc(1, sizeof(SelectRTSLayerVisitorFactory));
    SelectRTSLayerVisitorFactory_init(this);
    return this;
}


Visitor* SelectRTSLayerVisitorFactory_create(SelectRTSLayerVisitorFactory* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
        return SelectRTSLayerVisitor_new();
}

