
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/WaypointPathRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/WaypointPathRunnableBase.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"


WaypointPathRunnable::WaypointPathRunnable() : logUtil(LogUtil::getInstance()){
}


    auto WaypointPathRunnable::run() -> void{

        try {
            this->pathFindingLayer->getWaypointRunnableLogHelper()->start(this->pathFindingLayer);
    

    WaypointBehaviorBase* waypointBehavior = this->pathFindingLayer->getWaypointBehavior();;
    

    GeographicMapCellPosition* geographicMapCellPosition = this->pathFindingLayer->getCurrentGeographicMapCellPosition();;
    

                        if(geographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Should never be running here");
                    

                                    }
                                
waypointBehavior->setWaypointPathsList(this->targetPathFindingLayer->getWaypointBehavior()->getWaypoint()->getPathsListRunnable(geographicMapCellPosition));
    
this->pathFindingLayer->getWaypointRunnableLogHelper()->end(this->pathFindingLayer);
    
Thread::sleep(15 +(this->priorityP *2));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
this->setRunning(false);
    
}

}


    auto WaypointPathRunnable::isDone() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WAYPOINTPATHRUNNABLE_CPP
