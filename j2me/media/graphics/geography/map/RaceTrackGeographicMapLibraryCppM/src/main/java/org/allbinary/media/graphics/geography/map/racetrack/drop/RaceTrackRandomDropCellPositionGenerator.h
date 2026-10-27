
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class PickedUpLayerInterfaceFactoryInterface;
class AllBinaryGameLayerManager;
class AllBinaryTiledLayer;
class DropLayerFactory;
class PickupLayerCircularStaticPool;
class RaceTrackPickupLayer;
class MyRandomFactory;
class GPoint;
class AllBinaryLayerManager;
class BasicGeographicMap;
class GeographicMapCellPosition;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RaceTrackRandomDropCellPositionGenerator: public RaceTrackDropCellPositionGenerator {

    private: static RaceTrackRandomDropCellPositionGenerator* SINGLETON_owner();
    private: static RaceTrackRandomDropCellPositionGenerator* SINGLETON;

    public: static RaceTrackRandomDropCellPositionGenerator* getInstance();

    private: MyRandomFactory* myRandomFactory;

    private: const int32_t cellsPerRowOrColumn = 3;

    private: const int32_t totalCells;

    private: std::vector<int32_t> rowArray;

    private: std::vector<int32_t> columnArray;

    private: int32_t cellWidth= 0;

    private: int32_t cellHeight= 0;

private: RaceTrackRandomDropCellPositionGenerator();

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager* allBinaryGameLayerManager, BasicGeographicMap* geographicMapInterface);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void drop(AllBinaryLayerManager* allBinaryLayerManager, int32_t index);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKRANDOMDROPCELLPOSITIONGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>)
#include <org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/drop/DropLayerFactory.h>)
#include <org/allbinary/game/layer/drop/DropLayerFactory.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h>)
#include <org/allbinary/game/layer/pickup/PickupLayerCircularStaticPool.h>
#endif
#if __has_include(<org/allbinary/game/layer/pickup/RaceTrackPickupLayer.h>)
#include <org/allbinary/game/layer/pickup/RaceTrackPickupLayer.h>
#endif
#if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h")
#include "org/allbinary/media/graphics/geography/map/racetrack/drop/RaceTrackDropCellPositionGenerator.h"
#endif

        #endif
    
