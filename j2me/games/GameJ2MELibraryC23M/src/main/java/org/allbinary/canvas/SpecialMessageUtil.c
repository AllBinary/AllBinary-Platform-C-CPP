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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/system/Memory.h"

typedef struct SpecialMessageUtil SpecialMessageUtil;
struct SpecialMessageUtil {
    char unused;
};

static SpecialMessageUtil* SpecialMessageUtil_SINGLETON;

SpecialMessageUtil* SpecialMessageUtil_new(void);
SpecialMessageUtil* SpecialMessageUtil_getInstance(void);
const char* SpecialMessageUtil_get(SpecialMessageUtil* this);

// Static fields with runtime initializers: call this once at startup
void SpecialMessageUtil_staticInit(void) {
    SpecialMessageUtil_SINGLETON = SpecialMessageUtil_new();
}

void SpecialMessageUtil_init(SpecialMessageUtil* this) {
}

SpecialMessageUtil* SpecialMessageUtil_new(void) {
    SpecialMessageUtil* this = calloc(1, sizeof(SpecialMessageUtil));
    SpecialMessageUtil_init(this);
    return this;
}


SpecialMessageUtil* SpecialMessageUtil_getInstance(void) {
        return SpecialMessageUtil_SINGLETON;
}


const char* SpecialMessageUtil_get(SpecialMessageUtil* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, Memory_getInfo());
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, GameStatisticsFactory_toString(GameStatisticsFactory_getInstance()));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, " Option: ");
        if (Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL_AUTO_SELECT)) {
            StringMaker_append(stringBuffer, JAVA_CALL(OpenGLFeatureFactory_getInstance()->OPENGL_AUTO_SELECT, getName));
        } else {
            StringMaker_append(stringBuffer, JAVA_CALL(OpenGLFeatureFactory_getInstance()->OPENGL_MINIMUM, getName));
        }
        return StringMaker_toString(stringBuffer);
}

