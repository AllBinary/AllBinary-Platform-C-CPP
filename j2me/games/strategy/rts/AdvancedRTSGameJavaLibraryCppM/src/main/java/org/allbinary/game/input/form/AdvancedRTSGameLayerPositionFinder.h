
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_ADVANCEDRTSGAMELAYERPOSITIONFINDER_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_ADVANCEDRTSGAMELAYERPOSITIONFINDER_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/LayerPositionFinderInterface.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AdvancedRTSGameLayerPositionFinder
            : public Object
        : public LayerPositionFinderInterface {

    private: static AdvancedRTSGameLayerPositionFinder instance() { return AdvancedRTSGameLayerPositionFinder(); }

    public: static AdvancedRTSGameLayerPositionFinder getInstance();

private: AdvancedRTSGameLayerPositionFinder();

    public: AllBinaryLayer getLayerInterface(GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_ADVANCEDRTSGAMELAYERPOSITIONFINDER_H
