
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYERINTERFACE_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYERINTERFACE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointLogHelper.h"
#include "Waypoint2LogHelper.h"
#include "WaypointRunnableLogHelper.h"

class WaypointLayerInterface {
        

                //@Throws(Exception.constructor)
            
    init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList);

    BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    setClosestGeographicMapCellHistory(BasicArrayList pathsList);

    teleportTo(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    setLoad(int32_t resource);

                //@Throws(Exception.constructor)
            
    BasicArrayList getSurroundingGeographicMapCellPositionList();

    bool isSelected();

    bool shouldAddWaypointFromBuilding();

    bool isShowMoreCaptionStates();

                //@Throws(Exception.constructor)
            
    trackTo(string reason);

                //@Throws(Exception.constructor)
            
    trackToDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

    TrackingEvent getTrackingEvent();

    allStop();

    bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    GeographicMapCellPosition getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    GeographicMapCellPosition getTopLeftGeographicMapCellPosition();

    CaptionAnimationHelperBase getCaptionAnimationHelper();

    WaypointBehaviorBase getWaypointBehavior();

    WaypointLogHelper getWaypointLogHelper();

    Waypoint2LogHelper getWaypoint2LogHelper();

    WaypointRunnableLogHelper getWaypointRunnableLogHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYERINTERFACE_H
