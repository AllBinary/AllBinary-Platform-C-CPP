
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
        



        #ifndef ORG_ALLBINARY_GAME_VIEW_TILELAYERPOSITIONINTOVIEWPOSITION_H
        #define ORG_ALLBINARY_GAME_VIEW_TILELAYERPOSITIONINTOVIEWPOSITION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AllBinaryTiledLayer;
class Layer;
class NullLayer;
#include <org/allbinary/view/ViewPosition.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TileLayerPositionIntoViewPosition: public ViewPosition {

    private: Layer* tiledLayer;

public: TileLayerPositionIntoViewPosition();

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

    public: void setTiledLayer(AllBinaryTiledLayer* tiledLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_VIEW_TILELAYERPOSITIONINTOVIEWPOSITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_VIEW_TILELAYERPOSITIONINTOVIEWPOSITION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_VIEW_TILELAYERPOSITIONINTOVIEWPOSITION_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/layer/NullLayer.h>)
#include <org/allbinary/layer/NullLayer.h>
#endif
#if __has_include(<org/allbinary/view/ViewPosition.h>)
#include <org/allbinary/view/ViewPosition.h>
#endif

        #endif
    
