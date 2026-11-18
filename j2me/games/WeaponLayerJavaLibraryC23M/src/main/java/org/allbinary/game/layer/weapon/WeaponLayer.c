// Generated Code Do Not Modify
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/physics/movement/Movement.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/game/identification/BasicGroupFactory.h")
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#endif
#if __has_include("org/allbinary/physics/movement/Movement.h")
#include "org/allbinary/physics/movement/Movement.h"
#endif
#if __has_include("org/allbinary/game/configuration/GameConfigurationUtil.h")
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/weapon/BasicLayerProcessor.h")
#include "org/allbinary/game/layer/weapon/BasicLayerProcessor.h"
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
#if __has_include("org/allbinary/animation/BasicLayerProcessor.h")
#include "org/allbinary/animation/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/collision/BasicLayerProcessor.h")
#include "org/allbinary/game/collision/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/BasicLayerProcessor.h")
#include "org/allbinary/game/combat/destroy/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/combat/weapon/BasicLayerProcessor.h")
#include "org/allbinary/game/combat/weapon/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/configuration/BasicLayerProcessor.h")
#include "org/allbinary/game/configuration/BasicLayerProcessor.h"
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
#if __has_include("org/allbinary/game/score/BasicLayerProcessor.h")
#include "org/allbinary/game/score/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/score/BasicLayerProcessor.h")
#include "org/allbinary/game/score/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/game/tick/BasicLayerProcessor.h")
#include "org/allbinary/game/tick/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/BasicLayerProcessor.h")
#include "org/allbinary/graphics/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/layer/BasicLayerProcessor.h")
#include "org/allbinary/layer/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/layer/BasicLayerProcessor.h")
#include "org/allbinary/layer/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/physics/movement/BasicLayerProcessor.h")
#include "org/allbinary/physics/movement/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/view/BasicLayerProcessor.h")
#include "org/allbinary/view/BasicLayerProcessor.h"
#endif
#if __has_include("org/allbinary/view/BasicLayerProcessor.h")
#include "org/allbinary/view/BasicLayerProcessor.h"
#endif


































void WeaponLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void WeaponLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WeaponLayer", "MultiPlayerGameLayer");
    java_register_method("WeaponLayer", "setCollidableInferface", (void*) WeaponLayer_setCollidableInferface);
    java_register_method("WeaponLayer", "initXYZ", (void*) WeaponLayer_initXYZ);
    java_register_method("WeaponLayer", "init", (void*) WeaponLayer_initMethod);
    java_register_method("WeaponLayer", "setGroupInterfaces", (void*) WeaponLayer_setGroupInterfaces);
    java_register_method("WeaponLayer", "processTick", (void*) WeaponLayer_processTick);
    java_register_method("WeaponLayer", "isDestroyed", (void*) WeaponLayer_isDestroyed);
    java_register_method("WeaponLayer", "damage", (void*) WeaponLayer_damage);
    java_register_method("WeaponLayer", "givePoints", (void*) WeaponLayer_givePoints);
    java_register_method("WeaponLayer", "isExhausted", (void*) WeaponLayer_isExhausted);
    java_register_method("WeaponLayer", "getDamage", (void*) WeaponLayer_getDamage);
    java_register_method("WeaponLayer", "setDestroyed", (void*) WeaponLayer_setDestroyed);
    java_register_method("WeaponLayer", "getInitDamage", (void*) WeaponLayer_getInitDamage);
    java_register_method("WeaponLayer", "setAnimationInterface", (void*) WeaponLayer_setAnimationInterface);
    java_register_method("WeaponLayer", "getAnimationInterface", (void*) WeaponLayer_getAnimationInterface);
    java_register_method("WeaponLayer", "getInitAnimationInterfaceP", (void*) WeaponLayer_getInitAnimationInterfaceP);
    java_register_method("WeaponLayer", "setInitAnimationInterfaceP", (void*) WeaponLayer_setInitAnimationInterfaceP);
    java_register_method("WeaponLayer", "getDestroyedAnimationInterface", (void*) WeaponLayer_getDestroyedAnimationInterface);
    java_register_method("WeaponLayer", "getOwnerLayerInterface", (void*) WeaponLayer_getOwnerLayerInterface);
    java_register_method("WeaponLayer", "setOwnerLayerInterface", (void*) WeaponLayer_setOwnerLayerInterface);
    java_register_method("WeaponLayer", "paint", (void*) WeaponLayer_paint);
    java_register_method("WeaponLayer", "paintThreed", (void*) WeaponLayer_paintThreed);
    java_register_method("WeaponLayer", "getMovement", (void*) WeaponLayer_getMovement);
    java_register_method("WeaponLayer", "setMovement", (void*) WeaponLayer_setMovement);
    java_register_method("WeaponLayer", "getType", (void*) WeaponLayer_getType);
    java_register_method("WeaponLayer", "getMultiPlayerType", (void*) WeaponLayer_getMultiPlayerType);
    java_register_method("WeaponLayer", "setWeaponPropertiesP", (void*) WeaponLayer_setWeaponPropertiesP);
    java_register_method("WeaponLayer", "getWeaponPropertiesP", (void*) WeaponLayer_getWeaponPropertiesP);
    java_register_method("WeaponLayer", "implmentsTickableInterface", (void*) WeaponLayer_implmentsTickableInterface);
    java_register_method("WeaponLayer", "set", (void*) WeaponLayer_set);
}

static void WeaponLayer_initFields(WeaponLayer* this) {
    this->animationInterface = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
    
    
    this->sourceLayerInterface = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
    this->totalDamage = 0;
    this->initDamage = 0;
    this->destroyed = true;
    this->scoreableInterface = NoScoreable_getInstance();
    
    this->weaponProperties = (WeaponProperties_staticInit(), WeaponProperties_NULL_WEAPON_PROPERTIES);
    
    this->collidableWeaponBehavior = CollidableWeaponBehavior_getNullInstance();
}


void WeaponLayer_init(WeaponLayer* this, const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    WeaponLayer_register();
        MultiPlayerGameLayer_init(&this->base, remoteInfo, BasicGroupFactory_getInstance()->NONE_ARRAY, name, rectangle, viewPosition);
        WeaponLayer_initFields(this);
        this->initAnimationInterface = animationInterface;
        WeaponLayer_setAnimationInterface(this, animationInterface);
        this->destroyedAnimationInterface = destroyedAnimationInterface;
        this->movement = movement;
        this->multiPlayerType = multiPlayerType;
}

WeaponLayer* WeaponLayer_new(const char* name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    WeaponLayer* this = java_object_alloc(sizeof(WeaponLayer), "WeaponLayer");
    WeaponLayer_init(this, name, remoteInfo, multiPlayerType, movement, animationInterface, destroyedAnimationInterface, rectangle, viewPosition);
    return this;
}


void WeaponLayer_setCollidableInferface(WeaponLayer* this, CollidableBaseBehavior* collidableInferface) {
        CollidableCompositeLayer_setCollidableInferface((&this->base), collidableInferface);
        this->collidableWeaponBehavior = ((CollidableWeaponBehavior*) CollidableCompositeLayer_getCollidableInferface(this));
}


// throws Exception
void WeaponLayer_initXYZ(WeaponLayer* this, int32_t x, int32_t y, int32_t z) {
        this->base.base.base.base.base.base.x = x;
        this->base.base.base.base.base.base.y = y;
        this->base.base.base.base.base.base.z = z;
}


// throws Exception
void WeaponLayer_initMethod(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable) {
        WeaponLayer_setWeaponPropertiesP(this, weaponProperties);
        CollidableDestroyableDamageableLayer_setReadyForExplosion(this, false);
        WeaponLayer_setAnimationInterface(this, WeaponLayer_getInitAnimationInterfaceP(this));
        WeaponLayer_setOwnerLayerInterface(this, sourceLayerInterface);
        CollidableWeaponBehavior_initMethod(this->collidableWeaponBehavior, sourceLayerInterface);
        WeaponLayer_setGroupInterfaces(this);
        if (scoreable != nullptr) {
            this->scoreableInterface = scoreable;
        }
        this->totalDamage = 0;
        this->initDamage = SimpleWeaponProperties_getDamage(weaponProperties);
        WeaponLayer_setDestroyed(this, false);
        Movement_initMethod(this->movement, WeaponProperties_getSpeed(weaponProperties), angle, otherAngle);
}


void WeaponLayer_setGroupInterfaces(WeaponLayer* this) {
        BasicGroupFactory* basicGroupFactory = BasicGroupFactory_getInstance();
        if (AllBinaryLayer_getGroupInterface(this->sourceLayerInterface)[0] == basicGroupFactory->ENEMY) {
            CollidableDestroyableDamageableLayer_setGroupInterface(this, basicGroupFactory->ENEMY_ARRAY);
        } else {
            CollidableDestroyableDamageableLayer_setGroupInterface(this, AllBinaryLayer_getGroupInterface(this->sourceLayerInterface));
        }
}


// throws Exception
void WeaponLayer_processTick(WeaponLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (WeaponLayer_isExhausted(this) && !WeaponLayer_isDestroyed(this)) {
            if (CollidableDestroyableDamageableLayer_isReadyForExplosion(this)) {
                IndexedAnimation* indexedAnimationInterface = ((IndexedAnimation*) WeaponLayer_getAnimationInterface(this));
                int32_t currentFrame = IndexedAnimation_getFrame(indexedAnimationInterface);
                if (currentFrame < IndexedAnimation_getAnimationSize(indexedAnimationInterface) - 1) {
                    Animation_nextFrame(indexedAnimationInterface);
                } else {
                    WeaponLayer_setDestroyed(this, true);
                }
            } else {
                CollidableWeaponBehavior* collidableWeaponBehavior = ((CollidableWeaponBehavior*) CollidableCompositeLayer_getCollidableInferface(this));
                if (CollidableWeaponBehavior_isCollided(collidableWeaponBehavior)) {
                    WeaponLayer_setAnimationInterface(this, this->destroyedAnimationInterface);
                    Movement_stop(WeaponLayer_getMovement(this));
                    CollidableDestroyableDamageableLayer_setReadyForExplosion(this, true);
                } else {
                    WeaponLayer_setDestroyed(this, true);
                }
            }
        }
        Movement_process(this->movement, this);
        this->totalDamage += ((int32_t) SimpleWeaponProperties_getDissipation(this->weaponProperties));
}


bool WeaponLayer_isDestroyed(WeaponLayer* this) {
        return this->destroyed;
}


void WeaponLayer_damage(WeaponLayer* this, int32_t damage, int32_t damageType) {
        this->totalDamage += damage * damage;
}


void WeaponLayer_givePoints(WeaponLayer* this, int32_t total) {
        ScoreableInterface_addPoints(this->scoreableInterface, GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil_getInstance()) * total);
}


bool WeaponLayer_isExhausted(WeaponLayer* this) {
        if (this->totalDamage > WeaponLayer_getInitDamage(this) || this->totalDamage < 0) {
            return true;
        } else {
            return false;
        }
}


int32_t WeaponLayer_getDamage(WeaponLayer* this, int32_t damageType) {
        if (!WeaponLayer_isExhausted(this)) {
            int32_t total = WeaponLayer_getInitDamage(this) - this->totalDamage;
            WeaponLayer_givePoints(this, total);
            return total;
        }
        return 0;
}


void WeaponLayer_setDestroyed(WeaponLayer* this, bool destroyed) {
        this->destroyed = destroyed;
        if (WeaponLayer_isDestroyed(this)) {
            this->scoreableInterface = NoScoreable_getInstance();
            BasicLayerProcessor_add(DestroyedLayerProcessor_getInstance(), this);
        }
}


int32_t WeaponLayer_getInitDamage(WeaponLayer* this) {
        return this->initDamage;
}


void WeaponLayer_setAnimationInterface(WeaponLayer* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


Animation* WeaponLayer_getAnimationInterface(WeaponLayer* this) {
        return this->animationInterface;
}


Animation* WeaponLayer_getInitAnimationInterfaceP(WeaponLayer* this) {
        return this->initAnimationInterface;
}


void WeaponLayer_setInitAnimationInterfaceP(WeaponLayer* this, Animation* initAnimationInterface) {
        this->initAnimationInterface = initAnimationInterface;
}


Animation* WeaponLayer_getDestroyedAnimationInterface(WeaponLayer* this) {
        return this->destroyedAnimationInterface;
}


AllBinaryLayer* WeaponLayer_getOwnerLayerInterface(WeaponLayer* this) {
        return this->sourceLayerInterface;
}


void WeaponLayer_setOwnerLayerInterface(WeaponLayer* this, AllBinaryLayer* sourceLayerInterface) {
        this->sourceLayerInterface = sourceLayerInterface;
}


void WeaponLayer_paint(WeaponLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this);
        Animation_paintXY(this->animationInterface, graphics, GPoint_getX(viewPosition) - AllBinaryLayer_getHalfWidth(this), GPoint_getY(viewPosition) - AllBinaryLayer_getHalfHeight(this));
}


void WeaponLayer_paintThreed(WeaponLayer* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this);
        Animation_paintThreedXYZ(this->animationInterface, graphics, GPoint_getX(viewPosition) - AllBinaryLayer_getHalfWidth(this), GPoint_getY(viewPosition) - AllBinaryLayer_getHalfHeight(this), GPoint_getZ(viewPosition) - AllBinaryLayer_getHalfDepth(this));
}


Movement* WeaponLayer_getMovement(WeaponLayer* this) {
        return this->movement;
}


void WeaponLayer_setMovement(WeaponLayer* this, Movement* movement) {
        this->movement = movement;
}


int32_t WeaponLayer_getType(WeaponLayer* this) {
        return WeaponLayer_getStaticType();
}


int32_t WeaponLayer_getStaticType(void) {
        return 0;
}


int32_t WeaponLayer_getMultiPlayerType(WeaponLayer* this) {
        return this->multiPlayerType;
}


void WeaponLayer_setWeaponPropertiesP(WeaponLayer* this, WeaponProperties* weaponProperties) {
        this->weaponProperties = weaponProperties;
}


WeaponProperties* WeaponLayer_getWeaponPropertiesP(WeaponLayer* this) {
        return this->weaponProperties;
}


bool WeaponLayer_implmentsTickableInterface(WeaponLayer* this) {
        return true;
}


// throws Exception
void WeaponLayer_set(WeaponLayer* this, GL* gl) {
        Animation_set(this->initAnimationInterface, gl);
}

