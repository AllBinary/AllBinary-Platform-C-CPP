
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseRaceTrackGeographicMap.h"
#include "CustomMapGeneratorBase.h"
#include "BasicGeographicMapFactory.h"
#include "RaceTrackInfo.h"
#include "RaceTrackData.h"
#include "AllBinaryTiledLayerFactoryInterface.h"
#include "CustomMapGeneratorBaseFactory.h"

class RaceTrackGeographicMap: public BaseRaceTrackGeographicMap {

    private: CustomMapGeneratorBase customMapGenerator;

public: RaceTrackGeographicMap(RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData, AllBinaryTiledLayerFactoryInterface tiledLayerFactoryInterface, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory, CustomMapGeneratorBaseFactory customMapGeneratorBaseFactory);

    public: CustomMapGeneratorBase getCustomMapGenerator();

                //@Throws(Exception.constructor)
            
    public: bool isValid(GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_RACETRACKGEOGRAPHICMAP_H
