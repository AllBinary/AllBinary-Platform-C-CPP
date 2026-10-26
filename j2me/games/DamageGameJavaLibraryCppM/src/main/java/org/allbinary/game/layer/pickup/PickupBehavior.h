
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/health/HealthInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h>

      
#include <org/allbinary/game/part/PartInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickupBehaviorInterface.h"
#include "PickupProcessorInterface.h"
#include "PickedUpLayerInterfaceFactoryInterface.h"
#include "PickedUpLayerType.h"
#include "PickedUpLayerTypeFactory.h"
#include "CountedPickedUpLayerInterfaceFactoryInterface.h"
#include "PickedUpLayerInterface.h"
#include "CountedPickedUpLayerInterfaceFactory.h"

class PickupBehavior
            : public Object
        : public PickupBehaviorInterface {

    public: static Object* NULL_PICKUP_BEHAVIOR = NullUtil::getInstance().NULL_OBJECT;

    public: static PickupBehavior getNullInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: int32_t countedIndex;

    private: CollidableCompositeLayer ownerLayerInterface;

public: PickupBehavior(CollidableCompositeLayer ownerLayerInterface, int32_t countedIndex);

    public: void doPickup(PickupProcessorInterface pickupProcessorInterface);

    public: void doPickupLayer(PickedUpLayerInterface pickupLayerInterface);

    protected: void add(CountedPickedUpLayerInterfaceFactoryInterface countedPickedUpLayerInterfaceFactoryInterface);

    protected: void addAt(CountedPickedUpLayerInterfaceFactoryInterface countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex);

    public: CountedLayerInterfaceFactoryPart getFirstAvailableCountedLayerInterfaceFactory(std::vector<PickedUpLayerType> pickedUpLayerTypeArray);

                //@Throws(Exception.constructor)
            
    public: CountedLayerInterfaceFactoryPart getCountedLayerInterfaceFactoryForSlot(int32_t slotIndex);

    public: int32_t getCountedIndex();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H
