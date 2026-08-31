
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathsCacheFactory.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointBase.h"

class Waypoint: public WaypointBase: public BuildingEventListenerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    const ownerLayer: PathFindingLayerInterface;

    private: endList: BasicArrayList = this.basicArrayListUtil!.getImmutableInstance()!;

    private: paths: std::vector<std::vector<BasicArrayList>> = this.basicArrayListUtil!.NULL_ARRAY_OF_ARRAY;

public constructor (PathFindingLayerInterface ownerLayer, Sound sound);

                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public releaseCachedPaths();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsListFromCacheOnly(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getPathsListRunnable(GeographicMapCellPosition geographicMapCellPosition);

    GeographicMapCellPosition getEndGeographicMapCellPosition(GeographicMapCellPosition startGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    BasicArrayList createPaths(GeographicMapCellPosition startGeographicMapCellPosition);

    public onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public onBuildingEvent(RTSLayerEvent event);

    clearPaths();

    public reset();

                //@Throws(Exception.constructor)
            
    public visit(PathFindingLayerInterface unitLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINT_H
