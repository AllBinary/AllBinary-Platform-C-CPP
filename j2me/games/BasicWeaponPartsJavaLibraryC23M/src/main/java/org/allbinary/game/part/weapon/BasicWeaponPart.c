// Generated Code Do Not Modify
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/part/weapon/SalvoInterface.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif


BasicWeaponPart* BasicWeaponPart_NULL_BASIC_WEAPON_PART;














void BasicWeaponPart_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicWeaponPart_NULL_BASIC_WEAPON_PART = BasicWeaponPart_createBasicWeaponPart(NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0));
}

void BasicWeaponPart_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicWeaponPart", nullptr);
    java_register_method("BasicWeaponPart", "init", (void*) BasicWeaponPart_initMethod);
    java_register_method("BasicWeaponPart", "process", (void*) BasicWeaponPart_process);
    java_register_method("BasicWeaponPart", "processScore", (void*) BasicWeaponPart_processScore);
    java_register_method("BasicWeaponPart", "getOwnerLayerInterface", (void*) BasicWeaponPart_getOwnerLayerInterface);
    java_register_method("BasicWeaponPart", "setOwnerLayerInterface", (void*) BasicWeaponPart_setOwnerLayerInterface);
    java_register_method("BasicWeaponPart", "getAnimationInterface", (void*) BasicWeaponPart_getAnimationInterface);
    java_register_method("BasicWeaponPart", "setAnimationInterface", (void*) BasicWeaponPart_setAnimationInterface);
    java_register_method("BasicWeaponPart", "paint", (void*) BasicWeaponPart_paint);
    java_register_method("BasicWeaponPart", "paintThreed", (void*) BasicWeaponPart_paintThreed);
    java_register_method("BasicWeaponPart", "getWeaponProperties", (void*) BasicWeaponPart_getWeaponProperties);
    java_register_method("BasicWeaponPart", "setWeaponProperties", (void*) BasicWeaponPart_setWeaponProperties);
}

static void BasicWeaponPart_initFields(BasicWeaponPart* this) {
    this->animationInterface = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
    this->ownerLayerInterface = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
    this->weaponProperties = (WeaponProperties_staticInit(), WeaponProperties_NULL_WEAPON_PROPERTIES);
    this->scoreableInterface = NoScoreable_getInstance();
    this->relativeRelationship = (RelativeRelationship_staticInit(), RelativeRelationship_NULL_RELATIVE_RELATIONSHIP);
}


BasicWeaponPart* BasicWeaponPart_createBasicWeaponPart(Animation* animationInterface) {
        return BasicWeaponPart_new(animationInterface, (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER), (WeaponProperties_staticInit(), WeaponProperties_NULL_WEAPON_PROPERTIES), NoScoreable_getInstance(), (RelativeRelationship_staticInit(), RelativeRelationship_NULL_RELATIVE_RELATIONSHIP));
}


void BasicWeaponPart_init(BasicWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicWeaponPart_register();
    BasicWeaponPart_initFields(this);
        BasicWeaponPart_initMethod(this, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        BasicWeaponPart_setAnimationInterface(this, animationInterface);
}

BasicWeaponPart* BasicWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicWeaponPart* this = java_object_alloc(sizeof(BasicWeaponPart), "BasicWeaponPart");
    BasicWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


void BasicWeaponPart_initMethod(BasicWeaponPart* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
        BasicWeaponPart_setOwnerLayerInterface(this, sourceLayerInterface);
        BasicWeaponPart_setWeaponProperties(this, weaponProperties);
        this->scoreableInterface = scoreableInterface;
        this->relativeRelationship = relativeRelationship;
}


// throws Exception
void BasicWeaponPart_process(BasicWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle) {
        BasicWeaponPart_processScore(this, allbinaryLayerManager, angle, otherAngle, BasicWeaponPart_getWeaponProperties(this), this->scoreableInterface);
}


// throws Exception
void BasicWeaponPart_processScore(BasicWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}


AllBinaryLayer* BasicWeaponPart_getOwnerLayerInterface(BasicWeaponPart* this) {
        return this->ownerLayerInterface;
}


void BasicWeaponPart_setOwnerLayerInterface(BasicWeaponPart* this, AllBinaryLayer* ownerLayerInterface) {
        this->ownerLayerInterface = ownerLayerInterface;
}


Animation* BasicWeaponPart_getAnimationInterface(BasicWeaponPart* this) {
        return this->animationInterface;
}


void BasicWeaponPart_setAnimationInterface(BasicWeaponPart* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


void BasicWeaponPart_paint(BasicWeaponPart* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(BasicWeaponPart_getOwnerLayerInterface(this));
        int32_t viewX = GPoint_getX(viewPosition);
        int32_t viewY = GPoint_getY(viewPosition);
        Animation_paintXY(this->animationInterface, graphics, viewX, viewY);
}


void BasicWeaponPart_paintThreed(BasicWeaponPart* this, Graphics* graphics) {
}


WeaponProperties* BasicWeaponPart_getWeaponProperties(BasicWeaponPart* this) {
        return this->weaponProperties;
}


void BasicWeaponPart_setWeaponProperties(BasicWeaponPart* this, WeaponProperties* weaponProperties) {
        this->weaponProperties = weaponProperties;
}

