// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/HorizontalScreenPatrolAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/audio/PlayerQueue.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/GameInfo.h")
#include "org/allbinary/game/ag/ai/scroller/GameInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/GameInfo.h")
#include "javax/microedition/lcdui/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/ai/GameInfo.h")
#include "org/allbinary/game/ai/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/GameInfo.h")
#include "org/allbinary/game/input/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/layer/GameInfo.h")
#include "org/allbinary/game/layer/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/rand/GameInfo.h")
#include "org/allbinary/game/rand/GameInfo.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/GameInfo.h")
#include "org/allbinary/graphics/displayable/GameInfo.h"
#endif
#if __has_include("org/allbinary/layer/GameInfo.h")
#include "org/allbinary/layer/GameInfo.h"
#endif
#if __has_include("org/allbinary/layer/GameInfo.h")
#include "org/allbinary/layer/GameInfo.h"
#endif
#if __has_include("org/allbinary/logic/math/GameInfo.h")
#include "org/allbinary/logic/math/GameInfo.h"
#endif
#if __has_include("org/allbinary/media/audio/GameInfo.h")
#include "org/allbinary/media/audio/GameInfo.h"
#endif
#if __has_include("org/allbinary/media/audio/GameInfo.h")
#include "org/allbinary/media/audio/GameInfo.h"
#endif
#if __has_include("org/allbinary/media/audio/GameInfo.h")
#include "org/allbinary/media/audio/GameInfo.h"
#endif
#if __has_include("org/allbinary/time/GameInfo.h")
#include "org/allbinary/time/GameInfo.h"
#endif
#if __has_include("org/allbinary/util/GameInfo.h")
#include "org/allbinary/util/GameInfo.h"
#endif


int32_t HorizontalScreenPatrolAI_SOUND;




void HorizontalScreenPatrolAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HorizontalScreenPatrolAI_SOUND = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 433);
}

void HorizontalScreenPatrolAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HorizontalScreenPatrolAI", "BasicAI");
    java_register_method("HorizontalScreenPatrolAI", "processAI", (void*) HorizontalScreenPatrolAI_processAI);
    java_register_method("HorizontalScreenPatrolAI", "nextDirection", (void*) HorizontalScreenPatrolAI_nextDirection);
}

static void HorizontalScreenPatrolAI_initFields(HorizontalScreenPatrolAI* this) {
    this->keyDirection = (Canvas_staticInit(), Canvas_LEFT);
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->firingX = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
    this->firedIndex = 0;
    this->MAX_FIRE = 28;
    this->timeDelayHelper = TimeDelayHelper_new(240);
    this->secondaryPlayerQueue = SecondaryPlayerQueueFactory_getInstance();
    
}


void HorizontalScreenPatrolAI_init(HorizontalScreenPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontalScreenPatrolAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        HorizontalScreenPatrolAI_initFields(this);
        this->sound = ((Sound*) Hashtable_get(hashtable, (HorizontalScreenPatrolAI_staticInit(), HorizontalScreenPatrolAI_SOUND)));
        if (this->sound == nullptr) {
            java_throw(java_exception_new("Exception", "No Sound Provided!!"));
        }
}

HorizontalScreenPatrolAI* HorizontalScreenPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontalScreenPatrolAI* this = java_object_alloc(sizeof(HorizontalScreenPatrolAI), "HorizontalScreenPatrolAI");
    HorizontalScreenPatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void HorizontalScreenPatrolAI_processAI(HorizontalScreenPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasicAI_processKeyAI((&this->base), this->keyDirection);
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
            AllBinaryLayer* layerInterface = BasicAI_getOwnerLayerInterface(this);
            int32_t currentOwnerLayerX = AllBinaryLayer_getXP(layerInterface);
            if (currentOwnerLayerX < -AllBinaryLayer_getWidth(layerInterface)) {
                int32_t y = MyRandomFactory_getAbsoluteNextIntAllowZero(MyRandomFactory_getInstance(), 50);
                AllBinaryLayer_setPosition(layerInterface, DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton) + AllBinaryLayer_getWidth(layerInterface) + 50, y, AllBinaryLayer_getZP(layerInterface));
                this->firedIndex = 0;
                this->firingX = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton) + MyRandomFactory_getNextInt(MyRandomFactory_getInstance(), DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton));
                PlayerQueue_add(this->secondaryPlayerQueue, this->sound);
            }
            if (currentOwnerLayerX < this->firingX && currentOwnerLayerX > -AllBinaryLayer_getWidth(layerInterface)) {
                BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
                AllBinaryGameLayerManager* gameLayerManager = ((AllBinaryGameLayerManager*) allBinaryLayerManager);
                int32_t FIRE = (GameInfo_getCurrentLevel(AllBinaryGameLayerManager_getGameInfo(gameLayerManager)) + 12) >> 2;
                if (FIRE > this->MAX_FIRE) {
                    FIRE = this->MAX_FIRE;
                }
                if (this->firedIndex > FIRE) {
                    this->firedIndex = 0;
                    this->firingX = (Integer_staticInit(), Integer_MIN_VALUE);
                }
                this->firedIndex++;
            }
        }
}


void HorizontalScreenPatrolAI_nextDirection(HorizontalScreenPatrolAI* this) {
}

