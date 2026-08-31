
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_H
        #define ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLogHelper.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h>

      
#include <org/allbinary/game/tracking/TrackingEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingLayerInterface.h"
#include "GeographicMapCellPositionAreaBase.h"
#include "SelectionHudPaintable.h"
#include "RTSLayer2LogHelper.h"
#include "WaypointBehaviorBase.h"

class NullPathFindingLayer
            : public Object
        : public PathFindingLayerInterface {
        

    public static const NULL_PATH_FINDING_LAYER: NullPathFindingLayer = new NullPathFindingLayer();

    public string getName();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getEndGeographicMapCellPositionList();

    public bool shouldHandleStartSameAsEnd();

    public GeographicMapCellPositionAreaBase getGeographicMapCellPositionArea();

    public SelectionHudPaintable getHudPaintable();

                //@Throws(Exception.constructor)
            
    public handleCost(PathFindingLayerInterface ownerLayer);

    public PathFindingLayerInterface getParentLayer();

    public RTSLayer2LogHelper getRTSLayer2LogHelper();

                //@Throws(Exception.constructor)
            
    public setTarget(PathFindingLayerInterface targetGameLayer);

                //@Throws(Exception.constructor)
            
    public init(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList geographicMapCellPositionBasicArrayList);

    public BasicArrayList getMoveOutOfBuildAreaPath(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public setClosestGeographicMapCellHistory(BasicArrayList pathsList);

    public teleportTo(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public setLoad(int32_t resource);

                //@Throws(Exception.constructor)
            
    public BasicArrayList getSurroundingGeographicMapCellPositionList();

    public bool isSelected();

    public bool shouldAddWaypointFromBuilding();

    public bool isShowMoreCaptionStates();

                //@Throws(Exception.constructor)
            
    public trackTo(string reason);

                //@Throws(Exception.constructor)
            
    public trackToDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public bool buildingChase(AllBinaryLayer allbinaryLayer, GeographicMapCellPosition cellPosition);

    public TrackingEvent getTrackingEvent();

    public allStop();

    public bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public GeographicMapCellPosition getTopLeftGeographicMapCellPosition();

    public CaptionAnimationHelperBase getCaptionAnimationHelper();

    public WaypointBehaviorBase getWaypointBehavior();

    public WaypointLogHelper getWaypointLogHelper();

    public Waypoint2LogHelper getWaypoint2LogHelper();

    public WaypointRunnableLogHelper getWaypointRunnableLogHelper();

    public std::vector<Group> getGroupInterface();

                //@Throws(Exception.constructor)
            
    public bool isDestroyed();

    public int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_H
