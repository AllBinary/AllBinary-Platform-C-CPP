
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/identification/Group.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/event/WaypointEventHandler.h"

class WaypointEventHandlerFactory
            : public Object
         {

    private: static inline const std::vector<WaypointEventHandler*> eventHandlerArray = 
                                                        {
                                                            new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler(),new WaypointEventHandler()
                                                        };

    public: static WaypointEventHandler* getInstance(Group* groupInterface);

    public: static void removeAll();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_H
