
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/RTSLayerEvent.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BuildingEventListenerInterface.h"

class BuildingEventHandler: public BasicEventHandler {

    private: static BuildingEventHandler eventHandler = BuildingEventHandler();

    public: static BuildingEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BuildingEventHandler::eventHandler;
    
}


private: BuildingEventHandler(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    BuildingEventListenerInterface buildingEventListenerInterface = (eventListenerInterface as BuildingEventListenerInterface);;
    
buildingEventListenerInterface.onBuildingEvent(eventObject as RTSLayerEvent);
    
}


};

            

