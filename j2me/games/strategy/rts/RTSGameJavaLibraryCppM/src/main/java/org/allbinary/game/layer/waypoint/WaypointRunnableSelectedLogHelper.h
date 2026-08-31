
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H

#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointRunnableLogHelper.h"

class WaypointRunnableSelectedLogHelper: public WaypointRunnableLogHelper {
        

    private: static const instanceC: WaypointRunnableSelectedLogHelper = new WaypointRunnableSelectedLogHelper();

    public static WaypointRunnableSelectedLogHelper getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public start(PathFindingLayerInterface pathFindingLayerInterface);

    public end(PathFindingLayerInterface pathFindingLayerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINT_WAYPOINTRUNNABLESELECTEDLOGHELPER_H
