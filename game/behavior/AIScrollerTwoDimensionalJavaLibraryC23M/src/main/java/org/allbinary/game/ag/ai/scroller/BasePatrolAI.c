// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/BasicDecimal.h")
#include "org/allbinary/game/ag/ai/scroller/BasicDecimal.h"
#endif
#if __has_include("javax/microedition/lcdui/BasicDecimal.h")
#include "javax/microedition/lcdui/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/ai/BasicDecimal.h")
#include "org/allbinary/game/ai/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/input/BasicDecimal.h")
#include "org/allbinary/game/input/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicDecimal.h")
#include "org/allbinary/game/physics/velocity/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/layer/BasicDecimal.h")
#include "org/allbinary/layer/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/util/BasicDecimal.h")
#include "org/allbinary/util/BasicDecimal.h"
#endif


int32_t BasePatrolAI_MAX_DISTANCE;
int32_t BasePatrolAI_DIRECTION_ARRAY;
int32_t BasePatrolAI_FIRING_DISTANCE;
int32_t BasePatrolAI_SPEED;



static void BasePatrolAI_updateTotalDistance(BasePatrolAI* this);

static void BasePatrolAI_changeDirectionIfReachedPacingAreaMax(BasePatrolAI* this);



void BasePatrolAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasePatrolAI_MAX_DISTANCE = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2);
    BasePatrolAI_DIRECTION_ARRAY = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 3);
    BasePatrolAI_FIRING_DISTANCE = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 4);
    BasePatrolAI_SPEED = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 5);
}

void BasePatrolAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasePatrolAI", "BasicAI");
    java_register_method("BasePatrolAI", "update", (void*) BasePatrolAI_update);
    java_register_method("BasePatrolAI", "updateTotalDistance", (void*) BasePatrolAI_updateTotalDistance);
    java_register_method("BasePatrolAI", "changeDirectionIfReachedPacingAreaMax", (void*) BasePatrolAI_changeDirectionIfReachedPacingAreaMax);
    java_register_method("BasePatrolAI", "nextDirection", (void*) BasePatrolAI_nextDirection);
    java_register_method("BasePatrolAI", "disable", (void*) BasePatrolAI_disable);
}

static void BasePatrolAI_initFields(BasePatrolAI* this) {
    
    
    this->xTotalDistance = 0;
    this->lastKeyDirection = (Canvas_staticInit(), Canvas_RIGHT);
    this->keyDirection = (Canvas_staticInit(), Canvas_RIGHT);
}


void BasePatrolAI_init(BasePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    BasePatrolAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        BasePatrolAI_initFields(this);
        this->maxDistance = ((int32_t) Hashtable_get(hashtable, (BasePatrolAI_staticInit(), BasePatrolAI_MAX_DISTANCE)));
        this->currentDistance = Integer_intValue(this->maxDistance);
}

BasePatrolAI* BasePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    BasePatrolAI* this = java_object_alloc(sizeof(BasePatrolAI), "BasePatrolAI");
    BasePatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


void BasePatrolAI_update(BasePatrolAI* this) {
        BasePatrolAI_updateTotalDistance(this);
        BasePatrolAI_changeDirectionIfReachedPacingAreaMax(this);
}


static void BasePatrolAI_updateTotalDistance(BasePatrolAI* this) {
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
        BasicVelocityProperties* velocityProperties = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        this->xTotalDistance += BasicDecimal_getScaled(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties));
}


static void BasePatrolAI_changeDirectionIfReachedPacingAreaMax(BasePatrolAI* this) {
        MathUtil* mathUtil = MathUtil_getInstance();
        int32_t totalDistance = MathUtil_abs(mathUtil, this->xTotalDistance);
        if (totalDistance > this->currentDistance) {
            BasePatrolAI_nextDirection(this);
        }
}


void BasePatrolAI_nextDirection(BasePatrolAI* this) {
        if (this->lastKeyDirection == (Canvas_staticInit(), Canvas_LEFT)) {
            this->keyDirection = (Canvas_staticInit(), Canvas_RIGHT);
            this->lastKeyDirection = this->keyDirection;
            this->xTotalDistance = 0;
        } else if (this->lastKeyDirection == (Canvas_staticInit(), Canvas_RIGHT)) {
            this->keyDirection = (Canvas_staticInit(), Canvas_LEFT);
            this->lastKeyDirection = this->keyDirection;
            this->xTotalDistance = 0;
        }
}


void BasePatrolAI_disable(BasePatrolAI* this) {
}

