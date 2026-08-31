
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackGeographicMapInterface.h"
#include "RaceTrackInfo.h"
#include "RaceTrackData.h"

class BaseRaceTrackGeographicMap: public BasicGeographicMap: public RaceTrackGeographicMapInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: raceTrackInfo: RaceTrackInfo;

    private: raceTrackData: RaceTrackData;

    private: miniGeographicMap: BasicGeographicMap;

public constructor (RaceTrackInfo raceTrackInfo, RaceTrackData raceTrackData, AllBinaryTiledLayer tiledLayer, BasicGeographicMap miniGeographicMap, GeographicMapCellPositionFactoryInterface geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory geographicMapCellTypeFactory);

    public RaceTrackInfo getRaceTrackInfo();

    public setRaceTrackInfo(RaceTrackInfo aRaceTrackInfo);

    public setMiniBasicGeographicMap(BasicGeographicMap miniBasicGeographicMap);

    public BasicGeographicMap getMiniBasicGeographicMap();

    public RaceTrackData getRaceTrackData();

    public setRaceTrackData(RaceTrackData raceTrackData);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_H
