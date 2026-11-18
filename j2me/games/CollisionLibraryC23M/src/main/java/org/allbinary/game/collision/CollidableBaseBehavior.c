// Generated Code Do Not Modify
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/collision/CollidableInterface.h"
#include "org/allbinary/game/collision/LayerCollisionUtil.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/collision/CollisionType.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif














void CollidableBaseBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CollidableBaseBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableBaseBehavior", nullptr);
    java_register_method("CollidableBaseBehavior", "update", (void*) CollidableBaseBehavior_update);
    java_register_method("CollidableBaseBehavior", "getName", (void*) CollidableBaseBehavior_getName);
    java_register_method("CollidableBaseBehavior", "setCollidable", (void*) CollidableBaseBehavior_setCollidable);
    java_register_method("CollidableBaseBehavior", "isCollidable", (void*) CollidableBaseBehavior_isCollidable);
    java_register_method("CollidableBaseBehavior", "collide", (void*) CollidableBaseBehavior_collide);
    java_register_method("CollidableBaseBehavior", "isCollision", (void*) CollidableBaseBehavior_isCollision);
    java_register_method("CollidableBaseBehavior", "isCollisionInterface", (void*) CollidableBaseBehavior_isCollisionInterface);
    java_register_method("CollidableBaseBehavior", "collideInterface", (void*) CollidableBaseBehavior_collideInterface);
    java_register_method("CollidableBaseBehavior", "paint", (void*) CollidableBaseBehavior_paint);
    java_register_method("CollidableBaseBehavior", "getCollisionTypeWith", (void*) CollidableBaseBehavior_getCollisionTypeWith);
}

static void CollidableBaseBehavior_initFields(CollidableBaseBehavior* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->layerCollisionUtil = LayerCollisionUtil_getInstance();
    this->collidable = true;
}


void CollidableBaseBehavior_init(CollidableBaseBehavior* this, bool collidable) {
    CollidableBaseBehavior_register();
    CollidableBaseBehavior_initFields(this);
        this->collidable = collidable;
}

CollidableBaseBehavior* CollidableBaseBehavior_new(bool collidable) {
    CollidableBaseBehavior* this = java_object_alloc(sizeof(CollidableBaseBehavior), "CollidableBaseBehavior");
    CollidableBaseBehavior_init(this, collidable);
    return this;
}


void CollidableBaseBehavior_update(CollidableBaseBehavior* this) {
}


const char* CollidableBaseBehavior_getName(CollidableBaseBehavior* this) {
        return java_class_of(this);
}


void CollidableBaseBehavior_setCollidable(CollidableBaseBehavior* this, bool collidable) {
        this->collidable = collidable;
}


bool CollidableBaseBehavior_isCollidable(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer) {
        return this->collidable;
}


// throws Exception
void CollidableBaseBehavior_collide(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer) {
        java_throw(java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), this->commonStrings->NOT_IMPLEMENTED), CommonLabels_getInstance()->COLON_SEP), java_class_of(this)))));
}


bool CollidableBaseBehavior_isCollision(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer) {
        return LayerCollisionUtil_isCollision(this->layerCollisionUtil, ownerLayer, collisionLayer);
}


bool CollidableBaseBehavior_isCollisionInterface(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        return LayerCollisionUtil_isCollision(this->layerCollisionUtil, ownerLayer, ((AllBinaryLayer*) collidableInterfaceCompositeInterface));
}


// throws Exception
void CollidableBaseBehavior_collideInterface(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void CollidableBaseBehavior_paint(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, Graphics* graphics) {
}


CollisionType* CollidableBaseBehavior_getCollisionTypeWith(CollidableBaseBehavior* this, AllBinaryLayer* layerInterface) {
        return CollisionTypeFactory_getInstance()->NONE;
}

