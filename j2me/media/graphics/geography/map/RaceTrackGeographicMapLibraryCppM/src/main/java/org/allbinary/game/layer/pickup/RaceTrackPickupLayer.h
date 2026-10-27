
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class NullAnimationFactory;

class AllBinaryTiledLayer;
class RemoteInfo;
class TileLayerPositionIntoViewPosition;
class PointFactory;
class Rectangle;
class AllBinaryLayer;

class ViewPositionEventHandler;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickupLayer.h"
class CountedPickedUpLayerInterfaceFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RaceTrackPickupLayer: public PickupLayer {

    private: static inline const std::string NAME = "RaceTrackPickupLayer";

public: RaceTrackPickupLayer();

    private: ViewPositionEventHandler* viewPositionEventHandler;

    public: void setTiledLayer(AllBinaryTiledLayer* tiledLayer);

    public: void setDestroyed(bool destroyed);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_H_COMPLETE
        #if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif

#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/multiplayer/layer/RemoteInfo.h>)
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>
#endif
#if __has_include(<org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>)
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif

#if __has_include(<org/allbinary/view/event/ViewPositionEventHandler.h>)
#include <org/allbinary/view/event/ViewPositionEventHandler.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickupLayer.h")
#include "org/allbinary/game/layer/pickup/PickupLayer.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#endif

        #endif
    
