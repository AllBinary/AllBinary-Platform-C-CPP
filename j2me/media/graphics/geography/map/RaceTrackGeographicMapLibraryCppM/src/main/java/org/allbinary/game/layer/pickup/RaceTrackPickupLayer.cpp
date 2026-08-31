
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
        



            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const NAME: string = "RaceTrackPickupLayer";

public constructor (){
            super(NAME, RemoteInfo.REMOTE_INFO, 0, CountedPickedUpLayerInterfaceFactory.NULL_COUNTED_PICKUP_LAYER_FACTORY, NullAnimationFactory.getFactoryInstance()!.getInstance(0), new Rectangle(PointFactory.getInstance()!.ZERO_ZERO, 0, 0), new TileLayerPositionIntoViewPosition());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    private: const viewPositionEventHandler: ViewPositionEventHandler = ViewPositionEventHandler.getInstance()!;

    public setTiledLayer(AllBinaryTiledLayer tiledLayer){

    viewPosition: TileLayerPositionIntoViewPosition = this.getViewPosition() as TileLayerPositionIntoViewPosition;;
    
viewPosition!.setTiledLayer(tiledLayer);
    
this.viewPositionEventHandler!.addListener(this as AllBinaryLayer);
    
}


    public setDestroyed(bool destroyed){
super.setDestroyed(destroyed);
    

                        if(this.isDestroyed())
                        
                                    {
                                    this.viewPositionEventHandler!.removeListener(this);
    

                                    }
                                
}


};

            

