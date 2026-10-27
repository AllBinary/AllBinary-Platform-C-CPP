
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/NullRTSGameLayerPositionFinder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/LayerPositionFinderInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto NullRTSGameLayerPositionFinder::instance_owner() -> NullRTSGameLayerPositionFinder* { static std::unique_ptr<NullRTSGameLayerPositionFinder> value(new NullRTSGameLayerPositionFinder()); return value.get(); }
NullRTSGameLayerPositionFinder* NullRTSGameLayerPositionFinder::instance = NullRTSGameLayerPositionFinder::instance_owner();

    auto NullRTSGameLayerPositionFinder::getInstance() -> NullRTSGameLayerPositionFinder*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRTSGameLayerPositionFinder::instance;
    
}


NullRTSGameLayerPositionFinder::NullRTSGameLayerPositionFinder(){
}


    auto NullRTSGameLayerPositionFinder::getLayerInterface(GeographicMapCellPosition* geographicMapCellPosition) -> AllBinaryLayer*{

    AllBinaryLayer* layerInterface = DropCellPositionHistory::getInstance()->getLayerInterface(geographicMapCellPosition);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return layerInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_CPP
