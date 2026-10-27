
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Group;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class WaypointEventHandler;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WaypointEventHandlerFactory
            : public virtual Object
         {

    private: static std::vector<WaypointEventHandler*> eventHandlerArray;

    public: static WaypointEventHandler* getInstance(Group* groupInterface);

    public: static void removeAll();


            
    public: WaypointEventHandlerFactory();
        
};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_EVENT_WAYPOINTEVENTHANDLERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/identification/Group.h>)
#include <org/allbinary/game/identification/Group.h>
#endif
#if __has_include("org/allbinary/game/layer/waypoint/event/WaypointEventHandler.h")
#include "org/allbinary/game/layer/waypoint/event/WaypointEventHandler.h"
#endif

        #endif
    
