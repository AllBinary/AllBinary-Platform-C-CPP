// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/RandomPatrolAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif




static void RandomPatrolAI_updateRandomDistance(RandomPatrolAI* this);



void RandomPatrolAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RandomPatrolAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RandomPatrolAI", "BasePatrolAI");
    java_register_method("RandomPatrolAI", "updateRandomDistance", (void*) RandomPatrolAI_updateRandomDistance);
    java_register_method("RandomPatrolAI", "processAI", (void*) RandomPatrolAI_processAI);
    java_register_method("RandomPatrolAI", "nextDirection", (void*) RandomPatrolAI_nextDirection);
}

static void RandomPatrolAI_initFields(RandomPatrolAI* this) {
    this->changedDirection = true;
}


void RandomPatrolAI_init(RandomPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    RandomPatrolAI_register();
        BasePatrolAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        RandomPatrolAI_initFields(this);
        RandomPatrolAI_updateRandomDistance(this);
}

RandomPatrolAI* RandomPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    RandomPatrolAI* this = java_object_alloc(sizeof(RandomPatrolAI), "RandomPatrolAI");
    RandomPatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


static void RandomPatrolAI_updateRandomDistance(RandomPatrolAI* this) {
        this->base.currentDistance = MyRandomFactory_getAbsoluteNextInt(MyRandomFactory_getInstance(), Integer_intValue(this->base.maxDistance));
}


// throws Exception
void RandomPatrolAI_processAI(RandomPatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasePatrolAI_update((&this->base));
        BasicAI_processKeyAI((&this->base), this->base.keyDirection);
        if (this->changedDirection) {
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
            RandomPatrolAI_updateRandomDistance(this);
            this->changedDirection = false;
        }
}


void RandomPatrolAI_nextDirection(RandomPatrolAI* this) {
        BasePatrolAI_nextDirection((&this->base));
        this->changedDirection = true;
}

