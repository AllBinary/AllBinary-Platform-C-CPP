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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/layer/LayerInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct ReverseVelocityBoundsVisitor ReverseVelocityBoundsVisitor;
struct ReverseVelocityBoundsVisitor {
    BoundsVisitorInterface BoundsVisitorInterface_interface;
    LogUtil* logUtil;
    VelocityInterface* velocityInterface;
    LayerInterface* layerInterface;
};


ReverseVelocityBoundsVisitor* ReverseVelocityBoundsVisitor_new(LayerInterface* layerInterface);

void ReverseVelocityBoundsVisitor_init(ReverseVelocityBoundsVisitor* this, LayerInterface* layerInterface);
int32_t ReverseVelocityBoundsVisitor_getX(ReverseVelocityBoundsVisitor* this);
int32_t ReverseVelocityBoundsVisitor_getY(ReverseVelocityBoundsVisitor* this);
void ReverseVelocityBoundsVisitor_minX(ReverseVelocityBoundsVisitor* this);
void ReverseVelocityBoundsVisitor_maxX(ReverseVelocityBoundsVisitor* this);
void ReverseVelocityBoundsVisitor_minY(ReverseVelocityBoundsVisitor* this);
void ReverseVelocityBoundsVisitor_maxY(ReverseVelocityBoundsVisitor* this);

static void ReverseVelocityBoundsVisitor_initFields(ReverseVelocityBoundsVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void ReverseVelocityBoundsVisitor_init(ReverseVelocityBoundsVisitor* this, LayerInterface* layerInterface) {
    ReverseVelocityBoundsVisitor_initFields(this);
        this->layerInterface = layerInterface;
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) layerInterface);
        this->velocityInterface = ((VelocityInterface*) VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface));
}

ReverseVelocityBoundsVisitor* ReverseVelocityBoundsVisitor_new(LayerInterface* layerInterface) {
    ReverseVelocityBoundsVisitor* this = calloc(1, sizeof(ReverseVelocityBoundsVisitor));
    ReverseVelocityBoundsVisitor_init(this, layerInterface);
    return this;
}


int32_t ReverseVelocityBoundsVisitor_getX(ReverseVelocityBoundsVisitor* this) {
        return LayerInterface_getXP(this->layerInterface);
}


int32_t ReverseVelocityBoundsVisitor_getY(ReverseVelocityBoundsVisitor* this) {
        return LayerInterface_getYP(this->layerInterface);
}


void ReverseVelocityBoundsVisitor_minX(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(VelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), getUnscaled) < 0) {
            JAVA_CALL(VelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}


void ReverseVelocityBoundsVisitor_maxX(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(VelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), getUnscaled) > 0) {
            JAVA_CALL(VelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}


void ReverseVelocityBoundsVisitor_minY(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(VelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), getUnscaled) < 0) {
            JAVA_CALL(VelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}


void ReverseVelocityBoundsVisitor_maxY(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(VelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), getUnscaled) > 0) {
            JAVA_CALL(VelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}

