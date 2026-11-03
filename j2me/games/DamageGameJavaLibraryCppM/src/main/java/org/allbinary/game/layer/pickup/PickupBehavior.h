
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class HealthInterfaceCompositeInterface;
class CollidableCompositeLayer;
class CollidableDestroyableDamageableLayer;
class CountedLayerInterfaceFactoryPart;
class PartInterface;
class NullUtil;
class LogUtil;
class PreLogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickupBehaviorInterface.h"
class PickupProcessorInterface;
class PickedUpLayerInterfaceFactoryInterface;
class PickedUpLayerType;
class PickedUpLayerTypeFactory;
class CountedPickedUpLayerInterfaceFactoryInterface;
class PickedUpLayerInterface;
class CountedPickedUpLayerInterfaceFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickupBehavior
            : public virtual Object
        , public virtual PickupBehaviorInterface {

    public: static Object* NULL_PICKUP_BEHAVIOR;

    public: static PickupBehavior* getNullInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: int32_t countedIndex;

    private: CollidableCompositeLayer* ownerLayerInterface;

public: PickupBehavior(CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex);

    public: void doPickup(PickupProcessorInterface* pickupProcessorInterface);

    public: void doPickupLayer(PickedUpLayerInterface* pickupLayerInterface);

    /*protected*/ public: void add(CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface);

    /*protected*/ public: void addAt(CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex);

    public: CountedLayerInterfaceFactoryPart* getFirstAvailableCountedLayerInterfaceFactory(std::vector<PickedUpLayerType*> pickedUpLayerTypeArray);

                //@Throws(Exception.constructor)
            
    public: CountedLayerInterfaceFactoryPart* getCountedLayerInterfaceFactoryForSlot(int32_t slotIndex);

    public: int32_t getCountedIndex();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/health/HealthInterfaceCompositeInterface.h>)
#include <org/allbinary/game/health/HealthInterfaceCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/CollidableCompositeLayer.h>)
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h>)
#include <org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h>
#endif
#if __has_include(<org/allbinary/game/part/PartInterface.h>)
#include <org/allbinary/game/part/PartInterface.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickupBehaviorInterface.h")
#include "org/allbinary/game/layer/pickup/PickupBehaviorInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickupProcessorInterface.h")
#include "org/allbinary/game/layer/pickup/PickupProcessorInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerType.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#endif

        #endif
    
