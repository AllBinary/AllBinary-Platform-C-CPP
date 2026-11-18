// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/CollidableCharacterBehavior.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#if __has_include("org/allbinary/game/layer/special/CollidableBaseBehavior.h")
#include "org/allbinary/game/layer/special/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/CollidableBaseBehavior.h")
#include "org/allbinary/game/layer/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CollidableBaseBehavior.h")
#include "org/allbinary/game/layer/pickup/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/CollidableBaseBehavior.h")
#include "org/allbinary/logic/communication/log/CollidableBaseBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/special/PickupBehavior.h")
#include "org/allbinary/game/layer/special/PickupBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/PickupBehavior.h")
#include "org/allbinary/game/collision/PickupBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/PickupBehavior.h")
#include "org/allbinary/game/collision/PickupBehavior.h"
#endif
#if __has_include("org/allbinary/game/collision/PickupBehavior.h")
#include "org/allbinary/game/collision/PickupBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/PickupBehavior.h")
#include "org/allbinary/game/layer/PickupBehavior.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickupBehavior.h")
#include "org/allbinary/game/layer/pickup/PickupBehavior.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/PickupBehavior.h")
#include "org/allbinary/logic/communication/log/PickupBehavior.h"
#endif






void CollidableCharacterBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableCharacterBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableCharacterBehavior", "CollidableDestroyableDamageableBehavior");
    java_register_method("CollidableCharacterBehavior", "collide", (void*) CollidableCharacterBehavior_collide);
    java_register_method("CollidableCharacterBehavior", "collideInterface", (void*) CollidableCharacterBehavior_collideInterface);
}


void CollidableCharacterBehavior_init(CollidableCharacterBehavior* this, bool collidable) {
    CollidableCharacterBehavior_register();
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
}

CollidableCharacterBehavior* CollidableCharacterBehavior_new(bool collidable) {
    CollidableCharacterBehavior* this = java_object_alloc(sizeof(CollidableCharacterBehavior), "CollidableCharacterBehavior");
    CollidableCharacterBehavior_init(this, collidable);
    return this;
}


// throws Exception
void CollidableCharacterBehavior_collide(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory_getInstance();
        CollisionType* collisionType = CollidableBaseBehavior_getCollisionTypeWith(CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface), ownerLayer);
        if (collisionType == collisionTypeFactory->PICKUP) {
            CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) ownerLayer);
            PickupBehavior_doPickupLayer(CollidableDestroyableDamageableLayer_getPickupBehavior(collidableDestroyableDamageableLayer), ((PickedUpLayerInterface*) collidableInterfaceCompositeInterface));
        } else {
            CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collidableInterfaceCompositeInterface);
        }
}


// throws Exception
void CollidableCharacterBehavior_collideInterface(CollidableCharacterBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log(this->base.base.commonStrings->NOT_IMPLEMENTED, this);
}

