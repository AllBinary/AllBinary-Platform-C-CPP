// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/TimedFireAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/game/ag/ai/scroller/TimeFiredInterface.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/ag/ai/scroller/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/GameTickTimeDelayHelper.h")
#include "javax/microedition/lcdui/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/ai/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/ai/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/input/GameTickTimeDelayHelper.h")
#include "org/allbinary/game/input/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/layer/GameTickTimeDelayHelper.h")
#include "org/allbinary/layer/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/math/GameTickTimeDelayHelper.h")
#include "org/allbinary/logic/math/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif


int32_t TimedFireAI_TIME;



void TimedFireAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TimedFireAI_TIME = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 1);
}

void TimedFireAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimedFireAI", "BasicAI");
    java_register_method("TimedFireAI", "processAI", (void*) TimedFireAI_processAI);
}

static void TimedFireAI_initFields(TimedFireAI* this) {
    this->maxFireDelayTimeHelper = TimeDelayHelper_new(0);
    
}


void TimedFireAI_init(TimedFireAI* this, int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    TimedFireAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        TimedFireAI_initFields(this);
        this->delay = delay;
}

TimedFireAI* TimedFireAI_new(int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    TimedFireAI* this = java_object_alloc(sizeof(TimedFireAI), "TimedFireAI");
    TimedFireAI_init(this, delay, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void TimedFireAI_processAI(TimedFireAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        TimeFiredInterface* timeFiredInterface = ((TimeFiredInterface*) BasicAI_getOwnerLayerInterface(this));
        if (TimeDelayHelper_isTime(this->maxFireDelayTimeHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime) && TimeFiredInterface_getLastFireTime(timeFiredInterface) + this->maxFireDelayTimeHelper->delay < TimeDelayHelper_getStartTime(this->maxFireDelayTimeHelper)) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
            this->maxFireDelayTimeHelper->delay = this->delay;
        }
}

