
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/AssignWaypointsUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/input/form/PrimaryWaypointHelper.h"


AssignWaypointsUtil::AssignWaypointsUtil() : logUtil(LogUtil::getInstance()), WAYPOINT_EVENT(new RTSLayerEvent(NullPathFindingLayer::NULL_PATH_FINDING_LAYER)) {
        }
        auto AssignWaypointsUtil::instance_owner() -> AssignWaypointsUtil* { static std::unique_ptr<AssignWaypointsUtil> value(new AssignWaypointsUtil()); return value.get(); }
AssignWaypointsUtil* AssignWaypointsUtil::instance = AssignWaypointsUtil::instance_owner();

    auto AssignWaypointsUtil::getInstance() -> AssignWaypointsUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AssignWaypointsUtil::instance;
    
}


    auto AssignWaypointsUtil::set(UnitLayer* unitLayer, AdvancedRTSGameLayer* ownerAdvancedRTSGameLayer) -> void{

        try {
            
    BasicArrayList* list = ownerAdvancedRTSGameLayer->getWaypointBehavior()->getOwnedWaypointList();;
    

    UnitWaypointBehavior* unitWaypointBehavior = dynamic_cast<UnitWaypointBehavior*>(unitLayer->getWaypointBehavior());;
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {

    RTSLayer* waypointLayer = dynamic_cast<RTSLayer*>(list->get(index));;
    
this->WAYPOINT_EVENT->setRtsLayer(waypointLayer);
    
unitWaypointBehavior->onWaypointEvent(this->WAYPOINT_EVENT);
    
}


    PathFindingLayerInterface* waypointLayer = PrimaryWaypointHelper::getInstance()->getWaypointLayer();;
    

                        if(waypointLayer != NullPathFindingLayer::NULL_PATH_FINDING_LAYER)
                        
                                    {
                                    this->WAYPOINT_EVENT->setRtsLayer(waypointLayer);
    
unitWaypointBehavior->onWaypointEvent(this->WAYPOINT_EVENT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "set", &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_ASSIGNWAYPOINTSUTIL_CPP
