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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/game/collision/CollidableInterfaceCompositeInterface.h"
#include "org/allbinary/game/collision/CollisionType.h"
#include "org/allbinary/game/collision/CollisionTypeFactory.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableBehavior.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"

typedef struct CollidableVehicleBehavior CollidableVehicleBehavior;
struct CollidableVehicleBehavior {
    CollidableDestroyableDamageableBehavior base;
    int64_t totalImpactVelocity;
    int64_t halfImpactVelocityX;
    int64_t halfImpactVelocityY;
};


CollidableVehicleBehavior* CollidableVehicleBehavior_new(bool collidable);

void CollidableVehicleBehavior_init(CollidableVehicleBehavior* this, bool collidable);
void CollidableVehicleBehavior_collide(CollidableVehicleBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface);
void CollidableVehicleBehavior_collideInterface(CollidableVehicleBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface);
void CollidableVehicleBehavior_collideVehicle(CollidableVehicleBehavior* this, CollidableCompositeLayer* ownerLayer, VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface);
static void CollidableVehicleBehavior_collideFriction(CollidableVehicleBehavior* this, VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface);

static void CollidableVehicleBehavior_initFields(CollidableVehicleBehavior* this) {
    this->totalImpactVelocity = 0LL;
    this->halfImpactVelocityX = 0;
    this->halfImpactVelocityY = 0;
}


void CollidableVehicleBehavior_init(CollidableVehicleBehavior* this, bool collidable) {
        CollidableDestroyableDamageableBehavior_init(&this->base, collidable);
        CollidableVehicleBehavior_initFields(this);
}

CollidableVehicleBehavior* CollidableVehicleBehavior_new(bool collidable) {
    CollidableVehicleBehavior* this = calloc(1, sizeof(CollidableVehicleBehavior));
    CollidableVehicleBehavior_init(this, collidable);
    return this;
}


// throws Exception
void CollidableVehicleBehavior_collide(CollidableVehicleBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableCompositeLayer* collidableInterfaceCompositeInterface) {
        CollisionTypeFactory* collisionTypeFactory = CollisionTypeFactory_getInstance();
        CollisionType* collisionType = JAVA_CALL(CollidableCompositeLayer_getCollidableInferface(collidableInterfaceCompositeInterface), getCollisionTypeWith, ownerLayer);
        if (collisionType == collisionTypeFactory->PICKUP) {
            CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = (((CollidableDestroyableDamageableLayer*) ownerLayer));
            JAVA_CALL(CollidableDestroyableDamageableLayer_getPickupBehavior(collidableDestroyableDamageableLayer), doPickupLayer, ((PickedUpLayerInterface*) collidableInterfaceCompositeInterface));
        } else if (collisionType == collisionTypeFactory->COLLISION) {
            CollidableDestroyableDamageableBehavior_collide((&this->base), ownerLayer, collidableInterfaceCompositeInterface);
        } else {
            CollidableVehicleBehavior_collideVehicle(this, ownerLayer, ((VehiclePropertiesCompositeInterface*) collidableInterfaceCompositeInterface));
        }
}


void CollidableVehicleBehavior_collideInterface(CollidableVehicleBehavior* this, CollidableCompositeLayer* ownerLayer, CollidableInterfaceCompositeInterface* collidableInterfaceCompositeInterface) {
        ForcedLogUtil_log("Don't Use Interface Version It Is Slower", this);
}


void CollidableVehicleBehavior_collideVehicle(CollidableVehicleBehavior* this, CollidableCompositeLayer* ownerLayer, VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface) {
        VehiclePropertiesCompositeInterface* ownerVehicleLayerInterface = (((VehiclePropertiesCompositeInterface*) ownerLayer));
        VehicleProperties* ownerVehicleProperties = VehiclePropertiesCompositeInterface_getVehicleProperties(ownerVehicleLayerInterface);
        VehicleProperties* vehicleProperties = VehiclePropertiesCompositeInterface_getVehicleProperties(vehiclePropertiesCompositeInterface);
        int64_t impactVelocityX = JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(ownerVehicleProperties), getVelocityXBasicDecimalP), getUnscaled) - JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(vehicleProperties), getVelocityXBasicDecimalP), getUnscaled);
        int64_t impactVelocityY = JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(ownerVehicleProperties), getVelocityYBasicDecimalP), getUnscaled) - JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(vehicleProperties), getVelocityYBasicDecimalP), getUnscaled);
        if (impactVelocityX != 0LL) {
            this->halfImpactVelocityX = (impactVelocityX >> 1);
            JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(ownerVehicleProperties), getVelocityXBasicDecimalP), addlong, this->halfImpactVelocityX);
            JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(vehicleProperties), getVelocityXBasicDecimalP), addlong, this->halfImpactVelocityX);
        } else {
        }
        if (impactVelocityY != 0LL) {
            this->halfImpactVelocityY = (impactVelocityY >> 1);
            JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(ownerVehicleProperties), getVelocityYBasicDecimalP), addlong, this->halfImpactVelocityY);
            JAVA_CALL(JAVA_CALL(VehicleProperties_getVelocityProperties(vehicleProperties), getVelocityXBasicDecimalP), addlong, this->halfImpactVelocityY);
        } else {
        }
        CollidableVehicleBehavior_collideFriction(this, ownerVehicleLayerInterface);
        CollidableVehicleBehavior_collideFriction(this, vehiclePropertiesCompositeInterface);
        this->totalImpactVelocity = impactVelocityX + impactVelocityY;
}


static void CollidableVehicleBehavior_collideFriction(CollidableVehicleBehavior* this, VehiclePropertiesCompositeInterface* vehiclePropertiesCompositeInterface) {
        VehicleFrictionProperties* vehicleFrictionProperties = JAVA_CALL(VehiclePropertiesCompositeInterface_getVehicleProperties(vehiclePropertiesCompositeInterface), getVehicleFrictionProperties);
        JAVA_CALL(JAVA_CALL(VehiclePropertiesCompositeInterface_getVehicleProperties(vehiclePropertiesCompositeInterface), getVehicleFrictionProperties), friction, JAVA_CALL(VehiclePropertiesCompositeInterface_getVehicleProperties(vehiclePropertiesCompositeInterface), getVelocityProperties), VehicleFrictionProperties_getCrashFrictionNominator(vehicleFrictionProperties));
}

