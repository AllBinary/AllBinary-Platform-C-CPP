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
// package org.allbinary.animation.resource

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h"
#include "org/allbinary/game/resource/RectangleResourceFactoryInterface.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/animation/resource/ResourceAnimationInterfaceFactoryInterface.h"

typedef struct FeatureResourceAnimationInterfaceFactoryInterface FeatureResourceAnimationInterfaceFactoryInterface;
struct FeatureResourceAnimationInterfaceFactoryInterface {
    ABHashtable* (*getHashtable)(void* this);
};


