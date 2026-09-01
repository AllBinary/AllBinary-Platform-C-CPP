
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H
        #define ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/unit/UnitLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PrimaryWaypointHelper.h"

class AssignWaypointsUtil
            : public Object
         {

    private: static AssignWaypointsUtil instance() { return AssignWaypointsUtil(); }

    public: static AssignWaypointsUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const RTSLayerEvent WAYPOINT_EVENT = RTSLayerEvent(NullPathFindingLayer::NULL_PATH_FINDING_LAYER);

    public: void set(UnitLayer unitLayer, AdvancedRTSGameLayer ownerAdvancedRTSGameLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_H
