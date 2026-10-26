
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryTiledLayer.h"

class TiledLayerUtil
            : public Object
         {

    private: static TiledLayerUtil instance() { return TiledLayerUtil(); }

    public: static TiledLayerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TiledLayerUtil::instance();
    
}


    public: int32_t keepOnBorderdMapX(AllBinaryTiledLayer terrainTiledLayer, int32_t x, int32_t width, int32_t mapBorderBufferWidth){

    int32_t newX = x;;
    

    int32_t maxRight = terrainTiledLayer.getWidth() -width -mapBorderBufferWidth;;
    

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


    public: int32_t keepOnBorderdMapY(AllBinaryTiledLayer terrainTiledLayer, int32_t y, int32_t height, int32_t mapBorderBufferHeight){

    int32_t newY = y;;
    

    int32_t maxBottom = terrainTiledLayer.getHeight() -height -mapBorderBufferHeight;;
    

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


    public: int32_t keepOnMapX(AllBinaryTiledLayer terrainTiledLayer, int32_t x, int32_t width){

    int32_t newX = x;;
    

    int32_t maxRight = terrainTiledLayer.getWidth() -width;;
    

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


    public: int32_t keepOnMapY(AllBinaryTiledLayer terrainTiledLayer, int32_t y, int32_t height){

    int32_t newY = y;;
    

    int32_t maxBottom = terrainTiledLayer.getHeight() -height;;
    

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


};

            

