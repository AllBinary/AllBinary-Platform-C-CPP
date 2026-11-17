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
// package org.allbinary.game.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct FeatureResourceInitializationUtil FeatureResourceInitializationUtil;
struct FeatureResourceInitializationUtil {
    LogUtil* logUtil;
};

static FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_instance;

FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_new(void);
FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_getInstance(void);
void FeatureResourceInitializationUtil_init(FeatureResourceInitializationUtil* this, int32_t level);

// Static fields with runtime initializers: call this once at startup
void FeatureResourceInitializationUtil_staticInit(void) {
    FeatureResourceInitializationUtil_instance = FeatureResourceInitializationUtil_new();
}

static void FeatureResourceInitializationUtil_initFields(FeatureResourceInitializationUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void FeatureResourceInitializationUtil_init(FeatureResourceInitializationUtil* this) {
    FeatureResourceInitializationUtil_initFields(this);
}

FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_new(void) {
    FeatureResourceInitializationUtil* this = calloc(1, sizeof(FeatureResourceInitializationUtil));
    FeatureResourceInitializationUtil_init(this);
    return this;
}


FeatureResourceInitializationUtil* FeatureResourceInitializationUtil_getInstance(void) {
        return FeatureResourceInitializationUtil_instance;
}


// throws Exception
void FeatureResourceInitializationUtil_init(FeatureResourceInitializationUtil* this, int32_t level) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->INIT);
        FeaturedResourceFactory* featuredResourceFactory = FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance();
        FeaturedResourceFactory_init(featuredResourceFactory, level);
        FeaturedResourceRelativeRelationshipFactory_init(FeaturedResourceRelativeRelationshipFactory_getInstance(), level);
}

