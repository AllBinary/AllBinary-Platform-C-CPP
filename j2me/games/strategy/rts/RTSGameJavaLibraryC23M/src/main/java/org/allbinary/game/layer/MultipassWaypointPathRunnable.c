/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/thread/ARunnable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/layer/WaypointPathRunnableBase.h"

typedef struct MultipassWaypointPathRunnable MultipassWaypointPathRunnable;
struct MultipassWaypointPathRunnable {
    WaypointPathRunnableBase base;
    LogUtil* logUtil;
    BasicArrayListUtil* basicArrayListUtil;
    MultipassState* multipassState;
    bool done;
    BasicArrayList* list;
    Any* pathFindingInfo;
    Runnable* FIRST_RUNNABLE;
    Runnable* SECOND_RUNNABLE;
    Runnable* END_RUNNABLE;
    Runnable* ALREADY_ENDED_RUNNABLE;
    Runnable* currentPassRunnable;
};


MultipassWaypointPathRunnable* MultipassWaypointPathRunnable_new(void);

void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this);
void MultipassWaypointPathRunnable_setRunning(MultipassWaypointPathRunnable* this, bool isRunning);
void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this);
static void MultipassWaypointPathRunnable_reset2(MultipassWaypointPathRunnable* this);
static void MultipassWaypointPathRunnable_finish(MultipassWaypointPathRunnable* this);
bool MultipassWaypointPathRunnable_isDone(MultipassWaypointPathRunnable* this);
void MultipassWaypointPathRunnable_reset(MultipassWaypointPathRunnable* this);
static void MultipassWaypointPathRunnable_processFirstRunnable(MultipassWaypointPathRunnable* this);
static void MultipassWaypointPathRunnable_processSecondRunnable(MultipassWaypointPathRunnable* this);
static void MultipassWaypointPathRunnable_processEndRunnable(MultipassWaypointPathRunnable* this);

static void MultipassWaypointPathRunnable_initFields(MultipassWaypointPathRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->multipassState = MultipassState_new();
    this->done = false;
    this->list = BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
    this->pathFindingInfo = NullUtil_getInstance()->NULL_OBJECT;
    this->FIRST_RUNNABLE = FirstRunnable_new(this);
    this->SECOND_RUNNABLE = SecondRunnable_new(this);
    this->END_RUNNABLE = EndRunnable_new(this);
    this->ALREADY_ENDED_RUNNABLE = ARunnable_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        

    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this) {
            java_throw(java_exception_new("RuntimeException", ""));
    }
#endif
;
    this->currentPassRunnable = this->FIRST_RUNNABLE;
}


void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this) {
    WaypointPathRunnableBase_init(&this->base);
    MultipassWaypointPathRunnable_initFields(this);
}

MultipassWaypointPathRunnable* MultipassWaypointPathRunnable_new(void) {
    MultipassWaypointPathRunnable* this = calloc(1, sizeof(MultipassWaypointPathRunnable));
    MultipassWaypointPathRunnable_init(this);
    return this;
}


void MultipassWaypointPathRunnable_setRunning(MultipassWaypointPathRunnable* this, bool isRunning) {
        this->runningP = isRunning;
        if (this->runningP) {
            MultipassWaypointPathRunnable_reset(this);
            this->done = false;
        }
}


void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            Runnable_run(this->currentPassRunnable);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            MultipassWaypointPathRunnable_setRunning(this, false);
        } JAVA_END_TRY;
}


static void MultipassWaypointPathRunnable_reset2(MultipassWaypointPathRunnable* this) {
        this->multipassState->step = 0;
        this->multipassState->iteration = 0;
        this->multipassState->iteration2 = 0;
        this->pathFindingInfo = NullUtil_getInstance()->NULL_OBJECT;
}


static void MultipassWaypointPathRunnable_finish(MultipassWaypointPathRunnable* this) {
        MultipassWaypointPathRunnable_reset2(this);
        this->currentPassRunnable = this->ALREADY_ENDED_RUNNABLE;
        this->done = true;
}


bool MultipassWaypointPathRunnable_isDone(MultipassWaypointPathRunnable* this) {
        return this->done;
}


void MultipassWaypointPathRunnable_reset(MultipassWaypointPathRunnable* this) {
        MultipassWaypointPathRunnable_reset2(this);
        this->currentPassRunnable = this->FIRST_RUNNABLE;
        this->done = false;
}


static void MultipassWaypointPathRunnable_processFirstRunnable(MultipassWaypointPathRunnable* this) {
        JAVA_TRY {
            JAVA_CALL(JAVA_CALL(this->pathFindingLayer, getWaypointRunnableLogHelper), start, this->pathFindingLayer);
            MultipassWaypointPathRunnable_reset2(this);
            GeographicMapCellPosition* geographicMapCellPosition = JAVA_CALL(this->pathFindingLayer, getCurrentGeographicMapCellPosition);
            if (geographicMapCellPosition == nullptr) {
                java_throw(java_exception_new("Exception", "Should never be running here"));
            }
            this->pathFindingInfo = JAVA_CALL(JAVA_CALL(JAVA_CALL(this->targetPathFindingLayer, getWaypointBehavior), getWaypoint), getPathFindingInfo, geographicMapCellPosition);
            PathFindingInfo* localPathFindingInfo = ((PathFindingInfo*) this->pathFindingInfo);
            this->list = JAVA_CALL(JAVA_CALL(JAVA_CALL(this->targetPathFindingLayer, getWaypointBehavior), getWaypoint), getPathsList, geographicMapCellPosition, localPathFindingInfo, this->multipassState);
            if (this->list != BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
                Runnable_run(this->END_RUNNABLE);
            } else {
                this->currentPassRunnable = this->SECOND_RUNNABLE;
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            MultipassWaypointPathRunnable_setRunning(this, false);
            MultipassWaypointPathRunnable_finish(this);
        } JAVA_END_TRY;
}


static void MultipassWaypointPathRunnable_processSecondRunnable(MultipassWaypointPathRunnable* this) {
        JAVA_TRY {
            GeographicMapCellPosition* geographicMapCellPosition = JAVA_CALL(this->pathFindingLayer, getCurrentGeographicMapCellPosition);
            PathFindingInfo* localPathFindingInfo = ((PathFindingInfo*) this->pathFindingInfo);
            this->list = JAVA_CALL(JAVA_CALL(JAVA_CALL(this->targetPathFindingLayer, getWaypointBehavior), getWaypoint), getPathsList, geographicMapCellPosition, localPathFindingInfo, this->multipassState);
            if (this->list != BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
                Runnable_run(this->END_RUNNABLE);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            MultipassWaypointPathRunnable_setRunning(this, false);
            MultipassWaypointPathRunnable_finish(this);
        } JAVA_END_TRY;
}


static void MultipassWaypointPathRunnable_processEndRunnable(MultipassWaypointPathRunnable* this) {
        JAVA_TRY {
            WaypointBehaviorBase* waypointBehavior = JAVA_CALL(this->pathFindingLayer, getWaypointBehavior);
            WaypointBehaviorBase_setWaypointPathsList(waypointBehavior, this->list);
            JAVA_CALL(JAVA_CALL(this->pathFindingLayer, getWaypointRunnableLogHelper), end, this->pathFindingLayer);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            MultipassWaypointPathRunnable_setRunning(this, false);
        } JAVA_END_TRY;
        MultipassWaypointPathRunnable_finish(this);
}

typedef struct FirstRunnable FirstRunnable;
struct FirstRunnable {
    ARunnable base;
    MultipassWaypointPathRunnable* multipassWaypointPathRunnable;
};


FirstRunnable* FirstRunnable_new(MultipassWaypointPathRunnable* multipassWaypointPathRunnable);
    
    void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this, MultipassWaypointPathRunnable* multipassWaypointPathRunnable);
    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this);

static void FirstRunnable_initFields(FirstRunnable* this) {
        
}
    

    void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this, MultipassWaypointPathRunnable* multipassWaypointPathRunnable) {
    ARunnable_init(&this->base);
        MultipassWaypointPathRunnable_initFields(this);
            this->multipassWaypointPathRunnable = multipassWaypointPathRunnable;
    }

    MultipassWaypointPathRunnable* MultipassWaypointPathRunnable_new(MultipassWaypointPathRunnable* multipassWaypointPathRunnable) {
        MultipassWaypointPathRunnable* this = calloc(1, sizeof(MultipassWaypointPathRunnable));
        MultipassWaypointPathRunnable_init(this, multipassWaypointPathRunnable);
        return this;
    }
    

    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this) {
            MultipassWaypointPathRunnable_processFirstRunnable(this->multipassWaypointPathRunnable);
    }

//    private boolean first = true;
typedef struct SecondRunnable SecondRunnable;
struct SecondRunnable {
    ARunnable base;
    MultipassWaypointPathRunnable* multipassWaypointPathRunnable;
};


SecondRunnable* SecondRunnable_new(MultipassWaypointPathRunnable* multipassWaypointPathRunnable);
    
    void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this, MultipassWaypointPathRunnable* multipassWaypointPathRunnable);
    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this);

static void SecondRunnable_initFields(SecondRunnable* this) {
        
}
    

    void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this, MultipassWaypointPathRunnable* multipassWaypointPathRunnable) {
    ARunnable_init(&this->base);
        MultipassWaypointPathRunnable_initFields(this);
            this->multipassWaypointPathRunnable = multipassWaypointPathRunnable;
    }

    MultipassWaypointPathRunnable* MultipassWaypointPathRunnable_new(MultipassWaypointPathRunnable* multipassWaypointPathRunnable) {
        MultipassWaypointPathRunnable* this = calloc(1, sizeof(MultipassWaypointPathRunnable));
        MultipassWaypointPathRunnable_init(this, multipassWaypointPathRunnable);
        return this;
    }
    

    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this) {
            MultipassWaypointPathRunnable_processSecondRunnable(this->multipassWaypointPathRunnable);
    }

typedef struct EndRunnable EndRunnable;
struct EndRunnable {
    ARunnable base;
    MultipassWaypointPathRunnable* multipassWaypointPathRunnable;
};


EndRunnable* EndRunnable_new(MultipassWaypointPathRunnable* multipassWaypointPathRunnable);
    
    void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this, MultipassWaypointPathRunnable* multipassWaypointPathRunnable);
    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this);

static void EndRunnable_initFields(EndRunnable* this) {
        
}
    

    void MultipassWaypointPathRunnable_init(MultipassWaypointPathRunnable* this, MultipassWaypointPathRunnable* multipassWaypointPathRunnable) {
    ARunnable_init(&this->base);
        MultipassWaypointPathRunnable_initFields(this);
            this->multipassWaypointPathRunnable = multipassWaypointPathRunnable;
    }

    MultipassWaypointPathRunnable* MultipassWaypointPathRunnable_new(MultipassWaypointPathRunnable* multipassWaypointPathRunnable) {
        MultipassWaypointPathRunnable* this = calloc(1, sizeof(MultipassWaypointPathRunnable));
        MultipassWaypointPathRunnable_init(this, multipassWaypointPathRunnable);
        return this;
    }
    

    void MultipassWaypointPathRunnable_run(MultipassWaypointPathRunnable* this) {
            MultipassWaypointPathRunnable_processEndRunnable(this->multipassWaypointPathRunnable);
    }

