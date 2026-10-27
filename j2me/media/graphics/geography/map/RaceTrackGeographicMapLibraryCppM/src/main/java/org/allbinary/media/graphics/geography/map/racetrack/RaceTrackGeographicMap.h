
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBase.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BasicGeographicMapFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGeneratorBaseFactory.h"

class RaceTrackGeographicMap: public BaseRaceTrackGeographicMap {

    private: CustomMapGeneratorBase* customMapGenerator;

public: RaceTrackGeographicMap(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayerFactoryInterface* tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory* customMapGeneratorBaseFactory);

    public: CustomMapGeneratorBase* getCustomMapGenerator();

                //@Throws(Exception.constructor)
            
    public: bool isValid(GeographicMapCellPosition* geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H
