// Generated Code Do Not Modify
#include "org/allbinary/game/layer/LevelLayersFinder.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/EnumerationUtil.h"


static LevelLayersFinder* LevelLayersFinder_instance;



void LevelLayersFinder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LevelLayersFinder_instance = LevelLayersFinder_new();
}

void LevelLayersFinder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LevelLayersFinder", nullptr);
    java_register_method("LevelLayersFinder", "get", (void*) LevelLayersFinder_get);
}

static void LevelLayersFinder_initFields(LevelLayersFinder* this) {
    this->enumerationUtil = EnumerationUtil_getInstance();
}

void LevelLayersFinder_init(LevelLayersFinder* this) {
    LevelLayersFinder_register();
    LevelLayersFinder_initFields(this);
}

LevelLayersFinder* LevelLayersFinder_new(void) {
    LevelLayersFinder* this = java_object_alloc(sizeof(LevelLayersFinder), "LevelLayersFinder");
    LevelLayersFinder_init(this);
    return this;
}


LevelLayersFinder* LevelLayersFinder_getInstance(void) {
        return (LevelLayersFinder_staticInit(), LevelLayersFinder_instance);
}


BasicArrayList* LevelLayersFinder_get(LevelLayersFinder* this, ABHashtable* hashtable) {
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        BasicArrayList* list = BasicArrayListD_new();
        Enumeration* enumeration = Hashtable_keys(hashtable);
        ABHashtable* layerHashtableCanBeNull = nullptr;
        int32_t integerCanBeNull = 0;
        int32_t cachedIntegerCanBeNull = 0;
        while (EnumerationUtil_hasMoreElements(this->enumerationUtil, enumeration)) {
            layerHashtableCanBeNull = ((ABHashtable*) Hashtable_get(hashtable, ((void*) EnumerationUtil_nextElement(this->enumerationUtil, enumeration))));
            integerCanBeNull = ((int32_t) Hashtable_get(layerHashtableCanBeNull, ((void*) (Layer_staticInit(), Layer_ID))));
            cachedIntegerCanBeNull = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Integer_intValue(integerCanBeNull));
            if (!BasicArrayList_contains(list, JAVA_BOX(cachedIntegerCanBeNull))) {
                BasicArrayList_add(list, JAVA_BOX(cachedIntegerCanBeNull));
            }
        }
        return list;
}

