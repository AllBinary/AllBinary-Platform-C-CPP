// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/direction/DirectionalCompositeInterface.h"
#include "org/allbinary/direction/DirectionalInterface.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h")
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/game/tracking/TrackingEventHandler.h")
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#endif
#if __has_include("org/allbinary/game/tracking/TrackingEventHandler.h")
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/game/tracking/TrackingEventHandler.h")
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h")
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#endif
#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/direction/DirectionFactory.h")
#include "org/allbinary/direction/DirectionFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





static void DiveAndDirectionalTrackingAI_initMethod(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_target(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void DiveAndDirectionalTrackingAI_verticalTargeting(DiveAndDirectionalTrackingAI* this, int32_t x);

static void DiveAndDirectionalTrackingAI_horizontalTargeting(DiveAndDirectionalTrackingAI* this, int32_t y);

static void DiveAndDirectionalTrackingAI_setDive(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_moveRight(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_moveLeft(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_moveDown(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_moveUp(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_dive(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_attack(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_drop(DiveAndDirectionalTrackingAI* this);

static bool DiveAndDirectionalTrackingAI_isBeyondTarget(DiveAndDirectionalTrackingAI* this);








void DiveAndDirectionalTrackingAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DiveAndDirectionalTrackingAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DiveAndDirectionalTrackingAI", "BasicAI");
    java_register_method("DiveAndDirectionalTrackingAI", "processAI", (void*) DiveAndDirectionalTrackingAI_processAI);
    java_register_method("DiveAndDirectionalTrackingAI", "init", (void*) DiveAndDirectionalTrackingAI_initMethod);
    java_register_method("DiveAndDirectionalTrackingAI", "target", (void*) DiveAndDirectionalTrackingAI_target);
    java_register_method("DiveAndDirectionalTrackingAI", "verticalTargeting", (void*) DiveAndDirectionalTrackingAI_verticalTargeting);
    java_register_method("DiveAndDirectionalTrackingAI", "horizontalTargeting", (void*) DiveAndDirectionalTrackingAI_horizontalTargeting);
    java_register_method("DiveAndDirectionalTrackingAI", "setDive", (void*) DiveAndDirectionalTrackingAI_setDive);
    java_register_method("DiveAndDirectionalTrackingAI", "moveRight", (void*) DiveAndDirectionalTrackingAI_moveRight);
    java_register_method("DiveAndDirectionalTrackingAI", "moveLeft", (void*) DiveAndDirectionalTrackingAI_moveLeft);
    java_register_method("DiveAndDirectionalTrackingAI", "moveDown", (void*) DiveAndDirectionalTrackingAI_moveDown);
    java_register_method("DiveAndDirectionalTrackingAI", "moveUp", (void*) DiveAndDirectionalTrackingAI_moveUp);
    java_register_method("DiveAndDirectionalTrackingAI", "dive", (void*) DiveAndDirectionalTrackingAI_dive);
    java_register_method("DiveAndDirectionalTrackingAI", "attack", (void*) DiveAndDirectionalTrackingAI_attack);
    java_register_method("DiveAndDirectionalTrackingAI", "drop", (void*) DiveAndDirectionalTrackingAI_drop);
    java_register_method("DiveAndDirectionalTrackingAI", "isBeyondTarget", (void*) DiveAndDirectionalTrackingAI_isBeyondTarget);
    java_register_method("DiveAndDirectionalTrackingAI", "onEvent", (void*) DiveAndDirectionalTrackingAI_onEvent);
    java_register_method("DiveAndDirectionalTrackingAI", "onMovement", (void*) DiveAndDirectionalTrackingAI_onMovement);
    java_register_method("DiveAndDirectionalTrackingAI", "onDestroyed", (void*) DiveAndDirectionalTrackingAI_onDestroyed);
    java_register_method("DiveAndDirectionalTrackingAI", "setLastDirection", (void*) DiveAndDirectionalTrackingAI_setLastDirection);
    java_register_method("DiveAndDirectionalTrackingAI", "setLastKey", (void*) DiveAndDirectionalTrackingAI_setLastKey);
    java_register_method("DiveAndDirectionalTrackingAI", "getLastDirection", (void*) DiveAndDirectionalTrackingAI_getLastDirection);
    java_register_method("DiveAndDirectionalTrackingAI", "toString", (void*) DiveAndDirectionalTrackingAI_toString);
}

static void DiveAndDirectionalTrackingAI_initFields(DiveAndDirectionalTrackingAI* this) {
    this->mathUtil = MathUtil_getInstance();
    this->directionFactory = DirectionFactory_getInstance();
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(500);
    this->list = BasicArrayListD_new();
    
    
    this->directionToKeyMap = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ (Canvas_staticInit(), Canvas_LEFT), (Canvas_staticInit(), Canvas_DOWN), (Canvas_staticInit(), Canvas_UP), (Canvas_staticInit(), Canvas_RIGHT) }) / sizeof(int32_t), (int32_t[]){ (Canvas_staticInit(), Canvas_LEFT), (Canvas_staticInit(), Canvas_DOWN), (Canvas_staticInit(), Canvas_UP), (Canvas_staticInit(), Canvas_RIGHT) }));
    this->initialDropped = false;
    this->diveP = false;
    this->directionOfTarget = Direction_getInstance(0);
    this->MIN_DISTANCE = 40;
    this->lastTrackingLayerInterface = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
    
    
    this->lastDirection = DirectionFactory_getInstance()->NO_DIRECTION;
}


void DiveAndDirectionalTrackingAI_init(DiveAndDirectionalTrackingAI* this, AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor) {
    DiveAndDirectionalTrackingAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        DiveAndDirectionalTrackingAI_initFields(this);
        this->aiVistor = visitor;
        this->artificialIntelligenceInterface = artificialIntelligenceInterface;
        DirectionalCompositeInterface* directionalCompositeInterface = ((DirectionalCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        this->directionalInterface = DirectionalCompositeInterface_getDirectionalInterface(directionalCompositeInterface);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        this->velocityInterface = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        BasicEventHandler_addListenerInterface(DestroyedEventHandler_getInstance(), this);
        DiveAndDirectionalTrackingAI_initMethod(this);
}

DiveAndDirectionalTrackingAI* DiveAndDirectionalTrackingAI_new(AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor) {
    DiveAndDirectionalTrackingAI* this = java_object_alloc(sizeof(DiveAndDirectionalTrackingAI), "DiveAndDirectionalTrackingAI");
    DiveAndDirectionalTrackingAI_init(this, ownerLayerInterface, artificialIntelligenceInterface, gameInput, visitor);
    return this;
}


// throws Exception
void DiveAndDirectionalTrackingAI_processAI(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (DiveAndDirectionalTrackingAI_isBeyondTarget(this)) {
            DiveAndDirectionalTrackingAI_initMethod(this);
            BasicVelocityProperties_zero(this->velocityInterface);
        }
        if (!this->diveP) {
            DiveAndDirectionalTrackingAI_target(this, allBinaryLayerManager);
        } else {
            DiveAndDirectionalTrackingAI_dive(this);
            DiveAndDirectionalTrackingAI_attack(this);
        }
        BasicArrayList_clear(this->list);
}


static void DiveAndDirectionalTrackingAI_initMethod(DiveAndDirectionalTrackingAI* this) {
        this->diveP = false;
        this->directionOfTarget = DirectionFactory_getInstance()->NOT_BORDERED_WITH;
        BasicEventHandler_addListenerInterface(TrackingEventHandler_getInstance(), this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_target(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (BasicArrayList_size(this->list) == 0) {
            return;
        }
        TrackingEvent* lastTrackingEvent = ((TrackingEvent*) BasicArrayList_removeAt(this->list, 0));
        this->lastTrackingLayerInterface = TrackingEvent_getLayerInterface(lastTrackingEvent);
        AllBinaryLayer* layerInterface = this->lastTrackingLayerInterface;
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        Group** groupArray = AllBinaryLayer_getGroupInterface(layerInterface);
        Group** ownerGroupArray = AllBinaryLayer_getGroupInterface(ownerLayerInterface);
        if (groupArray == ownerGroupArray) {
            return;
        }
        int32_t x = AllBinaryLayer_getXP(this->lastTrackingLayerInterface);
        int32_t y = AllBinaryLayer_getYP(this->lastTrackingLayerInterface);
        int32_t yDistance = AllBinaryLayer_getYP(ownerLayerInterface) - y - AllBinaryLayer_getHeight(ownerLayerInterface);
        int32_t xDistance = AllBinaryLayer_getXP(ownerLayerInterface) - x - AllBinaryLayer_getWidth(ownerLayerInterface);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (MathUtil_abs(this->mathUtil, yDistance) > MathUtil_abs(this->mathUtil, xDistance)) {
            if (yDistance > this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->UP;
            } else if (yDistance < -this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->DOWN;
            }
        } else {
            if (xDistance > this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->LEFT;
            } else if (xDistance < -this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->RIGHT;
            }
        }
        if (!this->initialDropped && this->directionOfTarget != directionFactory->NOT_BORDERED_WITH) {
            DiveAndDirectionalTrackingAI_drop(this);
        }
        if (this->initialDropped) {
            if (this->directionOfTarget == directionFactory->UP || this->directionOfTarget == directionFactory->DOWN) {
                DiveAndDirectionalTrackingAI_verticalTargeting(this, x);
            } else if (this->directionOfTarget == directionFactory->LEFT || this->directionOfTarget == directionFactory->RIGHT) {
                DiveAndDirectionalTrackingAI_horizontalTargeting(this, y);
            } else {
                ArtificialIntelligenceInterface_processAI(this->artificialIntelligenceInterface, allBinaryLayerManager);
            }
        }
}


// throws Exception
static void DiveAndDirectionalTrackingAI_verticalTargeting(DiveAndDirectionalTrackingAI* this, int32_t x) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        if (AllBinaryLayer_getXP(ownerLayerInterface) < x) {
            DiveAndDirectionalTrackingAI_moveRight(this);
        }
        if (AllBinaryLayer_getXP(ownerLayerInterface) > x) {
            DiveAndDirectionalTrackingAI_moveLeft(this);
        }
        if (AllBinaryLayer_getXP(ownerLayerInterface) > x - 3 && AllBinaryLayer_getXP(ownerLayerInterface) < x + 3) {
            DiveAndDirectionalTrackingAI_setDive(this);
        }
}


// throws Exception
static void DiveAndDirectionalTrackingAI_horizontalTargeting(DiveAndDirectionalTrackingAI* this, int32_t y) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        if (AllBinaryLayer_getYP(ownerLayerInterface) < y) {
            DiveAndDirectionalTrackingAI_moveDown(this);
        }
        if (AllBinaryLayer_getYP(ownerLayerInterface) > y) {
            DiveAndDirectionalTrackingAI_moveUp(this);
        }
        if (AllBinaryLayer_getYP(ownerLayerInterface) > y - 3 && AllBinaryLayer_getYP(ownerLayerInterface) < y + 3) {
            DiveAndDirectionalTrackingAI_setDive(this);
        }
}


static void DiveAndDirectionalTrackingAI_setDive(DiveAndDirectionalTrackingAI* this) {
        this->diveP = true;
        BasicVelocityProperties_zero(this->velocityInterface);
        BasicEventHandler_removeListener(TrackingEventHandler_getInstance(), this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveRight(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->RIGHT);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveLeft(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->LEFT);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveDown(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->DOWN);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveUp(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->UP);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_dive(DiveAndDirectionalTrackingAI* this) {
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->directionOfTarget);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_attack(DiveAndDirectionalTrackingAI* this) {
        BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
}


// throws Exception
static void DiveAndDirectionalTrackingAI_drop(DiveAndDirectionalTrackingAI* this) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
            this->initialDropped = true;
            Visitor_visit(this->aiVistor, this);
        }
}


static bool DiveAndDirectionalTrackingAI_isBeyondTarget(DiveAndDirectionalTrackingAI* this) {
        if (this->directionOfTarget == this->directionFactory->DOWN) {
            if (AllBinaryLayer_getYP(BasicAI_getOwnerLayerInterface(this)) > AllBinaryLayer_getYP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else if (this->directionOfTarget == this->directionFactory->UP) {
            if (AllBinaryLayer_getYP(BasicAI_getOwnerLayerInterface(this)) < AllBinaryLayer_getYP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else if (this->directionOfTarget == this->directionFactory->RIGHT) {
            if (AllBinaryLayer_getXP(BasicAI_getOwnerLayerInterface(this)) > AllBinaryLayer_getXP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else if (this->directionOfTarget == this->directionFactory->LEFT) {
            if (AllBinaryLayer_getXP(BasicAI_getOwnerLayerInterface(this)) < AllBinaryLayer_getXP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
}


void DiveAndDirectionalTrackingAI_onEvent(DiveAndDirectionalTrackingAI* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void DiveAndDirectionalTrackingAI_onMovement(DiveAndDirectionalTrackingAI* this, TrackingEvent* trackingEvent) {
        BasicArrayList_add(this->list, trackingEvent);
}


void DiveAndDirectionalTrackingAI_onDestroyed(DiveAndDirectionalTrackingAI* this, DestroyedEvent* destroyedEvent) {
        if (BasicAI_getOwnerLayerInterface(this) == DestroyedEvent_getLayerInterface(destroyedEvent)) {
            BasicEventHandler_removeListener(TrackingEventHandler_getInstance(), this);
            DestroyedEventHandler_removeListener(DestroyedEventHandler_getInstance(), this);
        }
}


void DiveAndDirectionalTrackingAI_setLastDirection(DiveAndDirectionalTrackingAI* this, Direction* lastDirection) {
        this->lastDirection = lastDirection;
        int32_t value = Direction_getValue(DiveAndDirectionalTrackingAI_getLastDirection(this));
        if (value < 4) {
            BasicAI_setLastKey((&this->base), this->directionToKeyMap[value]);
        }
}


void DiveAndDirectionalTrackingAI_setLastKey(DiveAndDirectionalTrackingAI* this, int32_t lastKey) {
        BasicAI_setLastKey((&this->base), lastKey);
        if (BasicAI_getLastKey(this) == (Canvas_staticInit(), Canvas_LEFT)) {
            this->lastDirection = DirectionFactory_getInstance()->LEFT;
        } else if (BasicAI_getLastKey(this) == (Canvas_staticInit(), Canvas_DOWN)) {
            this->lastDirection = DirectionFactory_getInstance()->DOWN;
        } else if (BasicAI_getLastKey(this) == (Canvas_staticInit(), Canvas_UP)) {
            this->lastDirection = DirectionFactory_getInstance()->UP;
        } else if (BasicAI_getLastKey(this) == (Canvas_staticInit(), Canvas_RIGHT)) {
            this->lastDirection = DirectionFactory_getInstance()->RIGHT;
        }
}


Direction* DiveAndDirectionalTrackingAI_getLastDirection(DiveAndDirectionalTrackingAI* this) {
        return this->lastDirection;
}


const char* DiveAndDirectionalTrackingAI_toString(DiveAndDirectionalTrackingAI* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicAI_toString((&this->base)));
        StringMaker_append(stringBuffer, " LastDirection: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), DiveAndDirectionalTrackingAI_getLastDirection(this)));
        return java_string_of(stringBuffer);
}

