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
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/mapeditor/core/TileLayer.h"
#include "org/mapeditor/core/TiledMap.h"
#include "org/allbinary/game/behavior/topview/placement/TileMapPlacementVisitor.h"

typedef struct PropsTileMapPlacementVisitor PropsTileMapPlacementVisitor;
struct PropsTileMapPlacementVisitor {
    TileMapPlacementVisitor base;
    LogUtil* logUtil;
    MyRandomFactory* randomFactory;
};


PropsTileMapPlacementVisitor* PropsTileMapPlacementVisitor_new(void);
void PropsTileMapPlacementVisitor_visit(PropsTileMapPlacementVisitor* this, TiledMap* lastMap, int32_t** mapData);
void PropsTileMapPlacementVisitor_visit2(PropsTileMapPlacementVisitor* this, int32_t** mapArray, int32_t** mapData, int32_t index, int32_t index2);

static void PropsTileMapPlacementVisitor_initFields(PropsTileMapPlacementVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    this->randomFactory = MyRandomFactory_getInstance();
}

void PropsTileMapPlacementVisitor_init(PropsTileMapPlacementVisitor* this) {
    TileMapPlacementVisitor_init(&this->base);
    PropsTileMapPlacementVisitor_initFields(this);
}

PropsTileMapPlacementVisitor* PropsTileMapPlacementVisitor_new(void) {
    PropsTileMapPlacementVisitor* this = calloc(1, sizeof(PropsTileMapPlacementVisitor));
    PropsTileMapPlacementVisitor_init(this);
    return this;
}


void PropsTileMapPlacementVisitor_visit(PropsTileMapPlacementVisitor* this, TiledMap* lastMap, int32_t** mapData) {
        int32_t layerIndex = 0;
        TileLayer* tileLayer = (((TileLayer*) TiledMap_getLayer(lastMap, layerIndex)));
        int32_t** mapArray = TileLayer_getMapArray(tileLayer);
        int32_t size = java_array_length(mapData);
        int32_t size2 = java_array_length(mapData[0]);
        for (int32_t index = 0; index < size; index++) {
            for (int32_t index2 = 0; index2 < size2; index2++) {
                if (mapArray[index][index2] == 14) {
                } else {
                    PropsTileMapPlacementVisitor_visit2(this, mapArray, mapData, index, index2);
                }
                if (index % 7 == 0) {
                    if (mapArray[index][index2] == 19) {
                        int32_t randomInt = MyRandomFactory_getAbsoluteNextIntAllowZero(this->randomFactory, 3);
                        if (randomInt == 0) {
                            mapData[index][index2] = 1;
                        } else if (randomInt == 1) {
                            mapData[index][index2] = 81;
                        } else if (randomInt == 2) {
                            mapData[index][index2] = 97;
                        }
                    } else if (mapArray[index][index2] == 17) {
                        int32_t randomInt = MyRandomFactory_getAbsoluteNextIntAllowZero(this->randomFactory, 3);
                        if (randomInt == 0) {
                            mapData[index][index2] = 17;
                        } else if (randomInt == 1) {
                            mapData[index][index2] = 81;
                        } else if (randomInt == 2) {
                            mapData[index][index2] = 97;
                        }
                    }
                }
                if (index2 % 7 == 0) {
                    if (mapArray[index][index2] == 34) {
                        int32_t randomInt = MyRandomFactory_getAbsoluteNextIntAllowZero(this->randomFactory, 4);
                        if (randomInt == 0) {
                            mapData[index][index2] = 33;
                        } else if (randomInt == 1) {
                            mapData[index][index2] = 65;
                        } else if (randomInt == 2) {
                            mapData[index][index2] = 81;
                        } else if (randomInt == 3) {
                            mapData[index][index2] = 97;
                        }
                    }
                }
            }
        }
}


void PropsTileMapPlacementVisitor_visit2(PropsTileMapPlacementVisitor* this, int32_t** mapArray, int32_t** mapData, int32_t index, int32_t index2) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        int32_t countX = 0;
        int32_t countY = 0;
        int32_t index3 = index - 1;
        for (int32_t index4 = index2 - 1; index4 > 0; index4--) {
            index3--;
            if (index3 < 0 || index4 < 0) {
                return;
            }
            if (mapArray[index3][index4] != 14 || mapData[index3][index4] != 0) {
                if (countX > 10 && countY > 10) {
                    for (int32_t index5 = index3 + 1; index5 < index - 1; index5++) {
                        for (int32_t index6 = index4 + 1; index6 < index2 - 1; index6++) {
                            if (mapArray[index5][index6] != 14 || mapData[index5][index6] != 0) {
                                return;
                            }
                        }
                    }
                    int32_t x = index - (countX / 2);
                    int32_t y = index2 - (countY / 2);
                    if (x >= 0 && y >= 0 && x < java_array_length(mapData) && y < java_array_length(mapData[0])) {
                    }
                }
                return;
            }
            countY++;
            countX++;
        }
}

