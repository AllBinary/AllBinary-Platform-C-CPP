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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/PathData.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"

typedef struct StaticPathGenerator StaticPathGenerator;
struct StaticPathGenerator {
    PathGeneratorInterface PathGeneratorInterface_interface;
    LogUtil* logUtil;
    BasicArrayListUtil* basicArrayListUtil;
};


StaticPathGenerator* StaticPathGenerator_new(void);

void StaticPathGenerator_init(StaticPathGenerator* this);
void StaticPathGenerator_init(StaticPathGenerator* this, Any* geographicMapInterface, int32_t totalPaths);
static BasicArrayList* StaticPathGenerator_getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(StaticPathGenerator* this, BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory, BasicArrayList* pathList);
BasicArrayList* StaticPathGenerator_createList(StaticPathGenerator* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths);

static void StaticPathGenerator_initFields(StaticPathGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void StaticPathGenerator_init(StaticPathGenerator* this) {
    StaticPathGenerator_initFields(this);
        PreLogUtil_put("Using Static Path Finding", this, CommonStrings_getInstance()->CONSTRUCTOR);
}

StaticPathGenerator* StaticPathGenerator_new(void) {
    StaticPathGenerator* this = calloc(1, sizeof(StaticPathGenerator));
    StaticPathGenerator_init(this);
    return this;
}


// throws Exception
void StaticPathGenerator_init(StaticPathGenerator* this, Any* geographicMapInterface, int32_t totalPaths) {
}


// throws Exception
static BasicArrayList* StaticPathGenerator_getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(StaticPathGenerator* this, BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory, BasicArrayList* pathList) {
        BasicArrayList* list = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(pathList);
        CellPosition* basicGeographicMapCellPosition = nullptr;
        GeographicMapCellPosition* geographicMapCellPosition = nullptr;
        for (int32_t index = 0; index < size; index++) {
            basicGeographicMapCellPosition = ((CellPosition*) BasicArrayList_get(pathList, index));
            geographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, CellPosition_getColumn(basicGeographicMapCellPosition), CellPosition_getRow(basicGeographicMapCellPosition));
            BasicArrayList_add(list, geographicMapCellPosition);
        }
        return list;
}


// throws Exception
BasicArrayList* StaticPathGenerator_createList(StaticPathGenerator* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            PathCacheFactory* pathCacheFactory = PathCacheFactory_getInstance();
            int32_t mapIdInteger = JAVA_CALL(Any_getAllBinaryTiledLayer(geographicMapInterface), getDataId);
            BasicArrayList* list = PathCacheFactory_getOrCreate(pathCacheFactory, mapIdInteger);
            if (list == BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
                list = BasicArrayListD_new();
                SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
                BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = Any_getGeographicMapCellPositionFactory(geographicMapInterface);
                int32_t id = PathData_getInstance()->OFFSET + Integer_intValue(mapIdInteger);
                BasicArrayList* basicList = PathCacheFactory_getOrCreate(pathCacheFactory, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id));
                int32_t size = BasicArrayList_size(basicList);
                BasicArrayList* pathList = nullptr;
                for (int32_t index = 0; index < size; index++) {
                    pathList = StaticPathGenerator_getGeographicMapCellPositionListFromBasicGeographicMapCellPositionList(this, geographicMapCellPositionFactory, ((BasicArrayList*) BasicArrayList_get(basicList, index)));
                    BasicArrayList_add(list, pathList);
                }
                PathCacheFactory_add(pathCacheFactory, mapIdInteger, list);
                PathCacheFactory_remove(pathCacheFactory, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id));
            }
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Using Cached Path(s): "), append, StringUtil_toString(StringUtil_getInstance(), list)), toString), this, commonStrings->GET_INSTANCE);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            return BasicArrayListD_new();
        } JAVA_END_TRY;
}

