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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/collision/CollidableInterface.h"

typedef struct CollidableBaseBehavior CollidableBaseBehavior;
struct CollidableBaseBehavior {
    CollidableInterface CollidableInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    LayerCollisionUtil* layerCollisionUtil;
    bool collidable;
};


CollidableBaseBehavior* CollidableBaseBehavior_new(bool collidable);

void CollidableBaseBehavior_init(CollidableBaseBehavior* this, bool collidable);
void CollidableBaseBehavior_update(CollidableBaseBehavior* this);
const char* CollidableBaseBehavior_getName(CollidableBaseBehavior* this);
void CollidableBaseBehavior_setCollidable(CollidableBaseBehavior* this, bool collidable);
bool CollidableBaseBehavior_isCollidable(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer);
void CollidableBaseBehavior_collide(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* allbinaryCollidableLayer);
bool CollidableBaseBehavior_isCollision(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collisionLayer);
bool CollidableBaseBehavior_isCollisionInterface(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
void CollidableBaseBehavior_collideInterface(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
void CollidableBaseBehavior_paint(CollidableBaseBehavior* this, CollidableCompositeLayer* ownerLayer, Graphics* graphics);
CollisionType* CollidableBaseBehavior_getCollisionTypeWith(CollidableBaseBehavior* this, AllBinaryLayer* layerInterface);

static void CollidableBaseBehavior_initFields(CollidableBaseBehavior* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->layerCollisionUtil = LayerCollisionUtil_getInstance();
    this->collidable = true;
}


void CollidableBaseBehavior_init(CollidableBaseBehavior* this, bool collidable) {
    CollidableBaseBehavior_initFields(this);
        this->collidable = collidable;
}

CollidableBaseBehavior* CollidableBaseBehavior_new(bool collidable) {
    CollidableBaseBehavior* this = calloc(1, sizeof(CollidableBaseBehavior));
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
        java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->NOT_IMPLEMENTED), append, CommonLabels_getInstance()->COLON_SEP), append, java_class_of(this)), toString)));
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

