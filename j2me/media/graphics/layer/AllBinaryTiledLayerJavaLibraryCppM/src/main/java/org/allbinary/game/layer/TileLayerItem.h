
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class Screen;
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#include <org/allbinary/graphics/form/item/ABCustomItemInterface.h>
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryTiledLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TileLayerItem: public ABCustomItem, public virtual ABCustomItemInterface {

    private: AllBinaryTiledLayer* tiledLayer;

public: TileLayerItem(std::string label, AllBinaryTiledLayer* tiledLayer, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void setOwner(Screen* owner);

    public: int32_t getMinimumWidth();

    public: int32_t getMinimumHeight();

    /*protected*/ public: int32_t getMinContentHeight();

    /*protected*/ public: int32_t getMinContentWidth();

    /*protected*/ public: int32_t getPrefContentHeight(int32_t width);

    /*protected*/ public: int32_t getPrefContentWidth(int32_t height);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintUnselected(Graphics* graphics, int32_t x, int32_t y);

    public: std::string getLabel();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_TILELAYERITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Screen.h>)
#include <javax/microedition/lcdui/Screen.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItemInterface.h>)
#include <org/allbinary/graphics/form/item/ABCustomItemInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryTiledLayer.h")
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#endif

        #endif
    
