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
// package org.allbinary.game.layer.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
#include "org/allbinary/game/combat/damage/DamageableInterface.h"
#include "org/allbinary/game/combat/destroy/DestroyableInterface.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickupBehavior.h"
#include "org/allbinary/game/layer/pickup/PickupCompositeInterface.h"
#include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/game/part/PartInterfaceUtil.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"

typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
struct CollidableDestroyableDamageableLayer {
    CollidableCompositeLayer base;
    DestroyableInterface DestroyableInterface_interface;
    DamageableInterface DamageableInterface_interface;
    PickupCompositeInterface PickupCompositeInterface_interface;
    SpecialGameInputInterface SpecialGameInputInterface_interface;
    Group** groupInterface;
    bool readyForExplosion;
    int32_t initWidth;
    int32_t initHeight;
    int32_t initX;
    int32_t initY;
    int32_t initZ;
    PartInterface** partInterfaceArrayP;
    PickupBehavior* pickupBehavior;
    AllBinaryGameLayerManager* allBinaryGameLayerManagerP;
    bool isDraggable;
    bool isDragged;
    bool isDropped;
};

static Any* CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER;
static const char* CollidableDestroyableDamageableLayer_READYFOREXPLOSION = "ReadyForExplosion: ";

CollidableDestroyableDamageableLayer* CollidableDestroyableDamageableLayer_new(Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);
CollidableDestroyableDamageableLayer* CollidableDestroyableDamageableLayer_getNullInstance(void);

void CollidableDestroyableDamageableLayer_init(CollidableDestroyableDamageableLayer* this, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);
void CollidableDestroyableDamageableLayer_initPosition(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_initPositionXYZ(CollidableDestroyableDamageableLayer* this, int32_t x, int32_t y, int32_t z);
void CollidableDestroyableDamageableLayer_paint(CollidableDestroyableDamageableLayer* this, Graphics* graphics);
void CollidableDestroyableDamageableLayer_damage(CollidableDestroyableDamageableLayer* this, int32_t damage, int32_t damageType);
int32_t CollidableDestroyableDamageableLayer_getDamage(CollidableDestroyableDamageableLayer* this, int32_t damageType);
bool CollidableDestroyableDamageableLayer_isDestroyed(CollidableDestroyableDamageableLayer* this);
Group** CollidableDestroyableDamageableLayer_getGroupInterface(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_setGroupInterface(CollidableDestroyableDamageableLayer* this, Group** teamInterface);
void CollidableDestroyableDamageableLayer_setAllBinaryGameLayerManager(CollidableDestroyableDamageableLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
bool CollidableDestroyableDamageableLayer_isReadyForExplosion(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_setReadyForExplosion(CollidableDestroyableDamageableLayer* this, bool isReadyForExplosion);
int32_t CollidableDestroyableDamageableLayer_getInitWidth(CollidableDestroyableDamageableLayer* this);
int32_t CollidableDestroyableDamageableLayer_getInitHeight(CollidableDestroyableDamageableLayer* this);
int32_t CollidableDestroyableDamageableLayer_getInitX(CollidableDestroyableDamageableLayer* this);
int32_t CollidableDestroyableDamageableLayer_getInitY(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_up(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_down(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_right(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_left(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_strafeLeft(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_strafeRight(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_fire(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void CollidableDestroyableDamageableLayer_special1(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void CollidableDestroyableDamageableLayer_special2(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void CollidableDestroyableDamageableLayer_special3(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void CollidableDestroyableDamageableLayer_special4(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void CollidableDestroyableDamageableLayer_special5(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent);
void CollidableDestroyableDamageableLayer_upAnalog(CollidableDestroyableDamageableLayer* this, int32_t yAnalogValue);
void CollidableDestroyableDamageableLayer_downAnalog(CollidableDestroyableDamageableLayer* this, int32_t yAnalogValue);
void CollidableDestroyableDamageableLayer_rightAnalog(CollidableDestroyableDamageableLayer* this, int32_t xAnalogValue);
void CollidableDestroyableDamageableLayer_leftAnalog(CollidableDestroyableDamageableLayer* this, int32_t xAnalogValue);
void CollidableDestroyableDamageableLayer_rightTrigger(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue);
void CollidableDestroyableDamageableLayer_leftTrigger(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue);
void CollidableDestroyableDamageableLayer_onDestroyed(CollidableDestroyableDamageableLayer* this, DestroyedEvent* destroyedEvent);
PickupBehavior* CollidableDestroyableDamageableLayer_getPickupBehavior(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_setPickupBehavior(CollidableDestroyableDamageableLayer* this, PickupBehavior* pickupBehavior);
void CollidableDestroyableDamageableLayer_addPart(CollidableDestroyableDamageableLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface);
void CollidableDestroyableDamageableLayer_setPartInterfaceArray(CollidableDestroyableDamageableLayer* this, PartInterface** partInterfaceArray);
PartInterface** CollidableDestroyableDamageableLayer_getPartInterfaceArray(CollidableDestroyableDamageableLayer* this);
void CollidableDestroyableDamageableLayer_toStringAppend(CollidableDestroyableDamageableLayer* this, StringMaker* stringBuffer);
const char* CollidableDestroyableDamageableLayer_toString(CollidableDestroyableDamageableLayer* this);

// Static fields with runtime initializers: call this once at startup
void CollidableDestroyableDamageableLayer_staticInit(void) {
    CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER = NullUtil_getInstance()->NULL_OBJECT;
}

static void CollidableDestroyableDamageableLayer_initFields(CollidableDestroyableDamageableLayer* this) {
    
    this->readyForExplosion = false;
    
    
    this->initX = 0;
    this->initY = 0;
    this->initZ = 0;
    this->partInterfaceArrayP = PartInterfaceUtil_getZeroArray();
    
    this->allBinaryGameLayerManagerP = AllBinaryGameLayerManager_getNullInstance();
    this->isDraggable = false;
    this->isDragged = false;
    this->isDropped = false;
}


CollidableDestroyableDamageableLayer* CollidableDestroyableDamageableLayer_getNullInstance(void) {
        if (CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER == NullUtil_getInstance()->NULL_OBJECT) {
            CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER = CollidableDestroyableDamageableLayer_new(BasicGroupFactory_getInstance()->NONE_ARRAY, StringUtil_getInstance()->EMPTY_STRING, RectangleFactory_SINGLETON, ViewPositionBase_NULL_VIEW_POSITION);
        }
        return ((CollidableDestroyableDamageableLayer*) CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER);
}


void CollidableDestroyableDamageableLayer_init(CollidableDestroyableDamageableLayer* this, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
        CollidableCompositeLayer_init(&this->base, name, layerInfo, viewPosition, CollidableNeverCollideBehaviorFactory_getInstance());
        CollidableDestroyableDamageableLayer_initFields(this);
        this->initWidth = Rectangle_getWidth(layerInfo);
        this->initHeight = Rectangle_getHeight(layerInfo);
        this->groupInterface = groupInterface;
        this->pickupBehavior = PickupBehavior_getNullInstance();
}

CollidableDestroyableDamageableLayer* CollidableDestroyableDamageableLayer_new(Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    CollidableDestroyableDamageableLayer* this = calloc(1, sizeof(CollidableDestroyableDamageableLayer));
    CollidableDestroyableDamageableLayer_init(this, groupInterface, name, layerInfo, viewPosition);
    return this;
}


// throws Exception
void CollidableDestroyableDamageableLayer_initPosition(CollidableDestroyableDamageableLayer* this) {
        CollidableDestroyableDamageableLayer_setPosition(this, this->initX, this->initY, this->initZ);
}


// throws Exception
void CollidableDestroyableDamageableLayer_initPositionXYZ(CollidableDestroyableDamageableLayer* this, int32_t x, int32_t y, int32_t z) {
        this->initX = x;
        this->initY = y;
        this->initZ = z;
}


void CollidableDestroyableDamageableLayer_paint(CollidableDestroyableDamageableLayer* this, Graphics* graphics) {
        CollidableCompositeLayer_paint((&this->base), graphics);
}


// throws Exception
void CollidableDestroyableDamageableLayer_damage(CollidableDestroyableDamageableLayer* this, int32_t damage, int32_t damageType) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
int32_t CollidableDestroyableDamageableLayer_getDamage(CollidableDestroyableDamageableLayer* this, int32_t damageType) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
bool CollidableDestroyableDamageableLayer_isDestroyed(CollidableDestroyableDamageableLayer* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


Group** CollidableDestroyableDamageableLayer_getGroupInterface(CollidableDestroyableDamageableLayer* this) {
        return this->groupInterface;
}


void CollidableDestroyableDamageableLayer_setGroupInterface(CollidableDestroyableDamageableLayer* this, Group** teamInterface) {
        this->groupInterface = teamInterface;
}


// throws Exception
void CollidableDestroyableDamageableLayer_setAllBinaryGameLayerManager(CollidableDestroyableDamageableLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        this->allBinaryGameLayerManagerP = allBinaryGameLayerManager;
        if (this->allBinaryGameLayerManagerP == nullptr) {
            java_throw(java_exception_new("RuntimeException", ""));
        }
}


bool CollidableDestroyableDamageableLayer_isReadyForExplosion(CollidableDestroyableDamageableLayer* this) {
        return this->readyForExplosion;
}


void CollidableDestroyableDamageableLayer_setReadyForExplosion(CollidableDestroyableDamageableLayer* this, bool isReadyForExplosion) {
        this->readyForExplosion = isReadyForExplosion;
}


int32_t CollidableDestroyableDamageableLayer_getInitWidth(CollidableDestroyableDamageableLayer* this) {
        return this->initWidth;
}


int32_t CollidableDestroyableDamageableLayer_getInitHeight(CollidableDestroyableDamageableLayer* this) {
        return this->initHeight;
}


int32_t CollidableDestroyableDamageableLayer_getInitX(CollidableDestroyableDamageableLayer* this) {
        return this->initX;
}


int32_t CollidableDestroyableDamageableLayer_getInitY(CollidableDestroyableDamageableLayer* this) {
        return this->initY;
}


// throws Exception
void CollidableDestroyableDamageableLayer_up(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_down(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_right(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_left(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_strafeLeft(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_strafeRight(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_fire(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special1(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special2(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special3(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special4(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special5(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_upAnalog(CollidableDestroyableDamageableLayer* this, int32_t yAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_downAnalog(CollidableDestroyableDamageableLayer* this, int32_t yAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_rightAnalog(CollidableDestroyableDamageableLayer* this, int32_t xAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_leftAnalog(CollidableDestroyableDamageableLayer* this, int32_t xAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_rightTrigger(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_leftTrigger(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) {
}


void CollidableDestroyableDamageableLayer_onDestroyed(CollidableDestroyableDamageableLayer* this, DestroyedEvent* destroyedEvent) {
}


PickupBehavior* CollidableDestroyableDamageableLayer_getPickupBehavior(CollidableDestroyableDamageableLayer* this) {
        return this->pickupBehavior;
}


void CollidableDestroyableDamageableLayer_setPickupBehavior(CollidableDestroyableDamageableLayer* this, PickupBehavior* pickupBehavior) {
        this->pickupBehavior = pickupBehavior;
}


// throws Exception
void CollidableDestroyableDamageableLayer_addPart(CollidableDestroyableDamageableLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface) {
}


void CollidableDestroyableDamageableLayer_setPartInterfaceArray(CollidableDestroyableDamageableLayer* this, PartInterface** partInterfaceArray) {
        this->partInterfaceArrayP = partInterfaceArray;
}


PartInterface** CollidableDestroyableDamageableLayer_getPartInterfaceArray(CollidableDestroyableDamageableLayer* this) {
        return this->partInterfaceArrayP;
}


void CollidableDestroyableDamageableLayer_toStringAppend(CollidableDestroyableDamageableLayer* this, StringMaker* stringBuffer) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        CollidableCompositeLayer_toStringAppend((&this->base), stringBuffer);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        Group** groupInterfaceArray = CollidableDestroyableDamageableLayer_getGroupInterface(this);
        int32_t size = java_array_length(groupInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            StringMaker_append(stringBuffer, JAVA_CALL(groupInterfaceArray[index], toString));
            StringMaker_append(stringBuffer, commonSeps->COMMA);
        }
        PickupBehavior* pickupBehavior = CollidableDestroyableDamageableLayer_getPickupBehavior(this);
        if (pickupBehavior != nullptr) {
            StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
            StringMaker_append(stringBuffer, PickupBehavior_toString(pickupBehavior));
        }
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, CollidableDestroyableDamageableLayer_READYFOREXPLOSION);
        StringMaker_appendboolean(stringBuffer, this->readyForExplosion);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->commonStrings->INIT);
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_appendint(stringBuffer, this->initX);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_appendint(stringBuffer, this->initX);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_appendint(stringBuffer, this->initZ);
}


const char* CollidableDestroyableDamageableLayer_toString(CollidableDestroyableDamageableLayer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CollidableDestroyableDamageableLayer_toStringAppend(this, stringBuffer);
        return StringMaker_toString(stringBuffer);
}

