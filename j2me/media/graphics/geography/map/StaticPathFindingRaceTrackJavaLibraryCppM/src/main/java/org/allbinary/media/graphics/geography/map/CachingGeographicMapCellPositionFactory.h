
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CACHINGGEOGRAPHICMAPCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CACHINGGEOGRAPHICMAPCELLPOSITIONFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CellPosition.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

class CachingGeographicMapCellPositionFactory: public BasicGeographicMapCellPositionFactory {

protected: CachingGeographicMapCellPositionFactory(BasicGeographicMap* geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_CACHINGGEOGRAPHICMAPCELLPOSITIONFACTORY_H
