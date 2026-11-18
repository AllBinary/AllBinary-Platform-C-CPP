#ifndef ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H
#define ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H
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
typedef struct BoundsVisitorInterface BoundsVisitorInterface;
typedef struct VelocityInterface VelocityInterface;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct LayerInterface LayerInterface;
typedef struct LogUtil LogUtil;
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#if __has_include("org/allbinary/game/physics/velocity/VelocityInterface.h")
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#endif
#if __has_include("org/allbinary/layer/LayerInterface.h")
#include "org/allbinary/layer/LayerInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

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
#define ReverseVelocityBoundsVisitor_new1 ReverseVelocityBoundsVisitor_new
#define ReverseVelocityBoundsVisitor_init1 ReverseVelocityBoundsVisitor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ReverseVelocityBoundsVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ReverseVelocityBoundsVisitor_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_H
