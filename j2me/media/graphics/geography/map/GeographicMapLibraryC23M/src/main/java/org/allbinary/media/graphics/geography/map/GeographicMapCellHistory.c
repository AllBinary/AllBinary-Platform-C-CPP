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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/math/BasicDecimal.h"

typedef struct GeographicMapCellHistory GeographicMapCellHistory;
struct GeographicMapCellHistory {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    LogUtil* logUtil;
    BooleanFactory* booleanFactory;
    BasicArrayList* list;
    BasicArrayList* visitedList;
    const char* MISSED_INFO;
    Animation* animation;
    MyFontProcessor* myFontProcessor;
    int32_t totalVisited;
    int32_t halfWidth;
    int32_t fontHeight;
    int32_t RED;
};

GeographicMapCellHistory** GeographicMapCellHistory_NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY;

GeographicMapCellHistory* GeographicMapCellHistory_new(void);

void GeographicMapCellHistory_init(GeographicMapCellHistory* this);
void GeographicMapCellHistory_updateMeasurement(GeographicMapCellHistory* this, Graphics* graphics);
int32_t GeographicMapCellHistory_getTotalVisited(GeographicMapCellHistory* this);
int32_t GeographicMapCellHistory_getTotalNotVisited(GeographicMapCellHistory* this);
int32_t GeographicMapCellHistory_getSize(GeographicMapCellHistory* this);
void GeographicMapCellHistory_trackAll(GeographicMapCellHistory* this, BasicArrayList* list);
void GeographicMapCellHistory_track(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* GeographicMapCellHistory_getTracked(GeographicMapCellHistory* this);
BasicArrayList* GeographicMapCellHistory_getVisited(GeographicMapCellHistory* this);
GeographicMapCellPosition* GeographicMapCellHistory_getAfterIfNotLast(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* GeographicMapCellHistory_getFirstUnvisited(GeographicMapCellHistory* this);
int32_t GeographicMapCellHistory_getFirstUnvisitedIndex(GeographicMapCellHistory* this);
BasicArrayList* GeographicMapCellHistory_getInPathButNotTracked(GeographicMapCellHistory* this, BasicArrayList* pathList);
bool GeographicMapCellHistory_isVisited(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition);
bool GeographicMapCellHistory_visit(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition);
bool GeographicMapCellHistory_isAllVisited(GeographicMapCellHistory* this);
bool GeographicMapCellHistory_isAllVisited2(GeographicMapCellHistory* this);
bool GeographicMapCellHistory_isPortionVisited(GeographicMapCellHistory* this, BasicDecimal* basicDecimal);
void GeographicMapCellHistory_reset(GeographicMapCellHistory* this);
static void GeographicMapCellHistory_paintNotVisitedRelativeToPoint(GeographicMapCellHistory* this, Graphics* graphics, AllBinaryTiledLayer* tiledLayer, GPoint* point);
void GeographicMapCellHistory_paintNotVisited(GeographicMapCellHistory* this, Graphics* graphics, BasicGeographicMap* geographicMapInterface);
void GeographicMapCellHistory_init(GeographicMapCellHistory* this);

// Static fields with runtime initializers: call this once at startup
void GeographicMapCellHistory_staticInit(void) {
    GeographicMapCellHistory_NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY = ((GeographicMapCellHistory**) java_array_new(sizeof(GeographicMapCellHistory*), 0));
}

static void GeographicMapCellHistory_initFields(GeographicMapCellHistory* this) {
    this->logUtil = LogUtil_getInstance();
    this->booleanFactory = BooleanFactory_getInstance();
    
    
    this->MISSED_INFO = "Missed";
    this->animation = TextAnimation_new(this->MISSED_INFO, AnimationBehavior_getInstance());
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->totalVisited = 0;
    this->halfWidth = 0;
    this->fontHeight = 0;
    this->RED = JAVA_CALL(BasicColorFactory_getInstance()->RED, intValue);
}


void GeographicMapCellHistory_init(GeographicMapCellHistory* this) {
    GeographicMapCellHistory_initFields(this);
        this->list = BasicArrayListD_new();
        this->visitedList = BasicArrayListD_new();
        GeographicMapCellHistory_init(this);
}

GeographicMapCellHistory* GeographicMapCellHistory_new(void) {
    GeographicMapCellHistory* this = calloc(1, sizeof(GeographicMapCellHistory));
    GeographicMapCellHistory_init(this);
    return this;
}


void GeographicMapCellHistory_updateMeasurement(GeographicMapCellHistory* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


int32_t GeographicMapCellHistory_getTotalVisited(GeographicMapCellHistory* this) {
        return this->totalVisited;
}


int32_t GeographicMapCellHistory_getTotalNotVisited(GeographicMapCellHistory* this) {
        return GeographicMapCellHistory_getSize(this) - this->totalVisited;
}


int32_t GeographicMapCellHistory_getSize(GeographicMapCellHistory* this) {
        return BasicArrayList_size(this->list);
}


void GeographicMapCellHistory_trackAll(GeographicMapCellHistory* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        BasicArrayList_ensureCapacity(this->list, size);
        BasicArrayList_ensureCapacity(this->visitedList, size);
        GeographicMapCellPosition* geographicMapCellPosition = nullptr;
        for (int32_t index = 0; index < size; index++) {
            geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(list, index));
            GeographicMapCellHistory_track(this, geographicMapCellPosition);
        }
}


void GeographicMapCellHistory_track(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition) {
        if (!BasicArrayList_contains(this->list, geographicMapCellPosition)) {
            BasicArrayList_add(this->list, geographicMapCellPosition);
            BasicArrayList_add(this->visitedList, this->booleanFactory->FALSE);
        }
}


BasicArrayList* GeographicMapCellHistory_getTracked(GeographicMapCellHistory* this) {
        return this->list;
}


BasicArrayList* GeographicMapCellHistory_getVisited(GeographicMapCellHistory* this) {
        return this->visitedList;
}


GeographicMapCellPosition* GeographicMapCellHistory_getAfterIfNotLast(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition) {
        BasicArrayList* localList = this->list;
        int32_t index = BasicArrayList_indexOf(localList, geographicMapCellPosition);
        if (BasicArrayList_size(localList) > index + 1) {
            return ((GeographicMapCellPosition*) BasicArrayList_get(localList, index + 1));
        }
        return geographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellHistory_getFirstUnvisited(GeographicMapCellHistory* this) {
        BasicArrayList* localList = this->list;
        BasicArrayList* localVisitedList = this->visitedList;
        int32_t size = BasicArrayList_size(localVisitedList);
        bool value = nullptr;
        for (int32_t index = 0; index < size; index++) {
            value = ((bool) BasicArrayList_get(this->visitedList, index));
            if (value == this->booleanFactory->FALSE) {
                return ((GeographicMapCellPosition*) BasicArrayList_get(localList, index));
            }
        }
        return ((GeographicMapCellPosition*) BasicArrayList_get(localList, 0));
}


int32_t GeographicMapCellHistory_getFirstUnvisitedIndex(GeographicMapCellHistory* this) {
        BasicArrayList* localVisitedList = this->visitedList;
        int32_t size = BasicArrayList_size(localVisitedList);
        bool value = nullptr;
        for (int32_t index = 0; index < size; index++) {
            value = ((bool) BasicArrayList_get(this->visitedList, index));
            if (value == this->booleanFactory->FALSE) {
                return index;
            }
        }
        return 0;
}


BasicArrayList* GeographicMapCellHistory_getInPathButNotTracked(GeographicMapCellHistory* this, BasicArrayList* pathList) {
        BasicArrayList* inPathButNotTrackedList = BasicArrayListD_new();
        BasicArrayList* localList = this->list;
        int32_t size = BasicArrayList_size(pathList);
        GeographicMapCellPosition* geographicMapCellPosition = nullptr;
        for (int32_t index = 0; index < size; index++) {
            geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(pathList, index));
            if (!BasicArrayList_contains(localList, geographicMapCellPosition)) {
                BasicArrayList_add(inPathButNotTrackedList, geographicMapCellPosition);
            }
        }
        return inPathButNotTrackedList;
}


bool GeographicMapCellHistory_isVisited(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition) {
        int32_t index = BasicArrayList_indexOf(this->list, geographicMapCellPosition);
        if (index != -1) {
            bool value = ((bool) BasicArrayList_get(this->visitedList, index));
            if (value == this->booleanFactory->TRUE) {
                return true;
            }
        } else {
        }
        return false;
}


bool GeographicMapCellHistory_visit(GeographicMapCellHistory* this, GeographicMapCellPosition* geographicMapCellPosition) {
        int32_t index = BasicArrayList_indexOf(this->list, geographicMapCellPosition);
        bool value = nullptr;
        if (index != -1) {
            value = ((bool) BasicArrayList_get(this->visitedList, index));
            bool TRUE = this->booleanFactory->TRUE;
            if (value != TRUE) {
                BasicArrayList_set(this->visitedList, index, TRUE);
                this->totalVisited++;
                return true;
            }
        } else {
        }
        return false;
}


// throws Exception
bool GeographicMapCellHistory_isAllVisited(GeographicMapCellHistory* this) {
        if (this->totalVisited == GeographicMapCellHistory_getSize(this) - 1) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
bool GeographicMapCellHistory_isAllVisited2(GeographicMapCellHistory* this) {
        if (this->totalVisited == GeographicMapCellHistory_getSize(this)) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
bool GeographicMapCellHistory_isPortionVisited(GeographicMapCellHistory* this, BasicDecimal* basicDecimal) {
        int32_t size = GeographicMapCellHistory_getSize(this);
        int32_t numberRequired = (size << BasicDecimal_getScaledFactor(basicDecimal)) / ((int32_t) BasicDecimal_getUnscaled(basicDecimal));
        int32_t numberNotVisited = GeographicMapCellHistory_getSize(this) - 1 - this->totalVisited;
        if (size - numberNotVisited > numberRequired) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
void GeographicMapCellHistory_reset(GeographicMapCellHistory* this) {
        BasicArrayList* localVisitedList = this->visitedList;
        bool localFalseBoolean = this->booleanFactory->FALSE;
        int32_t size = BasicArrayList_size(localVisitedList);
        for (int32_t index = size - 1; index >= 0; index--) {
            BasicArrayList_set(localVisitedList, index, localFalseBoolean);
        }
        this->totalVisited = 0;
}


static void GeographicMapCellHistory_paintNotVisitedRelativeToPoint(GeographicMapCellHistory* this, Graphics* graphics, AllBinaryTiledLayer* tiledLayer, GPoint* point) {
        int32_t x = GPoint_getX(point) - AllBinaryTiledLayer_getXP(tiledLayer);
        int32_t y = GPoint_getY(point) - AllBinaryTiledLayer_getYP(tiledLayer);
        if (this->halfWidth == 0) {
            this->halfWidth = (JAVA_CALL(Graphics_getFont(graphics), stringWidth, this->MISSED_INFO) >> 1);
        }
        int32_t height = 2 * this->fontHeight;
        Animation_paintXY(this->animation, graphics, x + this->halfWidth, y + (height));
}


void GeographicMapCellHistory_paintNotVisited(GeographicMapCellHistory* this, Graphics* graphics, BasicGeographicMap* geographicMapInterface) {
        JAVA_TRY {
            MyFontProcessor_process(this->myFontProcessor, graphics);
            Graphics_setColor(graphics, this->RED);
            BasicArrayList* localVisitedList = this->visitedList;
            int32_t size = BasicArrayList_size(localVisitedList);
            GeographicMapCellPosition* geographicMapCellPosition = nullptr;
            bool isCellVisitedBoolean = nullptr;
            for (int32_t index = size; --index >= 0; ) {
                geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(this->list, index));
                isCellVisitedBoolean = ((bool) BasicArrayList_get(localVisitedList, index));
                if (!Boolean_booleanValue(isCellVisitedBoolean)) {
                    GeographicMapCellHistory_paintNotVisitedRelativeToPoint(this, graphics, BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), GeographicMapCellPosition_getPoint(geographicMapCellPosition));
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "paintNotVisited", e);
        } JAVA_END_TRY;
}


void GeographicMapCellHistory_init(GeographicMapCellHistory* this) {
        BasicArrayList_clear(this->list);
        BasicArrayList_clear(this->visitedList);
        this->totalVisited = 0;
}

