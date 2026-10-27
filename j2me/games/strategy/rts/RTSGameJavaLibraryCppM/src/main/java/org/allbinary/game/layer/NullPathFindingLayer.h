
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
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
        #include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"

class NullPathFindingLayer
            : public Object
        , public PathFindingLayerInterface {

    public: static NullPathFindingLayer* NULL_PATH_FINDING_LAYER() { static std::unique_ptr<NullPathFindingLayer> value(new NullPathFindingLayer()); return value.get(); }

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getEndGeographicMapCellPositionList();

    public: bool shouldHandleStartSameAsEnd();

    public: GeographicMapCellPositionAreaBase* getGeographicMapCellPositionArea();

    public: SelectionHudPaintable* getHudPaintable();

                //@Throws(Exception.constructor)
            
    public: void handleCost(PathFindingLayerInterface* ownerLayer);

    public: PathFindingLayerInterface* getParentLayer();

    public: RTSLayer2LogHelper* getRTSLayer2LogHelper();

                //@Throws(Exception.constructor)
            
    public: void setTarget(PathFindingLayerInterface* targetGameLayer);

                //@Throws(Exception.constructor)
            
    public: void init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);

    public: BasicArrayList* getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void setClosestGeographicMapCellHistory(BasicArrayList* pathsList);

    public: void teleportTo(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void setLoad(int32_t resource);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getSurroundingGeographicMapCellPositionList();

    public: bool isSelected();

    public: bool shouldAddWaypointFromBuilding();

    public: bool isShowMoreCaptionStates();

                //@Throws(Exception.constructor)
            
    public: void trackTo(std::string reason);

                //@Throws(Exception.constructor)
            
    public: void trackToDXY(int32_t dx, int32_t dy);

                //@Throws(Exception.constructor)
            
    public: bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);

    public: TrackingEvent* getTrackingEvent();

    public: void allStop();

    public: bool isWaypointListEmptyOrOnlyTargets();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getCurrentGeographicMapCellPosition();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getTopLeftGeographicMapCellPosition();

    public: CaptionAnimationHelperBase* getCaptionAnimationHelper();

    public: WaypointBehaviorBase* getWaypointBehavior();

    public: WaypointLogHelper* getWaypointLogHelper();

    public: Waypoint2LogHelper* getWaypoint2LogHelper();

    public: WaypointRunnableLogHelper* getWaypointRunnableLogHelper();

    public: std::vector<Group*> getGroupInterface();

                //@Throws(Exception.constructor)
            
    public: bool isDestroyed();

    public: int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_NULLPATHFINDINGLAYER_H
