
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayer2LogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PathFindingLayerInterface.h"


RTSLayer2LogHelper::RTSLayer2LogHelper() {
        }
        auto RTSLayer2LogHelper::instance_owner() -> RTSLayer2LogHelper* { static std::unique_ptr<RTSLayer2LogHelper> value(new RTSLayer2LogHelper()); return value.get(); }
RTSLayer2LogHelper* RTSLayer2LogHelper::instance = RTSLayer2LogHelper::instance_owner();

    auto RTSLayer2LogHelper::getInstance() -> RTSLayer2LogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayer2LogHelper::instance;
    
}


    auto RTSLayer2LogHelper::steeringUp(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
}


    auto RTSLayer2LogHelper::steeringFireOrStop(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
}


    auto RTSLayer2LogHelper::buildingAbove(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
}


    auto RTSLayer2LogHelper::buildingChaseLeft(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
}


    auto RTSLayer2LogHelper::buildingChaseRight(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
}


    auto RTSLayer2LogHelper::buildingDown(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
}


    auto RTSLayer2LogHelper::buildingChaseDown(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
}


    auto RTSLayer2LogHelper::buildingChaseUp(PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) -> void{
}


    auto RTSLayer2LogHelper::buildingLeft() -> void{
}


    auto RTSLayer2LogHelper::buildingRight() -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYER2LOGHELPER_CPP
