
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLESINGLETON_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLESINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintableSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h"


WaypointInfoHudPaintableSingleton::WaypointInfoHudPaintableSingleton() {
        }
        auto WaypointInfoHudPaintableSingleton::instance_owner() -> WaypointInfoHudPaintable* { static std::unique_ptr<WaypointInfoHudPaintable> value(new WaypointInfoHudPaintable()); return value.get(); }
WaypointInfoHudPaintable* WaypointInfoHudPaintableSingleton::instance = WaypointInfoHudPaintableSingleton::instance_owner();

    auto WaypointInfoHudPaintableSingleton::getInstance() -> WaypointInfoHudPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WaypointInfoHudPaintableSingleton::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTINFOHUDPAINTABLESINGLETON_CPP
