
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/game/layer/unit/UnitLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitWaypointBehavior.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PrimaryWaypointHelper.h"

class AssignWaypointsUtil
            : public Object
         {
        

    private: static const instance: AssignWaypointsUtil = new AssignWaypointsUtil();

    public static AssignWaypointsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AssignWaypointsUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const WAYPOINT_EVENT: RTSLayerEvent = new RTSLayerEvent(NullPathFindingLayer.NULL_PATH_FINDING_LAYER);

    public set(UnitLayer unitLayer, AdvancedRTSGameLayer ownerAdvancedRTSGameLayer){

        try {
            
    list: BasicArrayList = ownerAdvancedRTSGameLayer!.getWaypointBehavior()!.getOwnedWaypointList()!;;
    

    unitWaypointBehavior: UnitWaypointBehavior = unitLayer!.getWaypointBehavior() as UnitWaypointBehavior;;
    




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {

    waypointLayer: RTSLayer = list.get(index) as RTSLayer;;
    
this.WAYPOINT_EVENT.setRtsLayer(waypointLayer);
    
unitWaypointBehavior!.onWaypointEvent(this.WAYPOINT_EVENT);
    
}


    waypointLayer: PathFindingLayerInterface = PrimaryWaypointHelper.getInstance()!.getWaypointLayer()!;;
    

                        if(waypointLayer != NullPathFindingLayer.NULL_PATH_FINDING_LAYER)
                        
                                    {
                                    this.WAYPOINT_EVENT.setRtsLayer(waypointLayer);
    
unitWaypointBehavior!.onWaypointEvent(this.WAYPOINT_EVENT);
    

                                    }
                                

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "set", e);
    
}

}


};

            

