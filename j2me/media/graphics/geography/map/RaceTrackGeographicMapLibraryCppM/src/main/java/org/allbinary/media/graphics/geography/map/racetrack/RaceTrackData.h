
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackData
            : public Object
         {

    private: Image* tileSetImage = NullImage::NULL_IMAGE;

    private: Image* miniTileSetImage = NullImage::NULL_IMAGE;

    private: int32_t cellWidth = 0;

    private: int32_t cellHeight = 0;

    private: int32_t miniCellWidth = 0;

    private: int32_t miniCellHeight = 0;

    private: std::vector<std::vector<int32_t>> mapArray = NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY;

    private: std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray = NullUtil::getInstance()->NULL_INT_ARRAY;

    private: std::vector<CellPosition*> NO_OVER_PASSES_ARRAY = {};

    private: std::vector<CellPosition*> overPassGeographicMapCellPositionArray = this->NO_OVER_PASSES_ARRAY;

    private: int32_t id;

public: RaceTrackData(int32_t id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray, std::vector<std::vector<int32_t>> mapArray);

    protected: void setMapArray(std::vector<std::vector<int32_t>> mapArray);

    public: std::vector<std::vector<int32_t>> getMapArray();

    protected: void setCellTypeIdToGeographicMapCellTypeArray(std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray);

    public: std::vector<int32_t> getCellTypeIdToGeographicMapCellTypeArray();

    private: void setCellWidth(int32_t cellWidth);

    public: int32_t getCellWidth();

    private: void setCellHeight(int32_t cellHeight);

    public: int32_t getCellHeight();

    public: std::vector<CellPosition*> getOverPassGeographicMapCellPositionArray();

    public: void setOverPassGeographicMapCellPositionArray(std::vector<CellPosition*> overPassGeographicMapCellPositionArray);

    public: Image* getTileSetImage();

    public: void setTileSetImage(Image* tileSetImage);

    public: Image* getMiniTileSetImage();

    public: void setMiniTileSetImage(Image* miniTileSetImage);

    public: int32_t getMiniCellWidth();

    public: void setMiniCellWidth(int32_t miniCellWidth);

    public: int32_t getMiniCellHeight();

    public: void setMiniCellHeight(int32_t miniCellHeight);

    public: void setId(int32_t id);

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_H
