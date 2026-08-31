
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_H
        #define ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerPositionFinderInterface.h"

class RTSGameLayerPositionFinder
            : public Object
        : public LayerPositionFinderInterface {
        

    private: static const instance: RTSGameLayerPositionFinder = new RTSGameLayerPositionFinder();

    public static RTSGameLayerPositionFinder getInstance();

private constructor ();

    public AllBinaryLayer getLayerInterface(GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_H
