
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_ADVANCEDRTSGAMELAYERPOSITIONFINDER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_ADVANCEDRTSGAMELAYERPOSITIONFINDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/AdvancedRTSGameLayerPositionFinder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/LayerPositionFinderInterface.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AdvancedRTSGameLayerPositionFinder::instance_owner() -> AdvancedRTSGameLayerPositionFinder* { static std::unique_ptr<AdvancedRTSGameLayerPositionFinder> value(new AdvancedRTSGameLayerPositionFinder()); return value.get(); }
AdvancedRTSGameLayerPositionFinder* AdvancedRTSGameLayerPositionFinder::instance = AdvancedRTSGameLayerPositionFinder::instance_owner();

    auto AdvancedRTSGameLayerPositionFinder::getInstance() -> AdvancedRTSGameLayerPositionFinder*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdvancedRTSGameLayerPositionFinder::instance;
    
}


AdvancedRTSGameLayerPositionFinder::AdvancedRTSGameLayerPositionFinder(){
}


    auto AdvancedRTSGameLayerPositionFinder::getLayerInterface(GeographicMapCellPosition* geographicMapCellPosition) -> AllBinaryLayer*{

    AllBinaryLayer* layerInterface = DropCellPositionHistory::getInstance()->getLayerInterface(geographicMapCellPosition);;
    

                        if(layerInterface == AllBinaryLayer::NULL_ALLBINARY_LAYER)
                        
                                    {
                                    layerInterface= WaypointCellPositionHistory::getInstance()->getLayerInterface(geographicMapCellPosition);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return layerInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_ADVANCEDRTSGAMELAYERPOSITIONFINDER_CPP
