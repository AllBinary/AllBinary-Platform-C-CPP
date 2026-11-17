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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/health/HealthInterfaceCompositeInterface.h"
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/layer/pickup/PickupBehaviorInterface.h"

typedef struct PickupBehavior PickupBehavior;
struct PickupBehavior {
    PickupBehaviorInterface PickupBehaviorInterface_interface;
    LogUtil* logUtil;
    int32_t countedIndex;
    CollidableCompositeLayer* ownerLayerInterface;
};

Any* PickupBehavior_NULL_PICKUP_BEHAVIOR;

PickupBehavior* PickupBehavior_new(CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex);
PickupBehavior* PickupBehavior_getNullInstance(void);

void PickupBehavior_init(PickupBehavior* this, CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex);
void PickupBehavior_doPickup(PickupBehavior* this, PickupProcessorInterface* pickupProcessorInterface);
void PickupBehavior_doPickupLayer(PickupBehavior* this, PickedUpLayerInterface* pickupLayerInterface);
void PickupBehavior_add(PickupBehavior* this, CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface);
void PickupBehavior_addAt(PickupBehavior* this, CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex);
CountedLayerInterfaceFactoryPart* PickupBehavior_getFirstAvailableCountedLayerInterfaceFactory(PickupBehavior* this, PickedUpLayerType** pickedUpLayerTypeArray);
CountedLayerInterfaceFactoryPart* PickupBehavior_getCountedLayerInterfaceFactoryForSlot(PickupBehavior* this, int32_t slotIndex);
int32_t PickupBehavior_getCountedIndex(PickupBehavior* this);

// Static fields with runtime initializers: call this once at startup
void PickupBehavior_staticInit(void) {
    PickupBehavior_NULL_PICKUP_BEHAVIOR = NullUtil_getInstance()->NULL_OBJECT;
}

static void PickupBehavior_initFields(PickupBehavior* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


PickupBehavior* PickupBehavior_getNullInstance(void) {
        if (PickupBehavior_NULL_PICKUP_BEHAVIOR == NullUtil_getInstance()->NULL_OBJECT) {
            PickupBehavior_NULL_PICKUP_BEHAVIOR = PickupBehavior_new(CollidableCompositeLayer_getNullInstance(), 0);
        }
        return ((PickupBehavior*) PickupBehavior_NULL_PICKUP_BEHAVIOR);
}


void PickupBehavior_init(PickupBehavior* this, CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex) {
    PickupBehavior_initFields(this);
        this->ownerLayerInterface = ownerLayerInterface;
        this->countedIndex = countedIndex;
}

PickupBehavior* PickupBehavior_new(CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex) {
    PickupBehavior* this = calloc(1, sizeof(PickupBehavior));
    PickupBehavior_init(this, ownerLayerInterface, countedIndex);
    return this;
}


void PickupBehavior_doPickup(PickupBehavior* this, PickupProcessorInterface* pickupProcessorInterface) {
        JAVA_TRY {
            HealthInterfaceCompositeInterface* healthInterfaceCompositeInterface = ((HealthInterfaceCompositeInterface*) this->ownerLayerInterface);
            if (JAVA_CALL(HealthInterfaceCompositeInterface_getHealthInterface(healthInterfaceCompositeInterface), isAlive)) {
                PickupProcessorInterface_process(pickupProcessorInterface, this->ownerLayerInterface);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "doPickup", e);
        } JAVA_END_TRY;
}


void PickupBehavior_doPickupLayer(PickupBehavior* this, PickedUpLayerInterface* pickupLayerInterface) {
        JAVA_TRY {
            PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface = PickedUpLayerInterface_getPickedUpLayerInterfaceFactoryInterface(pickupLayerInterface);
            PickedUpLayerType* pickedUpLayerType = PickedUpLayerInterfaceFactoryInterface_getPickedUpLayerType(pickedUpLayerInterfaceFactoryInterface);
            PickedUpLayerTypeFactory* pickedUpLayerTypeFactory = PickedUpLayerTypeFactory_getInstance();
            if (pickedUpLayerType == pickedUpLayerTypeFactory->BEAM || pickedUpLayerType == pickedUpLayerTypeFactory->MINE || pickedUpLayerType == pickedUpLayerTypeFactory->PROJECTILE || pickedUpLayerType == pickedUpLayerTypeFactory->ENHANCEMENT) {
                PickupBehavior_add(this, ((CountedPickedUpLayerInterfaceFactoryInterface*) pickedUpLayerInterfaceFactoryInterface));
            } else if (PickedUpLayerInterfaceFactoryInterface_getPickedUpLayerType(pickedUpLayerInterfaceFactoryInterface) == pickedUpLayerTypeFactory->PART) {
                CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) this->ownerLayerInterface);
                CollidableDestroyableDamageableLayer_addPart(collidableDestroyableDamageableLayer, pickedUpLayerInterfaceFactoryInterface);
            } else if (pickedUpLayerType == pickedUpLayerTypeFactory->NONE) {
            } else {
                PickupProcessorInterface* pickupProcessorInterface = ((PickupProcessorInterface*) pickedUpLayerInterfaceFactoryInterface);
                PickupBehavior_doPickup(this, pickupProcessorInterface);
            }
            PickedUpLayerInterface_setPickedUp(pickupLayerInterface);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, "doPickup", e);
        } JAVA_END_TRY;
}


void PickupBehavior_add(PickupBehavior* this, CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface) {
        int32_t partIndex = CountedPickedUpLayerInterfaceFactoryInterface_getId(countedPickedUpLayerInterfaceFactoryInterface) + this->countedIndex;
        PickupBehavior_addAt(this, countedPickedUpLayerInterfaceFactoryInterface, partIndex);
}


void PickupBehavior_addAt(PickupBehavior* this, CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex) {
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) this->ownerLayerInterface);
        CountedLayerInterfaceFactoryPart* countedLayerInterfaceFactory = ((CountedLayerInterfaceFactoryPart*) CollidableDestroyableDamageableLayer_getPartInterfaceArray(collidableDestroyableDamageableLayer)[partIndex]);
        CountedLayerInterfaceFactoryPart_setTotal(countedLayerInterfaceFactory, CountedLayerInterfaceFactoryPart_getTotal(countedLayerInterfaceFactory) + CountedPickedUpLayerInterfaceFactoryInterface_getTotal(countedPickedUpLayerInterfaceFactoryInterface));
}


CountedLayerInterfaceFactoryPart* PickupBehavior_getFirstAvailableCountedLayerInterfaceFactory(PickupBehavior* this, PickedUpLayerType** pickedUpLayerTypeArray) {
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) this->ownerLayerInterface);
        PartInterface** partInterfaceArray = CollidableDestroyableDamageableLayer_getPartInterfaceArray(collidableDestroyableDamageableLayer);
        int32_t size = java_array_length(partInterfaceArray);
        CountedLayerInterfaceFactoryPart* nextCountedLayerInterfaceFactory = nullptr;
        CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory = nullptr;
        for (int32_t index = this->countedIndex; index < size; index++) {
            nextCountedLayerInterfaceFactory = ((CountedLayerInterfaceFactoryPart*) CollidableDestroyableDamageableLayer_getPartInterfaceArray(collidableDestroyableDamageableLayer)[index]);
            countedPickedUpLayerInterfaceFactory = CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(nextCountedLayerInterfaceFactory);
            for (int32_t index2 = java_array_length(pickedUpLayerTypeArray); --index2 >= 0; ) {
                if (CountedPickedUpLayerInterfaceFactory_getPickedUpLayerType(countedPickedUpLayerInterfaceFactory) == pickedUpLayerTypeArray[index2]) {
                    if (CountedLayerInterfaceFactoryPart_getTotal(nextCountedLayerInterfaceFactory) > 0) {
                        return nextCountedLayerInterfaceFactory;
                    }
                }
            }
        }
        return CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY;
}


// throws Exception
CountedLayerInterfaceFactoryPart* PickupBehavior_getCountedLayerInterfaceFactoryForSlot(PickupBehavior* this, int32_t slotIndex) {
        int32_t currentSlot = 0;
        CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = ((CollidableDestroyableDamageableLayer*) this->ownerLayerInterface);
        PartInterface** partInterfaceArray = CollidableDestroyableDamageableLayer_getPartInterfaceArray(collidableDestroyableDamageableLayer);
        int32_t size = java_array_length(partInterfaceArray);
        CountedLayerInterfaceFactoryPart* nextCountedLayerInterfaceFactory = nullptr;
        for (int32_t index = this->countedIndex; index < size; index++) {
            nextCountedLayerInterfaceFactory = ((CountedLayerInterfaceFactoryPart*) CollidableDestroyableDamageableLayer_getPartInterfaceArray(collidableDestroyableDamageableLayer)[index]);
            if (CountedLayerInterfaceFactoryPart_getTotal(nextCountedLayerInterfaceFactory) > 0) {
                if (currentSlot == slotIndex) {
                    return nextCountedLayerInterfaceFactory;
                } else {
                    currentSlot++;
                }
            }
        }
        return CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY;
}


int32_t PickupBehavior_getCountedIndex(PickupBehavior* this) {
        return this->countedIndex;
}

