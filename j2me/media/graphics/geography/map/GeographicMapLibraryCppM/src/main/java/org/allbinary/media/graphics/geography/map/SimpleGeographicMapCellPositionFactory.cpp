
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"


SimpleGeographicMapCellPositionFactory::SimpleGeographicMapCellPositionFactory() {
        }
        auto SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION_owner() -> GeographicMapCellPosition* { static std::unique_ptr<GeographicMapCellPosition> value(new GeographicMapCellPosition( -1,  -1,  -1,  -1,  -1,  -1)); return value.get(); }
GeographicMapCellPosition* SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION_owner();

    auto SimpleGeographicMapCellPositionFactory::getInstance(BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height) -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new GeographicMapCellPosition(i_column, i_row, columns, rows, width, height);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_SIMPLEGEOGRAPHICMAPCELLPOSITIONFACTORY_CPP
