
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

class RaceTrackPickupLayer: public PickupLayer {

    private: static inline const std::string NAME = "RaceTrackPickupLayer";

public: RaceTrackPickupLayer() : PickupLayer(NAME, RemoteInfo::REMOTE_INFO, 0, CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY, NullAnimationFactory::getFactoryInstance()->getInstance(0), new Rectangle(PointFactory::getInstance()->ZERO_ZERO, 0, 0), new TileLayerPositionIntoViewPosition()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: ViewPositionEventHandler* viewPositionEventHandler = ViewPositionEventHandler::getInstance();

    public: void setTiledLayer(AllBinaryTiledLayer* tiledLayer){

    TileLayerPositionIntoViewPosition* viewPosition = dynamic_cast<TileLayerPositionIntoViewPosition*>(this->getViewPosition());;
    
viewPosition->setTiledLayer(tiledLayer);
    
this->viewPositionEventHandler->addListener(dynamic_cast<AllBinaryLayer*>(this));
    
}


    public: void setDestroyed(bool destroyed){
super.setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    this->viewPositionEventHandler->removeListener(this);
    

                                    }
                                
}


};

            

