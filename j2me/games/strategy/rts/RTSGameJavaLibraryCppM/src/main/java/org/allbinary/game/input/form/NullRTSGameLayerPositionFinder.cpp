
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/LayerPositionFinderInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullRTSGameLayerPositionFinder
            : public Object
        : public LayerPositionFinderInterface {
        

    private: static const instance: NullRTSGameLayerPositionFinder = new NullRTSGameLayerPositionFinder();

    public static NullRTSGameLayerPositionFinder getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRTSGameLayerPositionFinder.instance;
    
}


protected constructor (){

            super();
        }


    public AllBinaryLayer getLayerInterface(GeographicMapCellPosition geographicMapCellPosition){

    layerInterface: AllBinaryLayer = DropCellPositionHistory.getInstance()!.getLayerInterface(geographicMapCellPosition)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return layerInterface;
    
}


};

            

