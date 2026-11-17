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
#include "org/allbinary/game/configuration/feature/GameFeatureControlledInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct ResourceRelativeRelationshipFactoryInterface ResourceRelativeRelationshipFactoryInterface;
struct ResourceRelativeRelationshipFactoryInterface {
    BasicArrayList* (*getResourceRelativeRelationshipList)(void* this, const char* resource);
    void (*addResourceRelativeRelationship)(void* this, const char* resource, RelativeRelationship* relativeRelationship);
};


