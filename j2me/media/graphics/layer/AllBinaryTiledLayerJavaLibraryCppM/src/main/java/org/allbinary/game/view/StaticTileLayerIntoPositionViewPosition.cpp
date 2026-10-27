
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
        



        #ifndef ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERINTOPOSITIONVIEWPOSITION_CPP
        #define ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERINTOPOSITIONVIEWPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/view/StaticTileLayerIntoPositionViewPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/NullLayer.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Layer* StaticTileLayerIntoPositionViewPosition::tiledLayer = NullLayer::getInstance();
AllBinaryLayer* StaticTileLayerIntoPositionViewPosition::layer = AllBinaryLayer::NULL_ALLBINARY_LAYER;

StaticTileLayerIntoPositionViewPosition::StaticTileLayerIntoPositionViewPosition() : ViewPosition(0, 0, 0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto StaticTileLayerIntoPositionViewPosition::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ViewPosition::getX() -StaticTileLayerIntoPositionViewPosition::tiledLayer->getXP();
    
}


    auto StaticTileLayerIntoPositionViewPosition::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ViewPosition::getY() -StaticTileLayerIntoPositionViewPosition::tiledLayer->getYP();
    
}


    auto StaticTileLayerIntoPositionViewPosition::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ViewPosition::getZ() -StaticTileLayerIntoPositionViewPosition::tiledLayer->getZP();
    
}


    auto StaticTileLayerIntoPositionViewPosition::setTiledLayer(AllBinaryTiledLayer* tiledLayer) -> void{
StaticTileLayerIntoPositionViewPosition::tiledLayer= tiledLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_VIEW_STATICTILELAYERINTOPOSITIONVIEWPOSITION_CPP
