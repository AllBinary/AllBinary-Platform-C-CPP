
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H

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

    public static NullRTSGameLayerPositionFinder getInstance();

protected constructor ();

    public AllBinaryLayer getLayerInterface(GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_NULLRTSGAMELAYERPOSITIONFINDER_H
