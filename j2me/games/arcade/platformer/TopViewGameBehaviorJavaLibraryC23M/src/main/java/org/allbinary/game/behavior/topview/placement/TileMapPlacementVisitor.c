/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.game.behavior.topview.placement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/mapeditor/core/TiledMap.h"

typedef struct TileMapPlacementVisitor TileMapPlacementVisitor;
struct TileMapPlacementVisitor {
    char unused;
};


TileMapPlacementVisitor* TileMapPlacementVisitor_new(void);
void TileMapPlacementVisitor_visit(TileMapPlacementVisitor* this, TiledMap* lastMap, int32_t** mapData);

void TileMapPlacementVisitor_init(TileMapPlacementVisitor* this) {
}

TileMapPlacementVisitor* TileMapPlacementVisitor_new(void) {
    TileMapPlacementVisitor* this = calloc(1, sizeof(TileMapPlacementVisitor));
    TileMapPlacementVisitor_init(this);
    return this;
}


void TileMapPlacementVisitor_visit(TileMapPlacementVisitor* this, TiledMap* lastMap, int32_t** mapData) {
}

