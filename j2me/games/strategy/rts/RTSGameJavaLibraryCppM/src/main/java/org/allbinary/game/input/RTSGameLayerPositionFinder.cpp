
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerPositionFinderInterface.h"

class RTSGameLayerPositionFinder
            : public Object
        : public LayerPositionFinderInterface {

    private: static RTSGameLayerPositionFinder instance() { return RTSGameLayerPositionFinder(); }

    public: static RTSGameLayerPositionFinder getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSGameLayerPositionFinder::instance();
    
}


private: RTSGameLayerPositionFinder(){
}


    public: AllBinaryLayer getLayerInterface(GeographicMapCellPosition geographicMapCellPosition){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropCellPositionHistory::getInstance().getLayerInterface(geographicMapCellPosition);;
    
}


};

            

