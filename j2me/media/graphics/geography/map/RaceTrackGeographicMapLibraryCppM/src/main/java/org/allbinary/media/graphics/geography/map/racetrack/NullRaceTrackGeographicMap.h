
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
class AllBinaryTiledLayer;
class BasicColor;
class Layer;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class GeographicMapCellPositionFactoryInterface;
class GeographicMapCellType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"
class RaceTrackInfo;
class RaceTrackData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullRaceTrackGeographicMap
            : public virtual Object
        , public RaceTrackGeographicMapInterface {

    private: static NullRaceTrackGeographicMap* NULL_RACE_TRACK_GEOGRAPHIC_MAP_owner();
    public: static NullRaceTrackGeographicMap* NULL_RACE_TRACK_GEOGRAPHIC_MAP;


            
    public: NullRaceTrackGeographicMap();
        
    public: int32_t getId();

    public: std::string getName();

    public: void reset();

    public: AllBinaryTiledLayer* getAllBinaryTiledLayer();

                //@Throws(Exception.constructor)
            
    public: bool getCellPositionsAt(Layer* layer, std::vector<std::vector<GeographicMapCellPosition*>> currentCellPositionArray, std::vector<std::vector<GeographicMapCellPosition*>> cellPositionArray);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPositionAtXY(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCellPositionAtXYNoThrow(int32_t x, int32_t y);

    public: int32_t getCellTypeFromMapCellTypeInt(int32_t cellTypeId);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCellTypeAtXY(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType* getCellTypeAt(GeographicMapCellPosition* geographicMapCellPosition);

    public: BasicGeographicMapCellPositionFactory* getGeographicMapCellPositionFactory();

    public: GeographicMapCellPositionFactoryInterface* getGeographicMapCellPositionFactoryInterface();

    public: BasicColor* getForegroundBasicColor();

    public: BasicColor* getBackgroundBasicColor();

    public: RaceTrackInfo* getRaceTrackInfo();

    public: void setRaceTrackInfo(RaceTrackInfo* aRaceTrackInfo);

    public: RaceTrackData* getRaceTrackData();

    public: void setRaceTrackData(RaceTrackData* raceTrackData);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_NULLRACETRACKGEOGRAPHICMAP_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
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
    
