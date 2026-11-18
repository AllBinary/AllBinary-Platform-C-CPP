// Generated Code Do Not Modify
#include "org/allbinary/game/collision/layer/AllBinaryCollisionManager.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/LayerManager.h"


static AllBinaryCollisionManager* AllBinaryCollisionManager_allBinaryCollisionManager;




static void AllBinaryCollisionManager_collide(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2);

void AllBinaryCollisionManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryCollisionManager_allBinaryCollisionManager = AllBinaryCollisionManager_new();
}

void AllBinaryCollisionManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryCollisionManager", nullptr);
    java_register_method("AllBinaryCollisionManager", "process", (void*) AllBinaryCollisionManager_process);
    java_register_method("AllBinaryCollisionManager", "collide", (void*) AllBinaryCollisionManager_collide);
}


void AllBinaryCollisionManager_init(AllBinaryCollisionManager* this) {
    AllBinaryCollisionManager_register();
}

AllBinaryCollisionManager* AllBinaryCollisionManager_new(void) {
    AllBinaryCollisionManager* this = java_object_alloc(sizeof(AllBinaryCollisionManager), "AllBinaryCollisionManager");
    AllBinaryCollisionManager_init(this);
    return this;
}


AllBinaryCollisionManager* AllBinaryCollisionManager_getInstance(void) {
        return (AllBinaryCollisionManager_staticInit(), AllBinaryCollisionManager_allBinaryCollisionManager);
}


// throws Exception
void AllBinaryCollisionManager_process(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, int32_t startIndex) {
        int32_t size = LayerManager_getSize(layerManager);
        for (int32_t index = startIndex + 1; index < size; index++) {
            CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2 = ((CollidableInterfaceCompositeInterface*) LayerManager_getLayerAt(layerManager, index));
            AllBinaryCollisionManager_collide(this, layerManager, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
        }
}


// throws Exception
static void AllBinaryCollisionManager_collide(AllBinaryCollisionManager* this, LayerManager* layerManager, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface2) {
        CollidableBaseBehavior* collidableBase2 = CollidableInterfaceCompositeInterface_getCollidableInferface(collidableInterfaceCompositeInterface2);
        CollidableBaseBehavior* collidableBase = CollidableInterfaceCompositeInterface_getCollidableInferface(collidableInterfaceCompositeInterface);
        if (CollidableBaseBehavior_isCollidable(collidableBase2, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface))) {
            if (CollidableBaseBehavior_isCollisionInterface(collidableBase, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface2)) {
                CollidableBaseBehavior_collideInterface(collidableBase, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface2);
                CollidableBaseBehavior_collideInterface(collidableBase2, ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface), collidableInterfaceCompositeInterface);
            }
        }
}

