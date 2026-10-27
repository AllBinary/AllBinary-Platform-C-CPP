
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
        



        #ifndef ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DYNAMICRACETRACKSPATHPRINTER_H
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DYNAMICRACETRACKSPATHPRINTER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
class BasicArrayList;
class CommonStrings;
class LogUtil;
class SmallIntegerSingletonFactory;
class BasicGeographicMap;
class RaceTrackGeographicMapInterfaceFactoryInterface;
class RaceTrackRoadsGeographicMapCellHistoryFactory;
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTracksPathPrinter.h>
class PathFindingInfo;
class PathGenerator;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DynamicRaceTracksPathPrinter: public RaceTracksPathPrinter {


            
    public: DynamicRaceTracksPathPrinter();
        
    /*protected*/ public: LogUtil* logUtil;

    public: void printAllPaths(RaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PathFindingInfo* pathFindingInfo, int32_t size);

};

            


        #endif //ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DYNAMICRACETRACKSPATHPRINTER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DYNAMICRACETRACKSPATHPRINTER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DYNAMICRACETRACKSPATHPRINTER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterfaceFactoryInterface.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTracksPathPrinter.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTracksPathPrinter.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>)
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>
#endif

        #endif
    
