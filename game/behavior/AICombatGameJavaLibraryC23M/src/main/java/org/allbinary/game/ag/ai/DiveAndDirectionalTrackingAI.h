#ifndef ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H
#define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H
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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Canvas Canvas;
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct Direction Direction;
typedef struct DirectionFactory DirectionFactory;
typedef struct DirectionalCompositeInterface DirectionalCompositeInterface;
typedef struct DirectionalInterface DirectionalInterface;
typedef struct BasicAI BasicAI;
typedef struct DestroyedEvent DestroyedEvent;
typedef struct DestroyedEventHandler DestroyedEventHandler;
typedef struct DestroyedEventListenerInterface DestroyedEventListenerInterface;
typedef struct Group Group;
typedef struct GameInput GameInput;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct TrackingEvent TrackingEvent;
typedef struct TrackingEventHandler TrackingEventHandler;
typedef struct TrackingEventListenerInterface TrackingEventListenerInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct MathUtil MathUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct Visitor Visitor;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif
#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionalInterface.h")
#include "org/allbinary/direction/DirectionalInterface.h"
#endif
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h"
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif
#if __has_include("org/allbinary/logic/util/visitor/Visitor.h")
#include "org/allbinary/logic/util/visitor/Visitor.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct DiveAndDirectionalTrackingAI DiveAndDirectionalTrackingAI;
struct DiveAndDirectionalTrackingAI {
    BasicAI base;
    TrackingEventListenerInterface TrackingEventListenerInterface_interface;
    DestroyedEventListenerInterface DestroyedEventListenerInterface_interface;
    MathUtil* mathUtil;
    DirectionFactory* directionFactory;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    TimeDelayHelper* timeDelayHelper;
    BasicArrayList* list;
    DirectionalInterface* directionalInterface;
    BasicVelocityProperties* velocityInterface;
    int32_t* directionToKeyMap;
    bool initialDropped;
    bool diveP;
    Direction* directionOfTarget;
    int32_t MIN_DISTANCE;
    AllBinaryLayer* lastTrackingLayerInterface;
    ArtificialIntelligenceInterface* artificialIntelligenceInterface;
    Visitor* aiVistor;
    Direction* lastDirection;
};


DiveAndDirectionalTrackingAI* DiveAndDirectionalTrackingAI_new(AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor);

void DiveAndDirectionalTrackingAI_init(DiveAndDirectionalTrackingAI* this, AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor);

void DiveAndDirectionalTrackingAI_processAI(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager);














void DiveAndDirectionalTrackingAI_onEvent(DiveAndDirectionalTrackingAI* this, AllBinaryEventObject* eventObject);

void DiveAndDirectionalTrackingAI_onMovement(DiveAndDirectionalTrackingAI* this, TrackingEvent* trackingEvent);

void DiveAndDirectionalTrackingAI_onDestroyed(DiveAndDirectionalTrackingAI* this, DestroyedEvent* destroyedEvent);

void DiveAndDirectionalTrackingAI_setLastDirection(DiveAndDirectionalTrackingAI* this, Direction* lastDirection);

void DiveAndDirectionalTrackingAI_setLastKey(DiveAndDirectionalTrackingAI* this, int32_t lastKey);

Direction* DiveAndDirectionalTrackingAI_getLastDirection(DiveAndDirectionalTrackingAI* this);

const char* DiveAndDirectionalTrackingAI_toString(DiveAndDirectionalTrackingAI* this);
#define DiveAndDirectionalTrackingAI_new4 DiveAndDirectionalTrackingAI_new
#define DiveAndDirectionalTrackingAI_init4 DiveAndDirectionalTrackingAI_init
#ifndef DiveAndDirectionalTrackingAI_processKeyAI
#define DiveAndDirectionalTrackingAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef DiveAndDirectionalTrackingAI_getLastKey
#define DiveAndDirectionalTrackingAI_getLastKey BasicAI_getLastKey
#endif
#ifndef DiveAndDirectionalTrackingAI_getOwnerLayerInterface
#define DiveAndDirectionalTrackingAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef DiveAndDirectionalTrackingAI_getGameInput
#define DiveAndDirectionalTrackingAI_getGameInput BasicAI_getGameInput
#endif
#ifndef DiveAndDirectionalTrackingAI_getName
#define DiveAndDirectionalTrackingAI_getName BasicAI_getName
#endif
#ifndef DiveAndDirectionalTrackingAI_getSourceId
#define DiveAndDirectionalTrackingAI_getSourceId BasicAI_getSourceId
#endif
#ifndef DiveAndDirectionalTrackingAI_getInstance
#define DiveAndDirectionalTrackingAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef DiveAndDirectionalTrackingAI_getId
#define DiveAndDirectionalTrackingAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DiveAndDirectionalTrackingAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DiveAndDirectionalTrackingAI_register(void);

#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAI_H
