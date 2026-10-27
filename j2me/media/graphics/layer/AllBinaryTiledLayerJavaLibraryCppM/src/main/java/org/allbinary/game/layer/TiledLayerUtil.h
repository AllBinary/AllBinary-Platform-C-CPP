
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_H
        #define ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryTiledLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TiledLayerUtil
            : public virtual Object
         {

    private: static TiledLayerUtil* instance_owner();
    private: static TiledLayerUtil* instance;

    public: static TiledLayerUtil* getInstance();


            
    public: TiledLayerUtil();
        
    public: int32_t keepOnBorderdMapX(AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width, int32_t mapBorderBufferWidth);

    public: int32_t keepOnBorderdMapY(AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height, int32_t mapBorderBufferHeight);

    public: int32_t keepOnMapX(AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width);

    public: int32_t keepOnMapY(AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_H_COMPLETE
        #if __has_include("org/allbinary/game/layer/AllBinaryTiledLayer.h")
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#endif

        #endif
    
