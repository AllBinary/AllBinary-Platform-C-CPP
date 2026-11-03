
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_MULTIGEOGRAPHICMAPBEHAVIOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_MULTIGEOGRAPHICMAPBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"


MultiGeographicMapBehavior::MultiGeographicMapBehavior() {
        }
        
                //@Throws(Exception.constructor)
            
    auto MultiGeographicMapBehavior::getCellTypeAt(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) -> std::vector<GeographicMapCellType*>{

    int32_t size = geographicMapInterfaceArray.size();;
    

    GeographicMapCellType* cellType = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
cellType= geographicMapInterfaceArray[index]->getCellTypeAt(geographicMapCellPosition);
    
geographicMapCellTypeArray[index]= cellType;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return geographicMapCellTypeArray;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_MULTIGEOGRAPHICMAPBEHAVIOR_CPP
