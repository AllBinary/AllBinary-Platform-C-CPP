
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

#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/WaypointBehaviorBase.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointLogHelper.h"

class WaypointSelectedLogHelper: public WaypointLogHelper {

    private: static const WaypointSelectedLogHelper instanceC = WaypointSelectedLogHelper();

    public: static WaypointSelectedLogHelper getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    public: void onWaypointEvent(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer);

    public: void addWaypointFromBuilding(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer);

    public: void addWaypointFromBuildingList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, PathFindingLayerInterface advancedRTSGameLayer, BasicArrayList list);

    public: void insertWaypoint(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer rtsLayer, std::string waypointName);

    public: void insertWaypointList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer rtsLayer, std::string waypointName, BasicArrayList list);

    public: void setRandomGeographicMapCellHistoryList(PathFindingLayerInterface associatedAdvancedRTSGameLayer, BasicArrayList pathsList);

    public: void moveAwayFromBuilding(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void needToMove(PathFindingLayerInterface associatedAdvancedRTSGameLayer, WaypointBehaviorBase unitWaypointBehavior);

    public: void setRandomGeographicMapCellHistory(PathFindingLayerInterface associatedAdvancedRTSGameLayer);

    public: void setCurrentPathGeographicMapCellPosition(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition currentPathGeographicMapCellPosition);

    public: void setNextUnvisitedPathGeographicMapCellPosition(PathFindingLayerInterface associatedAdvancedRTSGameLayer, GeographicMapCellPosition existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition nextUnvisitedPathGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTSELECTEDLOGHELPER_H
