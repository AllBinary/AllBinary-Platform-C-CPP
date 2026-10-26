
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLELOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLELOGHELPER_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WaypointRunnableLogHelper
            : public Object
         {

    private: static WaypointRunnableLogHelper instance() { return WaypointRunnableLogHelper(); }

    public: static WaypointRunnableLogHelper getInstance();

    public: void start(PathFindingLayerInterface pathFindingLayerInterface);

    public: void end(PathFindingLayerInterface pathFindingLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLELOGHELPER_H
