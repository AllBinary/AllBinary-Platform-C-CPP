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
#include "org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h"

typedef struct AllAnimationsEverywhereTileMapPlacementVisitor AllAnimationsEverywhereTileMapPlacementVisitor;
struct AllAnimationsEverywhereTileMapPlacementVisitor {
    TileMapPlacementVisitor base;
};


AllAnimationsEverywhereTileMapPlacementVisitor* AllAnimationsEverywhereTileMapPlacementVisitor_new(void);
void AllAnimationsEverywhereTileMapPlacementVisitor_visit(AllAnimationsEverywhereTileMapPlacementVisitor* this, TiledMap* lastMap, int32_t** mapData);

void AllAnimationsEverywhereTileMapPlacementVisitor_init(AllAnimationsEverywhereTileMapPlacementVisitor* this) {
    TileMapPlacementVisitor_init(&this->base);
}

AllAnimationsEverywhereTileMapPlacementVisitor* AllAnimationsEverywhereTileMapPlacementVisitor_new(void) {
    AllAnimationsEverywhereTileMapPlacementVisitor* this = calloc(1, sizeof(AllAnimationsEverywhereTileMapPlacementVisitor));
    AllAnimationsEverywhereTileMapPlacementVisitor_init(this);
    return this;
}


void AllAnimationsEverywhereTileMapPlacementVisitor_visit(AllAnimationsEverywhereTileMapPlacementVisitor* this, TiledMap* lastMap, int32_t** mapData) {
        int32_t size = java_array_length(mapData);
        int32_t size2 = java_array_length(mapData[0]) - 7;
        for (int32_t index = 0; index < size; index++) {
            for (int32_t index2 = 0; index2 < size2; index2 += 7) {
                mapData[index][index2] = 1;
                mapData[index][index2 + 1] = 17;
                mapData[index][index2 + 2] = 33;
                mapData[index][index2 + 3] = 49;
                mapData[index][index2 + 4] = 65;
                mapData[index][index2 + 5] = 81;
                mapData[index][index2 + 6] = 97;
            }
        }
}

