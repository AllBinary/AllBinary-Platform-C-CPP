
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

            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/layer/NamedInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinaryTiledLayer: public Layer: public NamedInterface, public PaintableInterface {
        

    private: cellWidth: int32_t;

    private: cellHeight: int32_t;

    private: const halfWidth: int32_t;

    private: const halfHeight: int32_t;

    private: const halfCellWidth: int32_t;

    private: const halfCellHeight: int32_t;

    private: const dataId: Integer;

public constructor (Integer dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight);

    public setCells(std::vector<std::vector<int32_t>> mapTwoDArray);

    public updateCells(std::vector<std::vector<int32_t>> mapTwoDArray, int32_t fromTileId, int32_t toTileId);

    public string getName();

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

    public int32_t getX2();

    public int32_t getY2();

    public int32_t getZ2();

    public int32_t getCellWidth();

    public int32_t getCellHeight();

    public int32_t getCell(int32_t col, int32_t row);

    public int32_t getColumns();

    public int32_t getRows();

    public setCell(int32_t col, int32_t row, int32_t tileIndex);

    public int32_t getHalfWidth();

    public int32_t getHalfHeight();

    public Integer getDataId();

    public int32_t getHalfCellWidth();

    public int32_t getHalfCellHeight();

    public bool isOnTileLayer(int32_t column, int32_t row);

    public int32_t getAnimatedTile(int32_t animationTileIndex);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ALLBINARYTILEDLAYER_H
