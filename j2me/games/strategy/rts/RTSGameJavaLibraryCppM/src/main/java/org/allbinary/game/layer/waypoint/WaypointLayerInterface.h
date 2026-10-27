
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CaptionAnimationHelperBase;
class WaypointBehaviorBase;
class TrackingEvent;
class AllBinaryLayer;
class GeographicMapCellHistory;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WaypointLogHelper;
class Waypoint2LogHelper;
class WaypointRunnableLogHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointLayerInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual void init(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) = 0;

    public: virtual BasicArrayList* getMoveOutOfBuildAreaPath(GeographicMapCellPosition* geographicMapCellPosition) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setClosestGeographicMapCellHistory(BasicArrayList* pathsList) = 0;

    public: virtual void teleportTo(GeographicMapCellPosition* geographicMapCellPosition) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setLoad(int32_t resource) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getSurroundingGeographicMapCellPositionList() = 0;

    public: virtual bool isSelected() = 0;

    public: virtual bool shouldAddWaypointFromBuilding() = 0;

    public: virtual bool isShowMoreCaptionStates() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void trackTo(std::string reason) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void trackToDXY(int32_t dx, int32_t dy) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool buildingChase(AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) = 0;

    public: virtual TrackingEvent* getTrackingEvent() = 0;

    public: virtual void allStop() = 0;

    public: virtual bool isWaypointListEmptyOrOnlyTargets() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GeographicMapCellPosition* getCurrentGeographicMapCellPosition() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GeographicMapCellPosition* getTopLeftGeographicMapCellPosition() = 0;

    public: virtual CaptionAnimationHelperBase* getCaptionAnimationHelper() = 0;

    public: virtual WaypointBehaviorBase* getWaypointBehavior() = 0;

    public: virtual WaypointLogHelper* getWaypointLogHelper() = 0;

    public: virtual Waypoint2LogHelper* getWaypoint2LogHelper() = 0;

    public: virtual WaypointRunnableLogHelper* getWaypointRunnableLogHelper() = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTLAYERINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/animation/caption/CaptionAnimationHelperBase.h>)
#include <org/allbinary/animation/caption/CaptionAnimationHelperBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/game/tracking/TrackingEvent.h>)
#include <org/allbinary/game/tracking/TrackingEvent.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointLogHelper.h")
#include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h")
#include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"
#endif
#if __has_include("org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h")
#include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"
#endif

        #endif
    
