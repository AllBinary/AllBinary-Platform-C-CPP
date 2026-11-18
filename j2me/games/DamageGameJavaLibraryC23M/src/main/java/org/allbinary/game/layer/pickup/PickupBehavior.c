// Generated Code Do Not Modify
#include "org/allbinary/game/layer/pickup/PickupBehavior.h"
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
#include "org/allbinary/game/layer/pickup/PickupProcessorInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/Health.h")
#include "org/allbinary/game/layer/pickup/Health.h"
#endif
#if __has_include("org/allbinary/game/health/Health.h")
#include "org/allbinary/game/health/Health.h"
#endif
#if __has_include("org/allbinary/game/layer/Health.h")
#include "org/allbinary/game/layer/Health.h"
#endif
#if __has_include("org/allbinary/game/layer/special/Health.h")
#include "org/allbinary/game/layer/special/Health.h"
#endif
#if __has_include("org/allbinary/game/part/Health.h")
#include "org/allbinary/game/part/Health.h"
#endif
#if __has_include("org/allbinary/game/part/Health.h")
#include "org/allbinary/game/part/Health.h"
#endif
#if __has_include("org/allbinary/logic/Health.h")
#include "org/allbinary/logic/Health.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Health.h")
#include "org/allbinary/logic/communication/log/Health.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/Health.h")
#include "org/allbinary/logic/communication/log/Health.h"
#endif
#if __has_include("org/allbinary/string/Health.h")
#include "org/allbinary/string/Health.h"
#endif


void* PickupBehavior_NULL_PICKUP_BEHAVIOR;










void PickupBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PickupBehavior_NULL_PICKUP_BEHAVIOR = NullUtil_getInstance()->NULL_OBJECT;
}

void PickupBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PickupBehavior", nullptr);
    java_register_method("PickupBehavior", "doPickup", (void*) PickupBehavior_doPickup);
    java_register_method("PickupBehavior", "doPickupLayer", (void*) PickupBehavior_doPickupLayer);
    java_register_method("PickupBehavior", "add", (void*) PickupBehavior_add);
    java_register_method("PickupBehavior", "addAt", (void*) PickupBehavior_addAt);
    java_register_method("PickupBehavior", "getFirstAvailableCountedLayerInterfaceFactory", (void*) PickupBehavior_getFirstAvailableCountedLayerInterfaceFactory);
    java_register_method("PickupBehavior", "getCountedLayerInterfaceFactoryForSlot", (void*) PickupBehavior_getCountedLayerInterfaceFactoryForSlot);
    java_register_method("PickupBehavior", "getCountedIndex", (void*) PickupBehavior_getCountedIndex);
}

static void PickupBehavior_initFields(PickupBehavior* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


PickupBehavior* PickupBehavior_getNullInstance(void) {
        if ((PickupBehavior_staticInit(), PickupBehavior_NULL_PICKUP_BEHAVIOR) == NullUtil_getInstance()->NULL_OBJECT) {
            PickupBehavior_NULL_PICKUP_BEHAVIOR = PickupBehavior_new(CollidableCompositeLayer_getNullInstance(), 0);
        }
        return ((PickupBehavior*) (PickupBehavior_staticInit(), PickupBehavior_NULL_PICKUP_BEHAVIOR));
}


void PickupBehavior_init(PickupBehavior* this, CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex) {
    PickupBehavior_register();
    PickupBehavior_initFields(this);
        this->ownerLayerInterface = ownerLayerInterface;
        this->countedIndex = countedIndex;
}

PickupBehavior* PickupBehavior_new(CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex) {
    PickupBehavior* this = java_object_alloc(sizeof(PickupBehavior), "PickupBehavior");
    PickupBehavior_init(this, ownerLayerInterface, countedIndex);
    return this;
}


void PickupBehavior_doPickup(PickupBehavior* this, PickupProcessorInterface* pickupProcessorInterface) {
        JAVA_TRY {
            HealthInterfaceCompositeInterface* healthInterfaceCompositeInterface = ((HealthInterfaceCompositeInterface*) this->ownerLayerInterface);
            if (Health_isAlive(HealthInterfaceCompositeInterface_getHealthInterface(healthInterfaceCompositeInterface))) {
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
                if (PickedUpLayerInterfaceFactory_getPickedUpLayerType(countedPickedUpLayerInterfaceFactory) == pickedUpLayerTypeArray[index2]) {
                    if (CountedLayerInterfaceFactoryPart_getTotal(nextCountedLayerInterfaceFactory) > 0) {
                        return nextCountedLayerInterfaceFactory;
                    }
                }
            }
        }
        return (CountedLayerInterfaceFactoryPart_staticInit(), CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY);
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
        return (CountedLayerInterfaceFactoryPart_staticInit(), CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY);
}


int32_t PickupBehavior_getCountedIndex(PickupBehavior* this) {
        return this->countedIndex;
}

