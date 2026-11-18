// Generated Code Do Not Modify
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_SINGLETON;





void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_SINGLETON = ArtificialIntelligenceInterfaceFactoryInterfaceFactory_new();
}

void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArtificialIntelligenceInterfaceFactoryInterfaceFactory", nullptr);
    java_register_method("ArtificialIntelligenceInterfaceFactoryInterfaceFactory", "clear", (void*) ArtificialIntelligenceInterfaceFactoryInterfaceFactory_clear);
    java_register_method("ArtificialIntelligenceInterfaceFactoryInterfaceFactory", "getInstanceFromCollection", (void*) ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstanceFromCollection);
    java_register_method("ArtificialIntelligenceInterfaceFactoryInterfaceFactory", "add", (void*) ArtificialIntelligenceInterfaceFactoryInterfaceFactory_add);
}

static void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_initFields(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this) {
    this->list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}

void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_init(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this) {
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_register();
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_initFields(this);
}

ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_new(void) {
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this = java_object_alloc(sizeof(ArtificialIntelligenceInterfaceFactoryInterfaceFactory), "ArtificialIntelligenceInterfaceFactoryInterfaceFactory");
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_init(this);
    return this;
}


void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_clear(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this) {
        this->list = BasicArrayListD_new();
}


ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstance(void) {
        return (ArtificialIntelligenceInterfaceFactoryInterfaceFactory_staticInit(), ArtificialIntelligenceInterfaceFactoryInterfaceFactory_SINGLETON);
}


ArtificialIntelligenceInterfaceFactoryInterface* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstanceFromCollection(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ABHashtable* hashtable) {
        int32_t typeInteger = ((int32_t) Hashtable_get(hashtable, ((void*) (BasicAI_staticInit(), BasicAI_ID))));
        int32_t type = Integer_intValue(typeInteger);
        ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface = ((ArtificialIntelligenceInterfaceFactoryInterface*) this->list->objectArray[type - 1]);
        return artificialIntelligenceInterfaceFactoryInterface;
}


void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_add(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, artificialIntelligenceInterfaceFactoryInterface);
}

