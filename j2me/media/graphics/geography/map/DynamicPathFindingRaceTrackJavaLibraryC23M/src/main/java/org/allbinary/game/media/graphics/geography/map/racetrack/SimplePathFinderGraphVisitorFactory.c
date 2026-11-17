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
// package org.allbinary.game.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h"

typedef struct SimplePathFinderGraphVisitorFactory SimplePathFinderGraphVisitorFactory;
struct SimplePathFinderGraphVisitorFactory {
    PathFinderGraphVisitorFactoryBase base;
    int32_t edgeMinimum;
    int32_t minPathWeight;
    int32_t maxPathWeight;
};


SimplePathFinderGraphVisitorFactory* SimplePathFinderGraphVisitorFactory_new(int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

void SimplePathFinderGraphVisitorFactory_init(SimplePathFinderGraphVisitorFactory* this, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);
PathFinderGraphVisitorBase* SimplePathFinderGraphVisitorFactory_getInstance(SimplePathFinderGraphVisitorFactory* this, BasicGeographicMap* geographicMapInterface);

static void SimplePathFinderGraphVisitorFactory_initFields(SimplePathFinderGraphVisitorFactory* this) {
    
    
    
}


void SimplePathFinderGraphVisitorFactory_init(SimplePathFinderGraphVisitorFactory* this, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    PathFinderGraphVisitorFactoryBase_init(&this->base);
    SimplePathFinderGraphVisitorFactory_initFields(this);
        this->edgeMinimum = edgeMinimum;
        this->minPathWeight = minPathWeight;
        this->maxPathWeight = maxPathWeight;
}

SimplePathFinderGraphVisitorFactory* SimplePathFinderGraphVisitorFactory_new(int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    SimplePathFinderGraphVisitorFactory* this = calloc(1, sizeof(SimplePathFinderGraphVisitorFactory));
    SimplePathFinderGraphVisitorFactory_init(this, edgeMinimum, minPathWeight, maxPathWeight);
    return this;
}


PathFinderGraphVisitorBase* SimplePathFinderGraphVisitorFactory_getInstance(SimplePathFinderGraphVisitorFactory* this, BasicGeographicMap* geographicMapInterface) {
        return BasePathFinderGraphVisitor_new(geographicMapInterface, this->edgeMinimum, this->minPathWeight, this->maxPathWeight);
}

