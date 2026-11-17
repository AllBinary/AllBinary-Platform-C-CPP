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

typedef struct PathFinderGraphHackVisitorFactory PathFinderGraphHackVisitorFactory;
struct PathFinderGraphHackVisitorFactory {
    PathFinderGraphVisitorFactoryBase base;
    int32_t edgeMinimum;
    int32_t minPathWeight;
    int32_t maxPathWeight;
};


PathFinderGraphHackVisitorFactory* PathFinderGraphHackVisitorFactory_new(int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

void PathFinderGraphHackVisitorFactory_init(PathFinderGraphHackVisitorFactory* this, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);
PathFinderGraphVisitorBase* PathFinderGraphHackVisitorFactory_getInstance(PathFinderGraphHackVisitorFactory* this, BasicGeographicMap* geographicMapInterface);

static void PathFinderGraphHackVisitorFactory_initFields(PathFinderGraphHackVisitorFactory* this) {
    
    
    
}


void PathFinderGraphHackVisitorFactory_init(PathFinderGraphHackVisitorFactory* this, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    PathFinderGraphVisitorFactoryBase_init(&this->base);
    PathFinderGraphHackVisitorFactory_initFields(this);
        this->edgeMinimum = edgeMinimum;
        this->minPathWeight = minPathWeight;
        this->maxPathWeight = maxPathWeight;
}

PathFinderGraphHackVisitorFactory* PathFinderGraphHackVisitorFactory_new(int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    PathFinderGraphHackVisitorFactory* this = calloc(1, sizeof(PathFinderGraphHackVisitorFactory));
    PathFinderGraphHackVisitorFactory_init(this, edgeMinimum, minPathWeight, maxPathWeight);
    return this;
}


PathFinderGraphVisitorBase* PathFinderGraphHackVisitorFactory_getInstance(PathFinderGraphHackVisitorFactory* this, BasicGeographicMap* geographicMapInterface) {
        return PathFinderGraphHackVisitor_new(geographicMapInterface, this->edgeMinimum, this->minPathWeight, this->maxPathWeight);
}

