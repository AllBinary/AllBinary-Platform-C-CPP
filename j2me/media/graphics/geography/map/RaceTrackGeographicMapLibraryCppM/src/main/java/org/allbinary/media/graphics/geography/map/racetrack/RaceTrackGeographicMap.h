
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class StringMaker;
class GeographicMapCellPosition;
class GeographicMapCellPositionBaseFactory;
class GeographicMapCellPositionFactoryInterface;
class GeographicMapCellTypeFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
class CustomMapGeneratorBase;
class BasicGeographicMapFactory;
class RaceTrackInfo;
class RaceTrackData;
class AllBinaryTiledLayerFactoryInterface;
class CustomMapGeneratorBaseFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RaceTrackGeographicMap: public BaseRaceTrackGeographicMap {

    private: CustomMapGeneratorBase* customMapGenerator;

public: RaceTrackGeographicMap(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory);

    public: CustomMapGeneratorBase* getCustomMapGenerator();

                //@Throws(Exception.constructor)
            
    public: bool isValid(GeographicMapCellPosition* geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
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
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/BasicGeographicMapFactory.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/BasicGeographicMapFactory.h"
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
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBaseFactory.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBaseFactory.h"
#endif

        #endif
    
