
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayer2SelectedLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"


RTSLayer2SelectedLogHelper::RTSLayer2SelectedLogHelper() : logUtil(LogUtil::getInstance()) {
        }
        auto RTSLayer2SelectedLogHelper::instanceC_owner() -> RTSLayer2SelectedLogHelper* { static std::unique_ptr<RTSLayer2SelectedLogHelper> value(new RTSLayer2SelectedLogHelper()); return value.get(); }
RTSLayer2SelectedLogHelper* RTSLayer2SelectedLogHelper::instanceC = RTSLayer2SelectedLogHelper::instanceC_owner();

    auto RTSLayer2SelectedLogHelper::getInstance() -> RTSLayer2SelectedLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RTSLayer2SelectedLogHelper::instanceC;
    
}


    auto RTSLayer2SelectedLogHelper::steeringUp(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Up")), this, this->TRACK_TO_FIRE_OR_MOVE);
    
}


    auto RTSLayer2SelectedLogHelper::steeringFireOrStop(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Fire/All Stop")), this, this->TRACK_TO_FIRE_OR_MOVE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingAbove(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Above")), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingChaseLeft(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Left: ")->appendint(angle)), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingChaseRight(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Right: ")->appendint(angle)), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingDown(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Below")), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingChaseDown(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Down: ")->appendint(angle)), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingChaseUp(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" steering - Going Up: ")->appendint(angle)), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingLeft(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Left")), this, this->BUILDING_CHASE);
    
}


    auto RTSLayer2SelectedLogHelper::buildingRight(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(pathFindingLayerInterface->getName())->append(" Building Right")), this, this->BUILDING_CHASE);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER2SELECTEDLOGHELPER_CPP
