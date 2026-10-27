
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/PrimaryWaypointHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/waypoint/WaypointLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto PrimaryWaypointHelper::instance_owner() -> PrimaryWaypointHelper* { static std::unique_ptr<PrimaryWaypointHelper> value(new PrimaryWaypointHelper()); return value.get(); }
PrimaryWaypointHelper* PrimaryWaypointHelper::instance = PrimaryWaypointHelper::instance_owner();

    auto PrimaryWaypointHelper::getInstance() -> PrimaryWaypointHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimaryWaypointHelper::instance;
    
}


PrimaryWaypointHelper::PrimaryWaypointHelper() : waypointLayer(NullPathFindingLayer::NULL_PATH_FINDING_LAYER){
}


    auto PrimaryWaypointHelper::getWaypointLayer() -> PathFindingLayerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointLayer;
    
}


    auto PrimaryWaypointHelper::setWaypointLayer(WaypointLayer* waypointLayer) -> void{
this->waypointLayer= waypointLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_PRIMARYWAYPOINTHELPER_CPP
