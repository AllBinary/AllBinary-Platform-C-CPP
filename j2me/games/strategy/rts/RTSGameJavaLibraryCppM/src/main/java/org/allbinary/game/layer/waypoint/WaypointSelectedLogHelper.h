
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class PathFindingLayerInterface;
class WaypointBehaviorBase;
class CollidableDestroyableDamageableLayer;
class LogUtil;
class CommonLabels;
class CommonSeps;
class StringMaker;
class StringUtil;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointSelectedLogHelper: public WaypointLogHelper {

    private: static WaypointSelectedLogHelper* instanceC_owner();
    private: static WaypointSelectedLogHelper* instanceC;

    public: static WaypointSelectedLogHelper* getInstance();


            
    public: WaypointSelectedLogHelper();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonSeps* commonSeps;

    private: StringUtil* stringUtil;

    public: void onWaypointEvent(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);

    public: void addWaypointFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);

    public: void addWaypointFromBuildingList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list);

    public: void insertWaypoint(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName);

    public: void insertWaypointList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, std::string waypointName, BasicArrayList* list);

    public: void setRandomGeographicMapCellHistoryList(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);

    public: void moveAwayFromBuilding(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void needToMove(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior);

    public: void setRandomGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

    public: void setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition);

    public: void setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/PathFindingLayerInterface.h>)
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>
#endif
#if __has_include(<org/allbinary/game/layer/WaypointBehaviorBase.h>)
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
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

        #endif
    
