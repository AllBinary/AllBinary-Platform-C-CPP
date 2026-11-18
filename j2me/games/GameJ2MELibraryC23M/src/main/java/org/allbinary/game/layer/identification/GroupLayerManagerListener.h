#ifndef ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H
#define ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H
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
// package org.allbinary.game.layer.identification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Group Group;
typedef struct GroupInterfaceCompositeInterface GroupInterfaceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct LayerManagerEvent LayerManagerEvent;
typedef struct LayerManagerEventHandler LayerManagerEventHandler;
typedef struct LayerManagerEventListener LayerManagerEventListener;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "org/allbinary/layer/event/LayerManagerEventListener.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct GroupLayerManagerListener GroupLayerManagerListener;
struct GroupLayerManagerListener {
    LayerManagerEventListener base;
    LogUtil* logUtil;
    BasicArrayList* list;
};


GroupLayerManagerListener* GroupLayerManagerListener_new(void);

GroupLayerManagerListener* GroupLayerManagerListener_getInstance(void);

void GroupLayerManagerListener_init(GroupLayerManagerListener* this);

void GroupLayerManagerListener_clear(GroupLayerManagerListener* this);

int32_t GroupLayerManagerListener_getGroupSizeFromInterface(GroupLayerManagerListener* this, GroupInterfaceCompositeInterface* groupInterfaceCompositeInterface);

int32_t GroupLayerManagerListener_getGroupSize(GroupLayerManagerListener* this, Group* groupInterface);

BasicArrayList* GroupLayerManagerListener_getList(GroupLayerManagerListener* this, Group* groupInterface);



bool GroupLayerManagerListener_areAllOtherGroupsEmpty(GroupLayerManagerListener* this, Group* groupInterface);


bool GroupLayerManagerListener_areAllOtherGroupsLessThan(GroupLayerManagerListener* this, BasicArrayList* excludeGroupList, int32_t maxSize);

void GroupLayerManagerListener_initMethod(GroupLayerManagerListener* this, int32_t total);

void GroupLayerManagerListener_onEvent(GroupLayerManagerListener* this, AllBinaryEventObject* eventObject);

void GroupLayerManagerListener_onCreateLayerManagerEvent(GroupLayerManagerListener* this, LayerManagerEvent* layerManagerEvent);

void GroupLayerManagerListener_onDeleteLayerManagerEvent(GroupLayerManagerListener* this, LayerManagerEvent* layerManagerEvent);

void GroupLayerManagerListener_log(GroupLayerManagerListener* this);
#define GroupLayerManagerListener_new0 GroupLayerManagerListener_new
#define GroupLayerManagerListener_init0 GroupLayerManagerListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GroupLayerManagerListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GroupLayerManagerListener_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_IDENTIFICATION_GROUPLAYERMANAGERLISTENER_H
