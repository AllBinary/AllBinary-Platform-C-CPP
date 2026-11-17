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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistoryProgressBase.h"

typedef struct GeographicMapCellHistoryProgress GeographicMapCellHistoryProgress;
struct GeographicMapCellHistoryProgress {
    GeographicMapCellHistoryProgressBase base;
    int32_t* totalVisitedArray;
    GeographicMapCellHistory** geographicMapCellHistoryArray;
};


GeographicMapCellHistoryProgress* GeographicMapCellHistoryProgress_new(GeographicMapCellHistory** geographicMapCellHistoryArray);

void GeographicMapCellHistoryProgress_init(GeographicMapCellHistoryProgress* this, GeographicMapCellHistory** geographicMapCellHistoryArray);
void GeographicMapCellHistoryProgress_init(GeographicMapCellHistoryProgress* this);
bool GeographicMapCellHistoryProgress_isAnyProgress(GeographicMapCellHistoryProgress* this);

static void GeographicMapCellHistoryProgress_initFields(GeographicMapCellHistoryProgress* this) {
    this->totalVisitedArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->geographicMapCellHistoryArray = GeographicMapCellHistory_NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY;
}


void GeographicMapCellHistoryProgress_init(GeographicMapCellHistoryProgress* this, GeographicMapCellHistory** geographicMapCellHistoryArray) {
    GeographicMapCellHistoryProgressBase_init(&this->base);
    GeographicMapCellHistoryProgress_initFields(this);
        this->geographicMapCellHistoryArray = geographicMapCellHistoryArray;
        GeographicMapCellHistoryProgress_init(this);
}

GeographicMapCellHistoryProgress* GeographicMapCellHistoryProgress_new(GeographicMapCellHistory** geographicMapCellHistoryArray) {
    GeographicMapCellHistoryProgress* this = calloc(1, sizeof(GeographicMapCellHistoryProgress));
    GeographicMapCellHistoryProgress_init(this, geographicMapCellHistoryArray);
    return this;
}


void GeographicMapCellHistoryProgress_init(GeographicMapCellHistoryProgress* this) {
        this->totalVisitedArray = ((int32_t*) java_array_new(sizeof(int32_t), java_array_length(this->geographicMapCellHistoryArray)));
}


bool GeographicMapCellHistoryProgress_isAnyProgress(GeographicMapCellHistoryProgress* this) {
        bool isProgressing = false;
        int32_t size = java_array_length(this->geographicMapCellHistoryArray);
        int32_t currentTotalVisited = 0;
        int32_t totalVisited = 0;
        for (int32_t index = 0; index < size; index++) {
            totalVisited = JAVA_CALL(this->geographicMapCellHistoryArray[index], getTotalVisited);
            currentTotalVisited = this->totalVisitedArray[index];
            if (currentTotalVisited < totalVisited) {
                isProgressing = true;
                this->totalVisitedArray[index] = totalVisited;
            }
        }
        return isProgressing;
}

