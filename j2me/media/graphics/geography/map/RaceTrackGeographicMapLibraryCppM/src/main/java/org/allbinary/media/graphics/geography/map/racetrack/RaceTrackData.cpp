
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackData
            : public Object
         {

    private: Image tileSetImage = NullImage::NULL_IMAGE;

    private: Image miniTileSetImage = NullImage::NULL_IMAGE;

    private: int32_t cellWidth = 0;

    private: int32_t cellHeight = 0;

    private: int32_t miniCellWidth = 0;

    private: int32_t miniCellHeight = 0;

    private: std::vector<std::vector<int32_t>> mapArray = NullUtil::getInstance().NULL_INT_ARRAY_ARRAY;

    private: std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray = NullUtil::getInstance().NULL_INT_ARRAY;

    private: std::vector<CellPosition> NO_OVER_PASSES_ARRAY = {};

    private: std::vector<CellPosition> overPassGeographicMapCellPositionArray = this->NO_OVER_PASSES_ARRAY;

    private: Integer id;

public: RaceTrackData(Integer id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray, std::vector<std::vector<int32_t>> mapArray){
this->id= id;
    
this->cellWidth= cellWidth;
    
this->cellHeight= cellHeight;
    
this->miniCellWidth= miniCellWidth;
    
this->miniCellHeight= miniCellHeight;
    
this->mapArray= mapArray;
    
this->cellTypeIdToGeographicMapCellTypeArray= cellTypeIdToGeographicMapCellTypeArray;
    
}


    protected: void setMapArray(std::vector<std::vector<int32_t>> mapArray){
this->mapArray= mapArray;
    
}


    public: std::vector<std::vector<int32_t>> getMapArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mapArray;
    
}


    protected: void setCellTypeIdToGeographicMapCellTypeArray(std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray){
this->cellTypeIdToGeographicMapCellTypeArray= cellTypeIdToGeographicMapCellTypeArray;
    
}


    public: std::vector<int32_t> getCellTypeIdToGeographicMapCellTypeArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellTypeIdToGeographicMapCellTypeArray;
    
}


    private: void setCellWidth(int32_t cellWidth){
this->cellWidth= cellWidth;
    
}


    public: int32_t getCellWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellWidth;
    
}


    private: void setCellHeight(int32_t cellHeight){
this->cellHeight= cellHeight;
    
}


    public: int32_t getCellHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellHeight;
    
}


    public: std::vector<CellPosition> getOverPassGeographicMapCellPositionArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->overPassGeographicMapCellPositionArray;
    
}


    public: void setOverPassGeographicMapCellPositionArray(std::vector<CellPosition> overPassGeographicMapCellPositionArray){
this->overPassGeographicMapCellPositionArray= overPassGeographicMapCellPositionArray;
    
}


    public: Image getTileSetImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tileSetImage;
    
}


    public: void setTileSetImage(Image tileSetImage){
this->tileSetImage= tileSetImage;
    
}


    public: Image getMiniTileSetImage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->miniTileSetImage;
    
}


    public: void setMiniTileSetImage(Image miniTileSetImage){
this->miniTileSetImage= miniTileSetImage;
    
}


    public: int32_t getMiniCellWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->miniCellWidth;
    
}


    public: void setMiniCellWidth(int32_t miniCellWidth){
this->miniCellWidth= miniCellWidth;
    
}


    public: int32_t getMiniCellHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->miniCellHeight;
    
}


    public: void setMiniCellHeight(int32_t miniCellHeight){
this->miniCellHeight= miniCellHeight;
    
}


    public: void setId(Integer id){
this->id= id;
    
}


    public: Integer getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


};

            

