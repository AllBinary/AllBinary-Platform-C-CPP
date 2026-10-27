
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/SimpleGeographicMap.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"


SimpleGeographicMap::SimpleGeographicMap(int32_t id, std::string name, std::vector<int32_t> cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor) : commonStrings(CommonStrings::getInstance()), foregroundBasicColor(BasicColorFactory::getInstance()->NULL_COLOR), backgroundBasicColor(BasicColorFactory::getInstance()->NULL_COLOR), geographicMapCellTypeFactory(GeographicMapCellTypeFactory::getInstance()){
this->id= id;
    
this->name= name;
    
this->cellTypeIdToGeographicMapCellType= cellTypeIdToGeographicMapCellType;
    
this->tiledLayer= tiledLayer;
    
this->setBackgroundBasicColor(backgroundBasicColor);
    
this->setForegroundBasicColor(foregroundBasicColor);
    
}


    auto SimpleGeographicMap::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    auto SimpleGeographicMap::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto SimpleGeographicMap::reset() -> void{
}


    auto SimpleGeographicMap::getAllBinaryTiledLayer() -> AllBinaryTiledLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tiledLayer;
    
}


                //@Throws(Exception.constructor)
            
    auto SimpleGeographicMap::getCellTypeAt(GeographicMapCellPosition* cellPosition) -> GeographicMapCellType*{

    int32_t i_column = cellPosition->getColumn();;
    

    int32_t i_row = cellPosition->getRow();;
    

    int32_t cellTypeId = this->tiledLayer->getCell(i_column, i_row);;
    

                        if(cellTypeId < 0)
                        
                                    {
                                    cellTypeId= this->tiledLayer->getAnimatedTile(cellTypeId);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellTypeFactory->get(this->cellTypeIdToGeographicMapCellType[cellTypeId]);;
    
}


    auto SimpleGeographicMap::getCellTypeFromMapCellTypeInt(int32_t cellTypeId) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cellTypeIdToGeographicMapCellType[cellTypeId];
    
}


    auto SimpleGeographicMap::getForegroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->foregroundBasicColor;
    
}


    auto SimpleGeographicMap::setForegroundBasicColor(BasicColor* foregroundBasicColor) -> void{
this->foregroundBasicColor= foregroundBasicColor;
    
}


    auto SimpleGeographicMap::getBackgroundBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->backgroundBasicColor;
    
}


    auto SimpleGeographicMap::setBackgroundBasicColor(BasicColor* backgroundBasicColor) -> void{
this->backgroundBasicColor= backgroundBasicColor;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAP_CPP
