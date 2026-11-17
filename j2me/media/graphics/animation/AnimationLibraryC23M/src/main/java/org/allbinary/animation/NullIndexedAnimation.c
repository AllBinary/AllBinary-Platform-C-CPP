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
#include "org/allbinary/animation/IndexedAnimation.h"

typedef struct NullIndexedAnimation NullIndexedAnimation;
struct NullIndexedAnimation {
    IndexedAnimation base;
};


NullIndexedAnimation* NullIndexedAnimation_new(AnimationBehavior* animationBehavior);

void NullIndexedAnimation_init(NullIndexedAnimation* this, AnimationBehavior* animationBehavior);
int32_t NullIndexedAnimation_getAnimationSize(NullIndexedAnimation* this);


void NullIndexedAnimation_init(NullIndexedAnimation* this, AnimationBehavior* animationBehavior) {
        IndexedAnimation_init(&this->base, animationBehavior);
}

NullIndexedAnimation* NullIndexedAnimation_new(AnimationBehavior* animationBehavior) {
    NullIndexedAnimation* this = calloc(1, sizeof(NullIndexedAnimation));
    NullIndexedAnimation_init(this, animationBehavior);
    return this;
}


// throws Exception
int32_t NullIndexedAnimation_getAnimationSize(NullIndexedAnimation* this) {
        return 0;
}

