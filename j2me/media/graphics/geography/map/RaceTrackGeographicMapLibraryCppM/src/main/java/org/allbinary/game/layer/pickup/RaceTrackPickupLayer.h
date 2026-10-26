
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/event/ViewPositionEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickupLayer.h"
#include "CountedPickedUpLayerInterfaceFactory.h"

class RaceTrackPickupLayer: public PickupLayer {

    private: static const std::string NAME = "RaceTrackPickupLayer";

public: RaceTrackPickupLayer();

    private: const ViewPositionEventHandler viewPositionEventHandler = ViewPositionEventHandler::getInstance();

    public: void setTiledLayer(AllBinaryTiledLayer tiledLayer);

    public: void setDestroyed(bool destroyed);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_H
