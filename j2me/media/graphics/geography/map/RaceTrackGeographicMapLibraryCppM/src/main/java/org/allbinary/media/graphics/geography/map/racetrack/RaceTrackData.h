
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
        

    private: tileSetImage: Image = NullImage.NULL_IMAGE;

    private: miniTileSetImage: Image = NullImage.NULL_IMAGE;

    private: cellWidth: int32_t = 0;

    private: cellHeight: int32_t = 0;

    private: miniCellWidth: int32_t = 0;

    private: miniCellHeight: int32_t = 0;

    private: mapArray: std::vector<std::vector<int32_t>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY;

    private: cellTypeIdToGeographicMapCellTypeArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    private: NO_OVER_PASSES_ARRAY: std::vector<CellPosition> = [];

    private: overPassGeographicMapCellPositionArray: std::vector<CellPosition> = this.NO_OVER_PASSES_ARRAY;

    private: id: Integer;

public constructor (Integer id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray, std::vector<std::vector<int32_t>> mapArray);

    setMapArray(std::vector<std::vector<int32_t>> mapArray);

    public std::vector<std::vector<int32_t>> getMapArray();

    setCellTypeIdToGeographicMapCellTypeArray(std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray);

    public std::vector<int32_t> getCellTypeIdToGeographicMapCellTypeArray();

    setCellWidth(int32_t cellWidth);

    public int32_t getCellWidth();

    setCellHeight(int32_t cellHeight);

    public int32_t getCellHeight();

    public std::vector<CellPosition> getOverPassGeographicMapCellPositionArray();

    public setOverPassGeographicMapCellPositionArray(std::vector<CellPosition> overPassGeographicMapCellPositionArray);

    public Image getTileSetImage();

    public setTileSetImage(Image tileSetImage);

    public Image getMiniTileSetImage();

    public setMiniTileSetImage(Image miniTileSetImage);

    public int32_t getMiniCellWidth();

    public setMiniCellWidth(int32_t miniCellWidth);

    public int32_t getMiniCellHeight();

    public setMiniCellHeight(int32_t miniCellHeight);

    public setId(Integer id);

    public Integer getId();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_H
