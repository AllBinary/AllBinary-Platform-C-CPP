
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_NOCACHEWAYPOINT_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_NOCACHEWAYPOINT_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointBase.h"

class NoCacheWaypoint: public WaypointBase, public BuildingEventListenerInterface {

    protected: PathFindingLayerInterface ownerLayer;

public: NoCacheWaypoint(PathFindingLayerInterface ownerLayer, Sound sound);

                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager);

    public: void releaseCachedPaths();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getPathsListFromCacheOnly(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getPathsListRunnable(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    protected: GeographicMapCellPosition getEndGeographicMapCellPosition(GeographicMapCellPosition startGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList createPaths(GeographicMapCellPosition startGeographicMapCellPosition);

    public: void onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public: void onBuildingEvent(RTSLayerEvent event);

    public: void reset();

                //@Throws(Exception.constructor)
            
    public: void visit(PathFindingLayerInterface unitLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_NOCACHEWAYPOINT_H
