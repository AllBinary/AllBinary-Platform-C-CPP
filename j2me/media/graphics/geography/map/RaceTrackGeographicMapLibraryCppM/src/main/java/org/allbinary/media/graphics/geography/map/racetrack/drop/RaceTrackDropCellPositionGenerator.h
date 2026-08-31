
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKDROPCELLPOSITIONGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKDROPCELLPOSITIONGENERATOR_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/BaseDropCellPositionGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/NullRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RaceTrackDropCellPositionGenerator: public BaseDropCellPositionGenerator {
        

    const list: BasicArrayList = new BasicArrayListD();

    private: const timeDelayHelper: TimeDelayHelper;

    private: const STRAIGHTAWAY: int32_t = 4;

    raceTrackGeographicMap: RaceTrackGeographicMapInterface = NullRaceTrackGeographicMap.NULL_RACE_TRACK_GEOGRAPHIC_MAP;

    raceTrackGeographicMapCellTypeFactory: GeographicMapCellTypeFactory = GeographicMapCellTypeFactory.getInstance()!;

protected constructor ();

    init();

                //@Throws(Exception.constructor)
            
    public bool isDropAllowedAt(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface);

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager);

                //@Throws(Exception.constructor)
            
    drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_RACETRACK_DROP_RACETRACKDROPCELLPOSITIONGENERATOR_H
