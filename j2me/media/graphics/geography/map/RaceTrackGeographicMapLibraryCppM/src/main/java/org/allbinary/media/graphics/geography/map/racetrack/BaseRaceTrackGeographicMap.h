
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommonStrings;
class LogUtil;
class AllBinaryTiledLayer;
class StringMaker;
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
class GeographicMapCellPositionBaseFactory;
class GeographicMapCellPositionFactoryInterface;
class GeographicMapCellTypeFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
class RaceTrackInfo;
class RaceTrackData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseRaceTrackGeographicMap: public BasicGeographicMap, public virtual RaceTrackGeographicMapInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: RaceTrackInfo* raceTrackInfo;

    private: RaceTrackData* raceTrackData;

    private: BasicGeographicMap* miniGeographicMap;

public: BaseRaceTrackGeographicMap(RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData, AllBinaryTiledLayer* tiledLayer, BasicGeographicMap* miniGeographicMap, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);

    public: RaceTrackInfo* getRaceTrackInfo();

    public: void setRaceTrackInfo(RaceTrackInfo* aRaceTrackInfo);

    public: void setMiniBasicGeographicMap(BasicGeographicMap* miniBasicGeographicMap);

    public: BasicGeographicMap* getMiniBasicGeographicMap();

    public: RaceTrackData* getRaceTrackData();

    public: void setRaceTrackData(RaceTrackData* raceTrackData);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_BASERACETRACKGEOGRAPHICMAP_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
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
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#endif

        #endif
    
