
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class NullAnimationFactory;
class CountedPickedUpLayerInterfaceFactory;
#include <org/allbinary/game/layer/pickup/PickupLayer.h>
class RemoteInfo;
#include <org/allbinary/game/tick/TickableInterface.h>
class PointFactory;
class Rectangle;
class AllBinaryLayerManager;
class ViewPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FallingPickupLayer: public PickupLayer, public virtual TickableInterface {

    private: static inline const std::string NAME = "FallingPickupLayer";

public: FallingPickupLayer(RemoteInfo* remoteInfo);

    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager);

    public: bool implmentsTickableInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_FALLINGPICKUPLAYER_H_COMPLETE
        #if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>)
#include <org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickupLayer.h>)
#include <org/allbinary/game/layer/pickup/PickupLayer.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/game/tick/TickableInterface.h>)
#include <org/allbinary/game/tick/TickableInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/view/ViewPosition.h>)
#include <org/allbinary/view/ViewPosition.h>
#endif

        #endif
    
