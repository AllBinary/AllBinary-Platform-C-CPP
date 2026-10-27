
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicColorFactory;
class SmallIntegerSingletonFactory;
class BasicGeographicMap;
class GeographicMapCellPositionBaseFactory;
class GeographicMapCellPositionFactoryInterface;
class GeographicMapCellTypeFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RaceTrackInfo;
class RaceTrackData;
class AllBinaryTiledLayerFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGeographicMapFactory
            : public virtual Object
         {


            
    public: BasicGeographicMapFactory();
        
                //@Throws(Exception.constructor)
            
    public: BasicGeographicMap* getInstance(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASICGEOGRAPHICMAPFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h"
#endif

        #endif
    
