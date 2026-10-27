
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GroupCommonFactory;
class BasicArrayList;
class BasicArrayListD;
class Direction;
class DirectionFactory;
class BasicGroupFactory;
class AllBinaryGameLayerManager;
class LayerCoveringCellPositionsUtil;
class GPoint;
class AllBinaryLayer;
class AllBinaryLayerManager;
class StdUtil;
class BasicGeographicMap;
class BasicGeographicMapCellPositionFactory;
class GeographicMapCellPosition;
class GeographicMapCellType;
class GeographicMapDirectionUtil;
class SimpleGeographicMapCellPositionFactory;
class DropCellPositionGeneratorInterface;
class DropCellPositionHistory;
class BaseRaceTrackGeographicMap;
class RaceTrackGeographicMapCellType;
class RaceTrackGeographicMapCellTypeFactory;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"
class RaceTrackAdjacentDropLayerFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RaceTrackAdjacentDropCellPositionGenerator: public RaceTrackDropCellPositionGenerator {

    private: static RaceTrackAdjacentDropCellPositionGenerator* SINGLETON_owner();
    private: static RaceTrackAdjacentDropCellPositionGenerator* SINGLETON;

    public: static DropCellPositionGeneratorInterface* getInstance();

    private: LayerCoveringCellPositionsUtil* layerCoveringCellPositionsUtil;

    private: GroupCommonFactory* groupCommonFactory;

    private: std::vector<GeographicMapCellPosition*> surroundingCellPositions;

private: RaceTrackAdjacentDropCellPositionGenerator();

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition* getFirstNonRoadAdjacentCellPosition(int32_t column, int32_t row);

    private: ABHashtable<Object*, Object*>* hashtable;

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);

    private: GeographicMapDirectionUtil* geographicMapDirectionUtil;

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void drop(AllBinaryLayerManager* allBinaryLayerManager, int32_t index);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/GroupCommonFactory.h>)
#include <org/allbinary/game/identification/GroupCommonFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/direction/Direction.h>)
#include <org/allbinary/direction/Direction.h>
#endif
#if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include(<org/allbinary/game/identification/BasicGroupFactory.h>)
#include <org/allbinary/game/identification/BasicGroupFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>)
#include <org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>)
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>)
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackAdjacentDropLayerFactory.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackAdjacentDropLayerFactory.h"
#endif

        #endif
    
