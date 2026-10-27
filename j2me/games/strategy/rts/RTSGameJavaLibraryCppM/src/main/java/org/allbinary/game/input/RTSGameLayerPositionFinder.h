
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

class RTSGameLayerPositionFinder
            : public Object
        , public LayerPositionFinderInterface {

    private: static RTSGameLayerPositionFinder* instance() { static std::unique_ptr<RTSGameLayerPositionFinder> value(new RTSGameLayerPositionFinder()); return value.get(); }

    public: static RTSGameLayerPositionFinder* getInstance();

private: RTSGameLayerPositionFinder();

    public: AllBinaryLayer* getLayerInterface(GeographicMapCellPosition* geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_RTSGAMELAYERPOSITIONFINDER_H
