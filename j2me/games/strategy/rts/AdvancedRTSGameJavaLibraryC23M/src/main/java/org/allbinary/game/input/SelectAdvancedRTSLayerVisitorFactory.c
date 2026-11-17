/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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

typedef struct SelectAdvancedRTSLayerVisitorFactory SelectAdvancedRTSLayerVisitorFactory;
struct SelectAdvancedRTSLayerVisitorFactory {
    SelectRTSLayerVisitorFactoryInterface SelectRTSLayerVisitorFactoryInterface_interface;
};

static SelectAdvancedRTSLayerVisitorFactory* SelectAdvancedRTSLayerVisitorFactory_instance;

SelectAdvancedRTSLayerVisitorFactory* SelectAdvancedRTSLayerVisitorFactory_new(void);
SelectAdvancedRTSLayerVisitorFactory* SelectAdvancedRTSLayerVisitorFactory_getInstance(void);

void SelectAdvancedRTSLayerVisitorFactory_init(SelectAdvancedRTSLayerVisitorFactory* this);
Visitor* SelectAdvancedRTSLayerVisitorFactory_create(SelectAdvancedRTSLayerVisitorFactory* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

// Static fields with runtime initializers: call this once at startup
void SelectAdvancedRTSLayerVisitorFactory_staticInit(void) {
    SelectAdvancedRTSLayerVisitorFactory_instance = SelectAdvancedRTSLayerVisitorFactory_new();
}


SelectAdvancedRTSLayerVisitorFactory* SelectAdvancedRTSLayerVisitorFactory_getInstance(void) {
        return SelectAdvancedRTSLayerVisitorFactory_instance;
}


void SelectAdvancedRTSLayerVisitorFactory_init(SelectAdvancedRTSLayerVisitorFactory* this) {
}

SelectAdvancedRTSLayerVisitorFactory* SelectAdvancedRTSLayerVisitorFactory_new(void) {
    SelectAdvancedRTSLayerVisitorFactory* this = calloc(1, sizeof(SelectAdvancedRTSLayerVisitorFactory));
    SelectAdvancedRTSLayerVisitorFactory_init(this);
    return this;
}


Visitor* SelectAdvancedRTSLayerVisitorFactory_create(SelectAdvancedRTSLayerVisitorFactory* this, SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) {
        return SelectAdvancedRTSLayerVisitor_new(selectedRTSLayersPlayerGameInput);
}

