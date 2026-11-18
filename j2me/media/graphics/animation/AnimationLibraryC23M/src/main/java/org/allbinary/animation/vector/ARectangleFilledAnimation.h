#ifndef ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H
#define ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H
// Generated Code Do Not Modify
// package org.allbinary.animation.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct RectangleFilledAnimation RectangleFilledAnimation;
typedef struct Graphics Graphics;
typedef struct BasicColorFactory BasicColorFactory;
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"

typedef struct ARectangleFilledAnimation ARectangleFilledAnimation;
struct ARectangleFilledAnimation {
    RectangleFilledAnimation base;
    int32_t x;
    int32_t y;
};


ARectangleFilledAnimation* ARectangleFilledAnimation_new(void);

void ARectangleFilledAnimation_init(ARectangleFilledAnimation* this);

void ARectangleFilledAnimation_nextFrame(ARectangleFilledAnimation* this);

void ARectangleFilledAnimation_paintXY(ARectangleFilledAnimation* this, Graphics* graphics, int32_t unusedX, int32_t unusedY);
#define ARectangleFilledAnimation_new0 ARectangleFilledAnimation_new
#define ARectangleFilledAnimation_init0 ARectangleFilledAnimation_init
#ifndef ARectangleFilledAnimation_setWidth
#define ARectangleFilledAnimation_setWidth RectangleFilledAnimation_setWidth
#endif
#ifndef ARectangleFilledAnimation_setHeight
#define ARectangleFilledAnimation_setHeight RectangleFilledAnimation_setHeight
#endif
#ifndef ARectangleFilledAnimation_getBasicColorP
#define ARectangleFilledAnimation_getBasicColorP RectangleFilledAnimation_getBasicColorP
#endif
#ifndef ARectangleFilledAnimation_setBasicColorP
#define ARectangleFilledAnimation_setBasicColorP RectangleFilledAnimation_setBasicColorP
#endif
#ifndef ARectangleFilledAnimation_setAlpha
#define ARectangleFilledAnimation_setAlpha Animation_setAlpha
#endif
#ifndef ARectangleFilledAnimation_paintThreedXYZ
#define ARectangleFilledAnimation_paintThreedXYZ Animation_paintThreedXYZ
#endif
#ifndef ARectangleFilledAnimation_isThreed
#define ARectangleFilledAnimation_isThreed Animation_isThreed
#endif
#ifndef ARectangleFilledAnimation_getBasicColorP
#define ARectangleFilledAnimation_getBasicColorP Animation_getBasicColorP
#endif
#ifndef ARectangleFilledAnimation_setBasicColorP
#define ARectangleFilledAnimation_setBasicColorP Animation_setBasicColorP
#endif
#ifndef ARectangleFilledAnimation_setBackgroundBasicColorP
#define ARectangleFilledAnimation_setBackgroundBasicColorP Animation_setBackgroundBasicColorP
#endif
#ifndef ARectangleFilledAnimation_getChangeBasicColor
#define ARectangleFilledAnimation_getChangeBasicColor Animation_getChangeBasicColor
#endif
#ifndef ARectangleFilledAnimation_changeBasicColor
#define ARectangleFilledAnimation_changeBasicColor Animation_changeBasicColor
#endif
#ifndef ARectangleFilledAnimation_getChangeColor
#define ARectangleFilledAnimation_getChangeColor Animation_getChangeColor
#endif
#ifndef ARectangleFilledAnimation_getColor
#define ARectangleFilledAnimation_getColor Animation_getColor
#endif
#ifndef ARectangleFilledAnimation_setScale
#define ARectangleFilledAnimation_setScale Animation_setScale
#endif
#ifndef ARectangleFilledAnimation_setMaxScale
#define ARectangleFilledAnimation_setMaxScale Animation_setMaxScale
#endif
#ifndef ARectangleFilledAnimation_set
#define ARectangleFilledAnimation_set Animation_set
#endif
#ifndef ARectangleFilledAnimation_setDx
#define ARectangleFilledAnimation_setDx Animation_setDx
#endif
#ifndef ARectangleFilledAnimation_getDx
#define ARectangleFilledAnimation_getDx Animation_getDx
#endif
#ifndef ARectangleFilledAnimation_setDy
#define ARectangleFilledAnimation_setDy Animation_setDy
#endif
#ifndef ARectangleFilledAnimation_getDy
#define ARectangleFilledAnimation_getDy Animation_getDy
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ARectangleFilledAnimation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ARectangleFilledAnimation_register(void);


#endif // ORG_ALLBINARY_ANIMATION_VECTOR_ARECTANGLEFILLEDANIMATION_H
