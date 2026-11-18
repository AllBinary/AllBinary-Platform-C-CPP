#ifndef ORG_ALLBINARY_MATH_ANGLEFACTORY_H
#define ORG_ALLBINARY_MATH_ANGLEFACTORY_H
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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Angle Angle;
typedef struct NamedAngle NamedAngle;
typedef struct FrameUtil FrameUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonPhoneStrings CommonPhoneStrings;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"
#if __has_include("org/allbinary/math/Angle.h")
#include "org/allbinary/math/Angle.h"
#endif
#if __has_include("org/allbinary/math/NamedAngle.h")
#include "org/allbinary/math/NamedAngle.h"
#endif
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif

typedef struct AngleFactory AngleFactory;
struct AngleFactory {
    LogUtil* logUtil;
    int16_t TOTAL_ANGLE;
    int16_t QUARTER_TOTAL_ANGLE;
    Angle** angleArray;
    int16_t NEGATIVE_ONE;
    NamedAngle* NOT_ANGLE;
    NamedAngle* DOWN;
    NamedAngle* UP;
    NamedAngle* LEFT;
    NamedAngle* RIGHT;
    FrameUtil* frameUtil;
};


AngleFactory* AngleFactory_new(void);

AngleFactory* AngleFactory_getInstance(void);

void AngleFactory_init(AngleFactory* this);

Angle* AngleFactory_getAt(AngleFactory* this, int32_t index);

Angle* AngleFactory_getClosestDirection(AngleFactory* this, int32_t angle);

Angle* AngleFactory_getGeneralDirection(AngleFactory* this);

void AngleFactory_main(const char** args);
#define AngleFactory_new0 AngleFactory_new
#define AngleFactory_init0 AngleFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AngleFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AngleFactory_register(void);


#endif // ORG_ALLBINARY_MATH_ANGLEFACTORY_H
