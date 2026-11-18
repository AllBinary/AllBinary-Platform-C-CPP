#ifndef ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H
#define ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H
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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct VectorAnimationUtil VectorAnimationUtil;
typedef struct PointFactory PointFactory;
typedef struct BasicGraphicsPipeline BasicGraphicsPipeline;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct Angle Angle;
typedef struct AngleFactory AngleFactory;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListS BasicArrayListS;
typedef struct VectorInfo VectorInfo;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationUtil.h")
#include "org/allbinary/animation/VectorAnimationUtil.h"
#endif

typedef struct VectorRotationGenerator VectorRotationGenerator;
struct VectorRotationGenerator {
    LogUtil* logUtil;
    VectorAnimationUtil* vectorAnimationUtil;
    AngleFactory* angleFactory;
};


VectorRotationGenerator* VectorRotationGenerator_new(void);

VectorRotationGenerator* VectorRotationGenerator_getInstance0(void);

void VectorRotationGenerator_init(VectorRotationGenerator* this);

int32_t*** VectorRotationGenerator_getInstance2(VectorRotationGenerator* this, VectorInfo* vectorRotationInfo);

int32_t*** VectorRotationGenerator_getInstanceFrames(VectorRotationGenerator* this, int32_t width, int32_t height, int32_t** points, int32_t frames);

BasicArrayList* VectorRotationGenerator_getListAtAngle(VectorRotationGenerator* this, int32_t width, int32_t height, BasicArrayList* pointBasicArrayList, Angle* angle);
#define VectorRotationGenerator_getInstance(...) JAVA_OVERLOADED(VectorRotationGenerator_getInstance, __VA_ARGS__)
#define VectorRotationGenerator_new0 VectorRotationGenerator_new
#define VectorRotationGenerator_init0 VectorRotationGenerator_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorRotationGenerator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorRotationGenerator_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H
