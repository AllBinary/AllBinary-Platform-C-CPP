#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H
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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Feature Feature;
typedef struct GameFeatureFactory GameFeatureFactory;
typedef struct InputFeatureFactory InputFeatureFactory;
typedef struct SensorFeatureFactory SensorFeatureFactory;
typedef struct TouchFeatureFactory TouchFeatureFactory;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct GameFeatureEvent GameFeatureEvent;
typedef struct GameFeatureEventHandler GameFeatureEventHandler;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct Features Features;
struct Features {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* list;
    BasicArrayList* defaultList;
};


Features* Features_new(void);

Features* Features_getInstance(void);

void Features_init(Features* this);

void Features_addDefault(Features* this, Feature* gameFeature);

void Features_add(Features* this, Feature* gameFeature);

void Features_removeDefault(Features* this, Feature* gameFeature);

void Features_remove(Features* this, Feature* gameFeature);


bool Features_isDefault(Features* this, Feature* gameFeature);

bool Features_isFeature(Features* this, Feature* gameFeature);

void Features_toggle(Features* this, Feature* gameFeature);
#define Features_new0 Features_new
#define Features_init0 Features_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Features_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Features_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURES_H
