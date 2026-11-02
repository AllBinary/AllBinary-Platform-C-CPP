
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/racetrack/BasicGeographicMapFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h"


BasicGeographicMapFactory::BasicGeographicMapFactory() {
        }
        
                //@Throws(Exception.constructor)
            
    auto BasicGeographicMapFactory::getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) -> BasicGeographicMap*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicGeographicMap(SmallIntegerSingletonFactory::getInstance()->getAt(JavaBoxes::value<int32_t>(raceTrackInfo->getId()) +100 +1), raceTrackInfo->getName(), raceTrackData->getCellTypeIdToGeographicMapCellTypeArray(), tiledLayerFactoryInterface->getMiniInstance(raceTrackData), BasicColorFactory::getInstance()->CLEAR_COLOR, BasicColorFactory::getInstance()->CLEAR_COLOR, geographicMapCellPositionFactoryInterface, new GeographicMapCellPositionBaseFactory(), geographicMapCellTypeFactory);
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_CPP
