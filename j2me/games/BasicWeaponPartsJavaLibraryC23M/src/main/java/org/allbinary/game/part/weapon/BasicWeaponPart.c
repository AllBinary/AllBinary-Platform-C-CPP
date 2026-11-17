/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.part.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/game/score/NoScoreable.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/part/weapon/SalvoInterface.h"

typedef struct BasicWeaponPart BasicWeaponPart;
struct BasicWeaponPart {
    PartInterface PartInterface_interface;
    SalvoInterface SalvoInterface_interface;
    Animation* animationInterface;
    AllBinaryLayer* ownerLayerInterface;
    WeaponProperties* weaponProperties;
    ScoreableInterface* scoreableInterface;
    RelativeRelationship* relativeRelationship;
};

BasicWeaponPart* BasicWeaponPart_NULL_BASIC_WEAPON_PART;

BasicWeaponPart* BasicWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
BasicWeaponPart* BasicWeaponPart_createBasicWeaponPart(Animation* animationInterface);

void BasicWeaponPart_init(BasicWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
void BasicWeaponPart_init(BasicWeaponPart* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);
void BasicWeaponPart_process(BasicWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle);
void BasicWeaponPart_processScore(BasicWeaponPart* this, AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);
AllBinaryLayer* BasicWeaponPart_getOwnerLayerInterface(BasicWeaponPart* this);
void BasicWeaponPart_setOwnerLayerInterface(BasicWeaponPart* this, AllBinaryLayer* ownerLayerInterface);
Animation* BasicWeaponPart_getAnimationInterface(BasicWeaponPart* this);
void BasicWeaponPart_setAnimationInterface(BasicWeaponPart* this, Animation* animationInterface);
void BasicWeaponPart_paint(BasicWeaponPart* this, Graphics* graphics);
void BasicWeaponPart_paintThreed(BasicWeaponPart* this, Graphics* graphics);
WeaponProperties* BasicWeaponPart_getWeaponProperties(BasicWeaponPart* this);
void BasicWeaponPart_setWeaponProperties(BasicWeaponPart* this, WeaponProperties* weaponProperties);

// Static fields with runtime initializers: call this once at startup
void BasicWeaponPart_staticInit(void) {
    BasicWeaponPart_NULL_BASIC_WEAPON_PART = BasicWeaponPart_createBasicWeaponPart(JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0));
}

static void BasicWeaponPart_initFields(BasicWeaponPart* this) {
    this->animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
    this->ownerLayerInterface = AllBinaryLayer_NULL_ALLBINARY_LAYER;
    this->weaponProperties = WeaponProperties_NULL_WEAPON_PROPERTIES;
    this->scoreableInterface = NoScoreable_getInstance();
    this->relativeRelationship = RelativeRelationship_NULL_RELATIVE_RELATIONSHIP;
}


BasicWeaponPart* BasicWeaponPart_createBasicWeaponPart(Animation* animationInterface) {
        return BasicWeaponPart_new(animationInterface, AllBinaryLayer_NULL_ALLBINARY_LAYER, WeaponProperties_NULL_WEAPON_PROPERTIES, NoScoreable_getInstance(), RelativeRelationship_NULL_RELATIVE_RELATIONSHIP);
}


void BasicWeaponPart_init(BasicWeaponPart* this, Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicWeaponPart_initFields(this);
        BasicWeaponPart_init(this, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
        BasicWeaponPart_setAnimationInterface(this, animationInterface);
}

BasicWeaponPart* BasicWeaponPart_new(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
    BasicWeaponPart* this = calloc(1, sizeof(BasicWeaponPart));
    BasicWeaponPart_init(this, animationInterface, sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
    return this;
}


void BasicWeaponPart_init(BasicWeaponPart* this, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) {
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
        ViewPositionBase* viewPosition = JAVA_CALL(BasicWeaponPart_getOwnerLayerInterface(this), getViewPosition);
        int32_t viewX = ViewPositionBase_getX(viewPosition);
        int32_t viewY = ViewPositionBase_getY(viewPosition);
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

