// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickupLayer.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickupableInterface.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/game/identification/BasicGroupFactory.h")
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h")
#include "org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/BasicLayerProcessor.h")
#include "org/allbinary/game/layer/pickup/BasicLayerProcessor.h"
#endif
#if __has_include("javax/microedition/khronos/opengles/BasicLayerProcessor.h")
#include "javax/microedition/khronos/opengles/BasicLayerProcessor.h"
#endif
#if __has_include("javax/microedition/lcdui/BasicLayerProcessor.h")
#include "javax/microedition/lcdui/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/animation/BasicLayerProcessor.h")
#include "org/allbinary/animation/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/animation/BasicLayerProcessor.h")
#include "org/allbinary/animation/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/collision/BasicLayerProcessor.h")
#include "org/allbinary/game/collision/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/BasicLayerProcessor.h")
#include "org/allbinary/game/combat/destroy/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/identification/BasicLayerProcessor.h")
#include "org/allbinary/game/identification/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/BasicLayerProcessor.h")
#include "org/allbinary/game/multiplayer/layer/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/multiplayer/layer/BasicLayerProcessor.h")
#include "org/allbinary/game/multiplayer/layer/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/BasicLayerProcessor.h")
#include "org/allbinary/graphics/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/image/opengles/BasicLayerProcessor.h")
#include "org/allbinary/image/opengles/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/view/BasicLayerProcessor.h")
#include "org/allbinary/view/BasicLayerProcessor.h"
#endif















void PickupLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PickupLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickupLayer", "MultiPlayerGameLayer");
    java_register_method("PickupLayer", "init", (void*) PickupLayer_initMethod);
    java_register_method("PickupLayer", "initXYZ", (void*) PickupLayer_initXYZ);
    java_register_method("PickupLayer", "paint", (void*) PickupLayer_paint);
    java_register_method("PickupLayer", "paintThreed", (void*) PickupLayer_paintThreed);
    java_register_method("PickupLayer", "getPickedUpLayerInterfaceFactoryInterface", (void*) PickupLayer_getPickedUpLayerInterfaceFactoryInterface);
    java_register_method("PickupLayer", "setPickedUp", (void*) PickupLayer_setPickedUp);
    java_register_method("PickupLayer", "isDestroyed", (void*) PickupLayer_isDestroyed);
    java_register_method("PickupLayer", "setDestroyed", (void*) PickupLayer_setDestroyed);
    java_register_method("PickupLayer", "damage", (void*) PickupLayer_damage);
    java_register_method("PickupLayer", "getDamage", (void*) PickupLayer_getDamage);
    java_register_method("PickupLayer", "set", (void*) PickupLayer_set);
}

static void PickupLayer_initFields(PickupLayer* this) {
    this->pickedUpLayerInterfaceFactoryInterface = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
    this->destroyed = false;
    this->animationInterface = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
}


void PickupLayer_init(PickupLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    PickupLayer_register();
        MultiPlayerGameLayer_init(&this->base, remoteInfo, BasicGroupFactory_getInstance()->NONE_ARRAY, name, rectangle, viewPosition);
        PickupLayer_initFields(this);
        CollidableCompositeLayer_setCollidableInferface(this, CollidableAlwaysPickupNeverCollideBehaviorFactory_createBehavior(CollidableAlwaysPickupNeverCollideBehaviorFactory_getInstance()));
        Layer_setLayerWidth(this, 10);
        Layer_setLayerHeight(this, 10);
        PickupLayer_initMethod(this, pickedUpLayerInterfaceFactoryInterface, animationInterface);
}

PickupLayer* PickupLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    PickupLayer* this = java_object_alloc(sizeof(PickupLayer), "PickupLayer");
    PickupLayer_init(this, name, remoteInfo, total, pickedUpLayerInterfaceFactoryInterface, animationInterface, rectangle, viewPosition);
    return this;
}


void PickupLayer_initMethod(PickupLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface) {
        this->pickedUpLayerInterfaceFactoryInterface = pickedUpLayerInterfaceFactoryInterface;
        this->animationInterface = animationInterface;
        PickupLayer_setDestroyed(this, false);
}


void PickupLayer_initXYZ(PickupLayer* this, int32_t x, int32_t y, int32_t z) {
        AllBinaryLayer_setPosition(this, x, y, z);
}


void PickupLayer_paint(PickupLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this);
        int32_t viewX = GPoint_getX(viewPosition);
        int32_t viewY = GPoint_getY(viewPosition);
        Animation_paintXY(this->animationInterface, graphics, viewX, viewY);
}


void PickupLayer_paintThreed(PickupLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this);
        int32_t viewX = GPoint_getX(viewPosition);
        int32_t viewY = GPoint_getY(viewPosition);
        Animation_paintThreedXYZ(this->animationInterface, graphics, viewX, viewY, 3);
}


PickedUpLayerInterfaceFactoryInterface* PickupLayer_getPickedUpLayerInterfaceFactoryInterface(PickupLayer* this) {
        return this->pickedUpLayerInterfaceFactoryInterface;
}


void PickupLayer_setPickedUp(PickupLayer* this) {
        PickupLayer_setDestroyed(this, true);
}


bool PickupLayer_isDestroyed(PickupLayer* this) {
        return this->destroyed;
}


void PickupLayer_setDestroyed(PickupLayer* this, bool destroyed) {
        this->destroyed = destroyed;
        if (PickupLayer_isDestroyed(this)) {
            BasicLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this);
        }
}


void PickupLayer_damage(PickupLayer* this, int32_t damage, int32_t damageType) {
}


int32_t PickupLayer_getDamage(PickupLayer* this, int32_t damageType) {
        return 0;
}


// throws Exception
void PickupLayer_set(PickupLayer* this, GL* gl) {
        OpenGLSurfaceChangedInterface* openGLSurfaceChangedInterface = ((OpenGLSurfaceChangedInterface*) this->animationInterface);
        OpenGLSurfaceChangedInterface_set(openGLSurfaceChangedInterface, gl);
}

