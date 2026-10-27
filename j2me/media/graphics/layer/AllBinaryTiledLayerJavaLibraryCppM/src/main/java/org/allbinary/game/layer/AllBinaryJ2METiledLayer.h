
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYJ2METILEDLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYJ2METILEDLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
class Font;
class Graphics;
class TiledLayer;
class CommonSeps;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryTiledLayer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryJ2METiledLayer: public AllBinaryTiledLayer {

    /*protected*/ public: TiledLayer* tiledLayerP;

    /*protected*/ public: int32_t debugColor;

public: AllBinaryJ2METiledLayer(int32_t dataId, TiledLayer* tiledLayer, std::vector<std::vector<int32_t>> mapTwoDArray, int32_t debugColor);

    public: void paint(Graphics* graphics);

    public: Font* font2;

    public: void paintDebug(Graphics* graphics);

    public: void moveDXY(int32_t dx, int32_t dy);

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: TiledLayer* getTiledLayer();

    public: int32_t getCellWidth();

    public: int32_t getCellHeight();

    public: int32_t getCell(int32_t col, int32_t row);

    public: int32_t getColumns();

    public: int32_t getRows();

    public: void setCell(int32_t col, int32_t row, int32_t index);

    public: int32_t getAnimatedTile(int32_t animationTileIndex);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYJ2METILEDLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ALLBINARYJ2METILEDLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYJ2METILEDLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/game/TiledLayer.h>)
#include <javax/microedition/lcdui/game/TiledLayer.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryTiledLayer.h")
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#endif

        #endif
    
