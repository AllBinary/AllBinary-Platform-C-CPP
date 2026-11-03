
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/TiledLayerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryTiledLayer.h"


TiledLayerUtil::TiledLayerUtil() {
        }
        auto TiledLayerUtil::instance_owner() -> TiledLayerUtil* { static std::unique_ptr<TiledLayerUtil> value(new TiledLayerUtil()); return value.get(); }
TiledLayerUtil* TiledLayerUtil::instance = TiledLayerUtil::instance_owner();

    auto TiledLayerUtil::getInstance() -> TiledLayerUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TiledLayerUtil::instance;
    
}


    auto TiledLayerUtil::keepOnBorderdMapX(AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width, int32_t mapBorderBufferWidth) -> int32_t{

    int32_t newX = x;;
    

    int32_t maxRight = terrainTiledLayer->getWidth() -width -mapBorderBufferWidth;;
    

                        if(x +width > maxRight)
                        
                                    {
                                    newX= maxRight;
    

                                    }
                                

                        if(x < mapBorderBufferWidth)
                        
                                    {
                                    newX= mapBorderBufferWidth;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newX;
    
}


    auto TiledLayerUtil::keepOnBorderdMapY(AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height, int32_t mapBorderBufferHeight) -> int32_t{

    int32_t newY = y;;
    

    int32_t maxBottom = terrainTiledLayer->getHeight() -height -mapBorderBufferHeight;;
    

                        if(y +height > maxBottom)
                        
                                    {
                                    newY= maxBottom;
    

                                    }
                                

                        if(y < mapBorderBufferHeight)
                        
                                    {
                                    newY= mapBorderBufferHeight;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newY;
    
}


    auto TiledLayerUtil::keepOnMapX(AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t width) -> int32_t{

    int32_t newX = x;;
    

    int32_t maxRight = terrainTiledLayer->getWidth() -width;;
    

                        if(x >= maxRight)
                        
                                    {
                                    newX= maxRight;
    

                                    }
                                

                        if(x < 0)
                        
                                    {
                                    newX= 0;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newX;
    
}


    auto TiledLayerUtil::keepOnMapY(AllBinaryTiledLayer* terrainTiledLayer, int32_t y, int32_t height) -> int32_t{

    int32_t newY = y;;
    

    int32_t maxBottom = terrainTiledLayer->getHeight() -height;;
    

                        if(y >= maxBottom)
                        
                                    {
                                    newY= maxBottom;
    

                                    }
                                

                        if(y < 0)
                        
                                    {
                                    newY= 0;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newY;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_TILEDLAYERUTIL_CPP
