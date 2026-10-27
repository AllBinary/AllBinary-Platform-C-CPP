
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_H
        #define ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_H

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

class TileLayerItem: public ABCustomItem, public ABCustomItemInterface {

    private: AllBinaryTiledLayer* tiledLayer;

public: TileLayerItem(std::string label, AllBinaryTiledLayer* tiledLayer, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void setOwner(Screen* owner);

    public: int32_t getMinimumWidth();

    public: int32_t getMinimumHeight();

    protected: int32_t getMinContentHeight();

    protected: int32_t getMinContentWidth();

    protected: int32_t getPrefContentHeight(int32_t width);

    protected: int32_t getPrefContentWidth(int32_t height);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintUnselected(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_H
