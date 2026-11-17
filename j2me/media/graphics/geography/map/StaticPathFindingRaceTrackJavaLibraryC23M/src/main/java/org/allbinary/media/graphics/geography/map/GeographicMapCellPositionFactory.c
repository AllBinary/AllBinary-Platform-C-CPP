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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"

typedef struct GeographicMapCellPositionFactory GeographicMapCellPositionFactory;
struct GeographicMapCellPositionFactory {
    GeographicMapCellPositionBaseFactory base;
    LogUtil* logUtil;
};

static ABHashtable* GeographicMapCellPositionFactory_hashtable;

GeographicMapCellPositionFactory* GeographicMapCellPositionFactory_new(void);
BasicGeographicMapCellPositionFactory* GeographicMapCellPositionFactory_getInstance(GeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface);
ABHashtable* GeographicMapCellPositionFactory_getHashtable(void);

// Static fields with runtime initializers: call this once at startup
void GeographicMapCellPositionFactory_staticInit(void) {
    GeographicMapCellPositionFactory_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

static void GeographicMapCellPositionFactory_initFields(GeographicMapCellPositionFactory* this) {
    this->logUtil = LogUtil_getInstance();
}

void GeographicMapCellPositionFactory_init(GeographicMapCellPositionFactory* this) {
    GeographicMapCellPositionBaseFactory_init(&this->base);
    GeographicMapCellPositionFactory_initFields(this);
}

GeographicMapCellPositionFactory* GeographicMapCellPositionFactory_new(void) {
    GeographicMapCellPositionFactory* this = calloc(1, sizeof(GeographicMapCellPositionFactory));
    GeographicMapCellPositionFactory_init(this);
    return this;
}


// throws Exception
BasicGeographicMapCellPositionFactory* GeographicMapCellPositionFactory_getInstance(GeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        Any* geographicMapCellPositionFactoryCanBeNull = JAVA_CALL(GeographicMapCellPositionFactory_hashtable, get, AllBinaryTiledLayer_getDataId(allBinaryTiledLayer));
        if (geographicMapCellPositionFactoryCanBeNull == nullptr) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Creating GeographicMapCellPositionFactory for TileLayer: "), appendint, ((int32_t) JAVA_CALL(AllBinaryTiledLayer_getDataId(allBinaryTiledLayer), intValue))), toString), this, commonStrings->GET_INSTANCE);
            geographicMapCellPositionFactoryCanBeNull = BasicGeographicMapCellPositionFactory_new(geographicMapInterface);
            JAVA_CALL(GeographicMapCellPositionFactory_hashtable, put, AllBinaryTiledLayer_getDataId(allBinaryTiledLayer), geographicMapCellPositionFactoryCanBeNull);
            return ((BasicGeographicMapCellPositionFactory*) geographicMapCellPositionFactoryCanBeNull);
        } else {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Reusing GeographicMapCellPositionFactory for TileLayer: "), appendint, ((int32_t) JAVA_CALL(AllBinaryTiledLayer_getDataId(allBinaryTiledLayer), intValue))), toString), this, commonStrings->GET_INSTANCE);
            return ((BasicGeographicMapCellPositionFactory*) geographicMapCellPositionFactoryCanBeNull);
        }
}


ABHashtable* GeographicMapCellPositionFactory_getHashtable(void) {
        return GeographicMapCellPositionFactory_hashtable;
}

