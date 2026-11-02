
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/event/WaypointEventHandlerFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/identification/Group.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/event/WaypointEventHandler.h"


WaypointEventHandlerFactory::WaypointEventHandlerFactory() {
        }
        std::vector<WaypointEventHandler*> WaypointEventHandlerFactory::eventHandlerArray = 
                                                        {
                                                            new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler()
                                                        };

    auto WaypointEventHandlerFactory::getInstance(Group* groupInterface) -> WaypointEventHandler*{

    int32_t groupId = static_cast<int32_t>(groupInterface->getGroupId());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointEventHandlerFactory::eventHandlerArray[groupId];
    
}


    auto WaypointEventHandlerFactory::removeAll() -> void{




                        for (
    int32_t index = WaypointEventHandlerFactory::eventHandlerArray.size() -1;index >= 0; index--)
        {
WaypointEventHandlerFactory::eventHandlerArray[index]->removeAllListeners();
    
}

}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_CPP
