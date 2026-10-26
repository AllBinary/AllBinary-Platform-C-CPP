
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

            #include <vector>
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/game/TiledLayer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryTiledLayer.h"

class AllBinaryJ2METiledLayer: public AllBinaryTiledLayer {

    protected: TiledLayer tiledLayerP;

    protected: int32_t debugColor;

public: AllBinaryJ2METiledLayer(Integer dataId, TiledLayer tiledLayer, std::vector<std::vector<int32_t>> mapTwoDArray, int32_t debugColor);

    public: void paint(Graphics graphics);

    const Font font2 = Font::getFont(Font::FACE_SYSTEM, Font::STYLE_PLAIN, 4);

    public: void paintDebug(Graphics graphics);

    public: void moveDXY(int32_t dx, int32_t dy);

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: TiledLayer getTiledLayer();

    public: int32_t getCellWidth();

    public: int32_t getCellHeight();

    public: int32_t getCell(int32_t col, int32_t row);

    public: int32_t getColumns();

    public: int32_t getRows();

    public: void setCell(int32_t col, int32_t row, int32_t index);

    public: int32_t getAnimatedTile(int32_t animationTileIndex);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYJ2METILEDLAYER_H
