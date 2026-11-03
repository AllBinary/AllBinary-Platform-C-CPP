
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/RTSGameLayerPositionFinder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/LayerPositionFinderInterface.h"

auto RTSGameLayerPositionFinder::instance_owner() -> RTSGameLayerPositionFinder* { static std::unique_ptr<RTSGameLayerPositionFinder> value(new RTSGameLayerPositionFinder()); return value.get(); }
RTSGameLayerPositionFinder* RTSGameLayerPositionFinder::instance = RTSGameLayerPositionFinder::instance_owner();

    auto RTSGameLayerPositionFinder::getInstance() -> RTSGameLayerPositionFinder*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RTSGameLayerPositionFinder::instance;
    
}


RTSGameLayerPositionFinder::RTSGameLayerPositionFinder(){
}


    auto RTSGameLayerPositionFinder::getLayerInterface(GeographicMapCellPosition* geographicMapCellPosition) -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DropCellPositionHistory::getInstance()->getLayerInterface(geographicMapCellPosition);;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_CPP
