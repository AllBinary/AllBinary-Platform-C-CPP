
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

            #include <vector>
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackDropCellPositionGenerator.h"
#include "RaceTrackAdjacentDropLayerFactory.h"

class RaceTrackAdjacentDropCellPositionGenerator: public RaceTrackDropCellPositionGenerator {

    private: static RaceTrackAdjacentDropCellPositionGenerator SINGLETON = RaceTrackAdjacentDropCellPositionGenerator();

    public: static DropCellPositionGeneratorInterface getInstance();

    private: const LayerCoveringCellPositionsUtil layerCoveringCellPositionsUtil = LayerCoveringCellPositionsUtil::getInstance();

    private: const GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();

    private: std::vector<GeographicMapCellPosition> surroundingCellPositions = new Array(4);

private: RaceTrackAdjacentDropCellPositionGenerator();

                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition getFirstNonRoadAdjacentCellPosition(int32_t column, int32_t row);

    private: const Hashtable<any, any> hashtable = Hashtable<any, any>();

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface);

    private: const GeographicMapDirectionUtil geographicMapDirectionUtil = GeographicMapDirectionUtil::getInstance();

                //@Throws(Exception.constructor)
            
    protected: void drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKADJACENTDROPCELLPOSITIONGENERATOR_H
