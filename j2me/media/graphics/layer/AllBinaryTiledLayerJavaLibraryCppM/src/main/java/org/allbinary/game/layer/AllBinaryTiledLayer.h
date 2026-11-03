
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
class Graphics;
class StringMaker;

#include <org/allbinary/graphics/paint/PaintableInterface.h>
#include <org/allbinary/layer/Layer.h>
#include <org/allbinary/layer/NamedInterface.h>

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryTiledLayer: public Layer, public virtual NamedInterface, public virtual PaintableInterface {

    private: int32_t cellWidth;

    private: int32_t cellHeight;

    private: int32_t halfWidth;

    private: int32_t halfHeight;

    private: int32_t halfCellWidth;

    private: int32_t halfCellHeight;

    private: int32_t dataId;

public: AllBinaryTiledLayer(int32_t dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight);

    public: void setCells(std::vector<std::vector<int32_t>> mapTwoDArray);

    public: void updateCells(std::vector<std::vector<int32_t>> mapTwoDArray, int32_t fromTileId, int32_t toTileId);

    public: std::string getName();

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: int32_t getX2();

    public: int32_t getY2();

    public: int32_t getZ2();

    public: int32_t getCellWidth();

    public: int32_t getCellHeight();

    public: int32_t getCell(int32_t col, int32_t row);

    public: int32_t getColumns();

    public: int32_t getRows();

    public: void setCell(int32_t col, int32_t row, int32_t tileIndex);

    public: int32_t getHalfWidth();

    public: int32_t getHalfHeight();

    public: int32_t getDataId();

    public: int32_t getHalfCellWidth();

    public: int32_t getHalfCellHeight();

    public: bool isOnTileLayer(int32_t column, int32_t row);

    public: int32_t getAnimatedTile(int32_t animationTileIndex);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif

#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/layer/NamedInterface.h>)
#include <org/allbinary/layer/NamedInterface.h>
#endif


        #endif
    
