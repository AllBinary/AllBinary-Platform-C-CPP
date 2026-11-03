
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
        

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
        

RaceTrackData::RaceTrackData(int32_t id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray, std::vector<std::vector<int32_t>> mapArray) : tileSetImage(NullImage::NULL_IMAGE), miniTileSetImage(NullImage::NULL_IMAGE), mapArray(NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY), cellTypeIdToGeographicMapCellTypeArray(NullUtil::getInstance()->NULL_INT_ARRAY), NO_OVER_PASSES_ARRAY({}), overPassGeographicMapCellPositionArray(this->NO_OVER_PASSES_ARRAY){
this->id= id;
    
this->cellWidth= cellWidth;
    
this->cellHeight= cellHeight;
    
this->miniCellWidth= miniCellWidth;
    
this->miniCellHeight= miniCellHeight;
    
this->mapArray= mapArray;
    
this->cellTypeIdToGeographicMapCellTypeArray= cellTypeIdToGeographicMapCellTypeArray;
    
}


    auto RaceTrackData::setMapArray(std::vector<std::vector<int32_t>> mapArray) -> void{
this->mapArray= mapArray;
    
}


    auto RaceTrackData::getMapArray() -> std::vector<std::vector<int32_t>>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mapArray;
    
}


    auto RaceTrackData::setCellTypeIdToGeographicMapCellTypeArray(std::vector<int32_t> cellTypeIdToGeographicMapCellTypeArray) -> void{
this->cellTypeIdToGeographicMapCellTypeArray= cellTypeIdToGeographicMapCellTypeArray;
    
}


    auto RaceTrackData::getCellTypeIdToGeographicMapCellTypeArray() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cellTypeIdToGeographicMapCellTypeArray;
    
}


    auto RaceTrackData::setCellWidth(int32_t cellWidth) -> void{
this->cellWidth= cellWidth;
    
}


    auto RaceTrackData::getCellWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cellWidth;
    
}


    auto RaceTrackData::setCellHeight(int32_t cellHeight) -> void{
this->cellHeight= cellHeight;
    
}


    auto RaceTrackData::getCellHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->cellHeight;
    
}


    auto RaceTrackData::getOverPassGeographicMapCellPositionArray() -> std::vector<CellPosition*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->overPassGeographicMapCellPositionArray;
    
}


    auto RaceTrackData::setOverPassGeographicMapCellPositionArray(std::vector<CellPosition*> overPassGeographicMapCellPositionArray) -> void{
this->overPassGeographicMapCellPositionArray= overPassGeographicMapCellPositionArray;
    
}


    auto RaceTrackData::getTileSetImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->tileSetImage;
    
}


    auto RaceTrackData::setTileSetImage(Image* tileSetImage) -> void{
this->tileSetImage= tileSetImage;
    
}


    auto RaceTrackData::getMiniTileSetImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->miniTileSetImage;
    
}


    auto RaceTrackData::setMiniTileSetImage(Image* miniTileSetImage) -> void{
this->miniTileSetImage= miniTileSetImage;
    
}


    auto RaceTrackData::getMiniCellWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->miniCellWidth;
    
}


    auto RaceTrackData::setMiniCellWidth(int32_t miniCellWidth) -> void{
this->miniCellWidth= miniCellWidth;
    
}


    auto RaceTrackData::getMiniCellHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->miniCellHeight;
    
}


    auto RaceTrackData::setMiniCellHeight(int32_t miniCellHeight) -> void{
this->miniCellHeight= miniCellHeight;
    
}


    auto RaceTrackData::setId(int32_t id) -> void{
this->id= id;
    
}


    auto RaceTrackData::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKDATA_CPP
