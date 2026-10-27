
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/RaceTrackPickupLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/game/layer/pickup/PickupLayer.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"


RaceTrackPickupLayer::RaceTrackPickupLayer() : PickupLayer(NAME, RemoteInfo::REMOTE_INFO, 0, CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY, NullAnimationFactory::getFactoryInstance()->getInstance(0), new Rectangle(PointFactory::getInstance()->ZERO_ZERO, 0, 0), new TileLayerPositionIntoViewPosition()), viewPositionEventHandler(ViewPositionEventHandler::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto RaceTrackPickupLayer::setTiledLayer(AllBinaryTiledLayer* tiledLayer) -> void{

    TileLayerPositionIntoViewPosition* viewPosition = dynamic_cast<TileLayerPositionIntoViewPosition*>(this->getViewPosition());;
    
viewPosition->setTiledLayer(tiledLayer);
    
this->viewPositionEventHandler->addListener(dynamic_cast<AllBinaryLayer*>(this));
    
}


    auto RaceTrackPickupLayer::setDestroyed(bool destroyed) -> void{
PickupLayer::setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    this->viewPositionEventHandler->removeListener(this);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_RACETRACKPICKUPLAYER_CPP
