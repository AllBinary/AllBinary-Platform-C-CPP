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
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/RotationAnimation.h"

typedef struct NullRotationAnimation NullRotationAnimation;
struct NullRotationAnimation {
    RotationAnimation base;
};


NullRotationAnimation* NullRotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);
NullRotationAnimation* NullRotationAnimation_createTotalAngle(AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior);
NullRotationAnimation* NullRotationAnimation_createQuarter(AnimationBehavior* animationBehavior);

void NullRotationAnimation_init(NullRotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior);
int32_t NullRotationAnimation_getAnimationSize(NullRotationAnimation* this);


NullRotationAnimation* NullRotationAnimation_createTotalAngle(AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        return NullRotationAnimation_new(angleInfo, CircularIndexUtil_createInstance(totalAngle / JAVA_CALL(AngleInfo_getAngleIncrementInfo(angleInfo), getAngleIncrement)), animationBehavior);
}


NullRotationAnimation* NullRotationAnimation_createQuarter(AnimationBehavior* animationBehavior) {
        return NullRotationAnimation_new(AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
}


void NullRotationAnimation_init(NullRotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
        RotationAnimation_init(&this->base, angleInfo, circularIndexUtil, animationBehavior);
}

NullRotationAnimation* NullRotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
    NullRotationAnimation* this = calloc(1, sizeof(NullRotationAnimation));
    NullRotationAnimation_init(this, angleInfo, circularIndexUtil, animationBehavior);
    return this;
}


// throws Exception
int32_t NullRotationAnimation_getAnimationSize(NullRotationAnimation* this) {
        return 0;
}

