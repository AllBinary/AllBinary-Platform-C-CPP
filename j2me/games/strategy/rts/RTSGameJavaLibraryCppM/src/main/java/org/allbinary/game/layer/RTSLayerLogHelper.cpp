
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayerLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/math/NamedAngle.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PathFindingLayerInterface.h"


RTSLayerLogHelper::RTSLayerLogHelper() {
        }
        auto RTSLayerLogHelper::instance_owner() -> RTSLayerLogHelper* { static std::unique_ptr<RTSLayerLogHelper> value(new RTSLayerLogHelper()); return value.get(); }
RTSLayerLogHelper* RTSLayerLogHelper::instance = RTSLayerLogHelper::instance_owner();

    auto RTSLayerLogHelper::getInstance() -> RTSLayerLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RTSLayerLogHelper::instance;
    
}


    auto RTSLayerLogHelper::setClosestGeographicMapCellHistory(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) -> void{
}


    auto RTSLayerLogHelper::trackTo(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, std::string reason) -> void{
}


    auto RTSLayerLogHelper::turnTo(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle) -> void{
}


    auto RTSLayerLogHelper::doneMoving(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::closeEnough(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::movingLeft(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::movingRight(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::movingUp(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::movingDown(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::currentMoveEnded(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::evade(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::rotateLeft(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::rotateRight(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::handle(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle) -> void{
}


    auto RTSLayerLogHelper::noRotation(PathFindingLayerInterface* associatedAdvancedRTSGameLayer) -> void{
}


    auto RTSLayerLogHelper::notOnPath(PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERLOGHELPER_CPP
