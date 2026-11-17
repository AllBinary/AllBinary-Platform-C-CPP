/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct GeographicMapCellPositionAreaInterface GeographicMapCellPositionAreaInterface;
struct GeographicMapCellPositionAreaInterface {
    GeographicMapCellPosition* (*getNextSurroundingGeographicMapCellPosition)(void* this);
    BasicArrayList* (*getOccupyingGeographicMapCellPositionList)(void* this);
    BasicArrayList* (*getSurroundingGeographicMapCellPositionList)(void* this);
    void (*update)(void* this, BasicGeographicMap* geographicMapInterface);
};


