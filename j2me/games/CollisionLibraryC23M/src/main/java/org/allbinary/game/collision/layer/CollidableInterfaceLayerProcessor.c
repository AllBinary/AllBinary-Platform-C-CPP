// Generated Code Do Not Modify
#include "org/allbinary/game/collision/layer/CollidableInterfaceLayerProcessor.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/collision/layer/CollidableInterfaceLayerManager.h"
#include "org/allbinary/game/collision/layer/AllBinaryCollisionManager.h"
#if __has_include("org/allbinary/game/collision/layer/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/CollidableBaseBehavior.h")
#include "org/allbinary/game/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/layer/CollidableBaseBehavior.h")
#include "org/allbinary/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/layer/CollidableBaseBehavior.h")
#include "org/allbinary/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/layer/CollidableBaseBehavior.h")
#include "org/allbinary/layer/CollidableBaseBehavior.h"
#endif






void CollidableInterfaceLayerProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableInterfaceLayerProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableInterfaceLayerProcessor", "LayerProcessor");
    java_register_method("CollidableInterfaceLayerProcessor", "processAt", (void*) CollidableInterfaceLayerProcessor_processAt);
    java_register_method("CollidableInterfaceLayerProcessor", "isProcessorLayer", (void*) CollidableInterfaceLayerProcessor_isProcessorLayer);
}


void CollidableInterfaceLayerProcessor_init(CollidableInterfaceLayerProcessor* this) {
    CollidableInterfaceLayerProcessor_register();
        LayerProcessor_init(&this->base, CollidableInterfaceLayerManager_new());
}

CollidableInterfaceLayerProcessor* CollidableInterfaceLayerProcessor_new(void) {
    CollidableInterfaceLayerProcessor* this = java_object_alloc(sizeof(CollidableInterfaceLayerProcessor), "CollidableInterfaceLayerProcessor");
    CollidableInterfaceLayerProcessor_init(this);
    return this;
}


// throws Exception
void CollidableInterfaceLayerProcessor_processAt(CollidableInterfaceLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface = ((CollidableInterfaceCompositeInterface*) layerInterface);
        if (CollidableBaseBehavior_isCollidable(CollidableInterfaceCompositeInterface_getCollidableInferface(collidableInterfaceCompositeInterface), ((CollidableCompositeLayer*) collidableInterfaceCompositeInterface))) {
            AllBinaryCollisionManager_process(AllBinaryCollisionManager_getInstance(), LayerProcessor_getLayerManager(this), collidableInterfaceCompositeInterface, index);
        }
}


bool CollidableInterfaceLayerProcessor_isProcessorLayer(CollidableInterfaceLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsCollidableInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

