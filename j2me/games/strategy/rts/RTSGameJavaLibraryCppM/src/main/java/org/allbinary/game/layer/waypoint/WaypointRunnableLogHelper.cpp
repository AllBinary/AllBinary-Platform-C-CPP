
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLELOGHELPER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLELOGHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

WaypointRunnableLogHelper::WaypointRunnableLogHelper() {
        }
        auto WaypointRunnableLogHelper::instance_owner() -> WaypointRunnableLogHelper* { static std::unique_ptr<WaypointRunnableLogHelper> value(new WaypointRunnableLogHelper()); return value.get(); }
WaypointRunnableLogHelper* WaypointRunnableLogHelper::instance = WaypointRunnableLogHelper::instance_owner();

    auto WaypointRunnableLogHelper::getInstance() -> WaypointRunnableLogHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointRunnableLogHelper::instance;
    
}


    auto WaypointRunnableLogHelper::start(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
}


    auto WaypointRunnableLogHelper::end(PathFindingLayerInterface* pathFindingLayerInterface) -> void{
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLELOGHELPER_CPP
