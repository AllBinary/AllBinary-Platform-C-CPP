
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "WaypointPathRunnableBase.h"
#include "WaypointBehaviorBase.h"

class WaypointPathRunnable: public WaypointPathRunnableBase {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: WaypointPathRunnable(){
}


    public: void run(){

        try {
            this->pathFindingLayer.getWaypointRunnableLogHelper().start(this->pathFindingLayer);
    

    WaypointBehaviorBase waypointBehavior = this->pathFindingLayer.getWaypointBehavior();;
    

    GeographicMapCellPosition geographicMapCellPosition = this->pathFindingLayer.getCurrentGeographicMapCellPosition();;
    

                        if(geographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Should never be running here");
                    

                                    }
                                
waypointBehavior.setWaypointPathsList(this->targetPathFindingLayer.getWaypointBehavior().getWaypoint().getPathsListRunnable(geographicMapCellPosition));
    
this->pathFindingLayer.getWaypointRunnableLogHelper().end(this->pathFindingLayer);
    
Thread::sleep(15 +(this->priorityP *2));
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
this->setRunning(false);
    
}

}


    public: bool isDone(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


};

            

