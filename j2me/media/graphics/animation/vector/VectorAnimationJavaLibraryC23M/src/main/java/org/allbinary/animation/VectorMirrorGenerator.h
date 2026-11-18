#ifndef ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H
#define ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H
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
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListS BasicArrayListS;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationUtil.h")
#include "org/allbinary/animation/VectorAnimationUtil.h"
#endif

typedef struct VectorMirrorGenerator VectorMirrorGenerator;
struct VectorMirrorGenerator {
    LogUtil* logUtil;
    VectorAnimationUtil* vectorAnimationUtil;
};


VectorMirrorGenerator* VectorMirrorGenerator_new(void);

VectorMirrorGenerator* VectorMirrorGenerator_getInstance0(void);

void VectorMirrorGenerator_init(VectorMirrorGenerator* this);

int32_t*** VectorMirrorGenerator_getInstance3_1(VectorMirrorGenerator* this, int32_t*** points, int32_t width);

BasicArrayList* VectorMirrorGenerator_getInstance3_2(VectorMirrorGenerator* this, BasicArrayList* pointBasicArrayList, int32_t width);
#define VectorMirrorGenerator_getInstance(...) JAVA_OVERLOADED(VectorMirrorGenerator_getInstance, __VA_ARGS__)
#define VectorMirrorGenerator_getInstance3(a1, a2, a3) _Generic((a2), int32_t***: VectorMirrorGenerator_getInstance3_1, default: VectorMirrorGenerator_getInstance3_2)(a1, a2, a3)
#define VectorMirrorGenerator_new0 VectorMirrorGenerator_new
#define VectorMirrorGenerator_init0 VectorMirrorGenerator_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorMirrorGenerator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorMirrorGenerator_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H
