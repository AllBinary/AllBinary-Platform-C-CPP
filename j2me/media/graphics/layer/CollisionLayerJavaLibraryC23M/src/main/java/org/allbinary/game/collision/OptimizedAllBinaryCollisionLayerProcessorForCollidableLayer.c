// Generated Code Do Not Modify
#include "org/allbinary/game/collision/OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/game/collision/OptimizedAllBinaryCollisionLayerManager.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"






void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer", "LayerProcessor");
    java_register_method("OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer", "processAt", (void*) OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_processAt);
    java_register_method("OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer", "isProcessorLayer", (void*) OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_isProcessorLayer);
}


void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this) {
    OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_register();
        LayerProcessor_init(&this->base, OptimizedAllBinaryCollisionLayerManager_new());
}

OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_new(void) {
    OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this = java_object_alloc(sizeof(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer), "OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer");
    OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_init(this);
    return this;
}


// throws Exception
void OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_processAt(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t startIndex) {
        CollidableCompositeLayer* collidableInterfaceCompositeInterface = ((CollidableCompositeLayer*) layerInterface);
        CollidableBaseBehavior* collidableBase = CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface);
        if (CollidableBaseBehavior_isCollidable(collidableBase, collidableInterfaceCompositeInterface)) {
            LayerManager* layerManager = LayerProcessor_getLayerManager(this);
            int32_t size = LayerManager_getSize(layerManager);
            CollidableCompositeLayer* collidableInterfaceCompositeInterface2 = nullptr;
            CollidableBaseBehavior* collidableBase2 = nullptr;
            for (int32_t index = startIndex + 1; index < size; index++) {
                collidableInterfaceCompositeInterface2 = ((CollidableCompositeLayer*) LayerManager_getLayerAt(layerManager, index));
                collidableBase2 = CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface2);
                if (CollidableBaseBehavior_isCollidable(collidableBase2, collidableInterfaceCompositeInterface) && CollidableBaseBehavior_isCollision(collidableBase, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2)) {
                    CollidableBaseBehavior_collide(collidableBase, collidableInterfaceCompositeInterface, collidableInterfaceCompositeInterface2);
                    CollidableBaseBehavior_collide(collidableBase2, collidableInterfaceCompositeInterface2, collidableInterfaceCompositeInterface);
                }
            }
        }
}


bool OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer_isProcessorLayer(OptimizedAllBinaryCollisionLayerProcessorForCollidableLayer* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsCollidableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

