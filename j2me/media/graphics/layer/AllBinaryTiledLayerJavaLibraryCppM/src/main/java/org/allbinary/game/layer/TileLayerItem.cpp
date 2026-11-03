
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_CPP
        #define ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/TileLayerItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Screen.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItemInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryTiledLayer.h"


TileLayerItem::TileLayerItem(std::string label, AllBinaryTiledLayer* tiledLayer, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABCustomItem(label, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->tiledLayer= tiledLayer;
    
}


    auto TileLayerItem::setOwner(Screen* owner) -> void{
}


    auto TileLayerItem::getMinimumWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tiledLayer->getWidth();;
    
}


    auto TileLayerItem::getMinimumHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tiledLayer->getHeight();;
    
}


    auto TileLayerItem::getMinContentHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tiledLayer->getHeight();;
    
}


    auto TileLayerItem::getMinContentWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tiledLayer->getWidth();;
    
}


    auto TileLayerItem::getPrefContentHeight(int32_t width) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tiledLayer->getHeight();;
    
}


    auto TileLayerItem::getPrefContentWidth(int32_t height) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tiledLayer->getWidth();;
    
}


    auto TileLayerItem::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->tiledLayer->setPosition(x, y, this->tiledLayer->getZP());
    
this->tiledLayer->paint(graphics);
    
}


    auto TileLayerItem::paintUnselected(Graphics* graphics, int32_t x, int32_t y) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_CPP
